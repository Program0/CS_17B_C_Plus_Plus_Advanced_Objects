/*
* File: playspace.cpp
* Implementation file for the PlaySpace class. The class inherits from
* QWidget. It displays and accepts user created code and guess entries for the
* game bulls and cows - a version predating mastermind.
* Author: Marlo Zeroth
*/

#ifndef PLAYSPACE_CPP
#define PLAYSPACE_CPP

#include <QMessageBox>
#include "playspace.h"

PlaySpace::PlaySpace(QMap<QString, QString> map, unsigned int size,
                     QWidget *parent, Qt::WindowFlags f):QWidget(parent,f){

    // Total number of tries possible for one round
    totalGuesses = size;    

    // This will be used when loading a saved game that is not finished
    // and for displaying the code after the game is finished
    codeComponents = map;

    // Set the bull and cow images
    QString image1(":/images/bull-icon.png");
    QString image2(":/images/cow-icon.png");
    QPixmap b1(image1);
    QPixmap c1 (image2);
    bull = b1;
    cow = c1;

    // Create the difficulty radio button group
    QGroupBox *difficultyRadioBox = createDifficultyBox();
    QGroupBox *groupOptionsBox = createOptionsBox();

    // Create a dialog for entering the code
    codeEntry = new CodeDialog(map,difficulty->checkedId());

    // Create an CodeScene object with images to drag and choose from
    codeScene = new CodeScene(map,parent);
    // Creates its view
    codeView = new QGraphicsView;
    codeView->setScene(codeScene);

    dummyView  = createDummyView();

    // Connect the slots for several of the objects such as when the newGameButton is pressed
    // a new game starts
    connect(newGameButton,SIGNAL(clicked(bool)),this,SLOT(newGame(bool)));
    connect(difficulty,SIGNAL(buttonPressed(int)),codeEntry,SLOT(updateSize(int)));    
    connect(codeEntry,SIGNAL(startGame(QString)),this,SLOT(setCode(QString)));
    connect(duplicates,SIGNAL(toggled(bool)),codeEntry,SLOT(setAllowDuplicates(bool)));


    // Set the top layout
    QLabel *codeDummy = new QLabel(parent);
    codeDummy->setText("Code to break: ");
    codeDummy->setStyleSheet("background-color: green; color: yellow; font: 18pt");
    QVBoxLayout *topLayout = new QVBoxLayout;
    topLayout->addWidget(codeDummy);
    topLayout->addWidget(dummyView);

    // Set the bottom layout
    QHBoxLayout *bottomLayout = new QHBoxLayout;    
    bottomLayout->addWidget(difficultyRadioBox);
    bottomLayout->addWidget(groupOptionsBox);

    QVBoxLayout *guessLayout = new QVBoxLayout;

    // Create GuessEntry objects and connect the bullsCows signal to their setBullsCows slots
    for(unsigned int i = 0; i<size;i++){
        GuessEntry *entry = new GuessEntry(map,bull, cow, difficulty->checkedId(),false,parent,f);
        guessLayout->addWidget(entry);
        connect(this,SIGNAL(codeChanged(QString)),entry,SLOT(setCodeWord(QString)));        
        guessInterface.prepend(entry);
    }

    // Iterators for current and its next GuessEntry object in the list
    List<GuessEntry*>::iterator next = guessInterface.begin();
    List<GuessEntry*>::iterator curr = next++;
    List<GuessEntry*>::iterator finish = guessInterface.end();

    // Go through each guessInterface object in the list and connect it to its adjacent
    // object so it knows when it is finished. Also connect each guessInterface object
    // with this so it knows when the code is cracked and it displays it.
    while(next!=finish){
        connect(*curr,SIGNAL(finished(bool)),*next,SLOT(setCurrent(bool)));
        connect(*curr,SIGNAL(solved(bool)),this,SLOT(showCode(bool)));
        curr++;
        next++;
    }

    // Add the codeView right below the guessEntry objects
    guessLayout->addWidget(codeView);

    // Also connect the last guessInterface object with this, so it knows when the
    // game is finished and shows the code
    connect(guessInterface.last(),SIGNAL(finished(bool)),this,SLOT(showCode(bool)));

    // Put all the layouts together
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(topLayout);
    mainLayout->addLayout(guessLayout);
    mainLayout->addLayout(bottomLayout);

    // Set the main layout
    setLayout(mainLayout);
}

// Sets the code word for the game (technically the icons that show)
void PlaySpace::setCode(const QString &entry){
    if(codeWord!=entry){
        codeWord = entry;
        emit codeChanged(codeWord);
    }
}

// Starts a new game with the entered code word and difficulty
// signal
void PlaySpace::newGame(bool test){

    if(!test){

        // Reset the current status of the individual GuessEntry objects
        // Iterators for current and its next GuessEntry object in the list
        List<GuessEntry*>::iterator curr = guessInterface.begin();
        List<GuessEntry*>::iterator finish = guessInterface.end();

        // Go through each guessInterface object in the list and reset current to false
        while(curr!=finish){
            (*curr)->setSize(difficulty->checkedId());
            (*curr)->setCurrent(false);
            (*curr)->reset();
            curr++;
        }
        // Set the code word for the game
        if(playerRole->currentIndex()==1){
            codeEntry->show();
        }
        else{
            codeChanged(generateCode());
        }

        // Update the dummy code view
        updateDummyView(difficulty->checkedId());

        // Set the first guessEntry as current
        guessInterface.first()->setCurrent(true);
    }
}

// Generates a QString code based on available code components
QString PlaySpace::generateCode(){

    QString randomCode("");
    int optionSize = codeScene->text().size();
    QString optionString = codeScene->text();
    int codeSize = difficulty->checkedId();
    if(!duplicates->isChecked()){
        QString charOptions = optionString;
        // Iterate through the available options and concatenate a string based
        // on a pseudo-random choice of its letters until the requested sized
        // string is generated.
        for(int i = 0; i<codeSize;i++){
            QString charToAdd;
            if(charOptions.size()>1)
                charToAdd=QString(charOptions[qrand()% (charOptions.size()-1)]);
            else
                charToAdd=QString(charOptions[0]);
            randomCode = (randomCode+charToAdd);
            if(charOptions.size()>1)
                charOptions=charOptions.remove(charToAdd,Qt::CaseInsensitive);
        }


    }else{
        // Iterate through the available options and concatenate a string based
        // on a pseudo-random choice of its letters.
        for(int i = 0; i<codeSize;i++){
            randomCode = (randomCode+QString(optionString[qrand()% (optionSize-1)]));
        }
    }

    return randomCode;
}

// Creates a difficulty QGroupBox of radio buttons
QGroupBox* PlaySpace::createDifficultyBox(){

    // Length of code and guess entries accepted
    int easyDiff = 4;
    int midDiff = 6;
    int hardDiff = 8;

    // Set the difficulty
    difficulty = new QButtonGroup;
    QGroupBox *difficultyRadioBox = new QGroupBox(tr("Difficulty:"));
    QRadioButton *easy = new QRadioButton(tr("Easy: "));
    QRadioButton *medium = new QRadioButton(tr("Medium:"));
    QRadioButton *hard = new QRadioButton(tr("Hard:"));

    // Make it be an exclusive group box
    easy->setChecked(true);
    // Add the buttons to the difficulty button group
    difficulty->addButton(easy);
    difficulty->addButton(medium);
    difficulty->addButton(hard);

    // Set the values for the difficulty
    difficulty->setId(easy,easyDiff);
    difficulty->setId(medium,midDiff);
    difficulty->setId(hard,hardDiff);

    // Create a layout for the game options difficulty
    QHBoxLayout *diffLayout = new QHBoxLayout;
    diffLayout->addWidget(easy);
    diffLayout->addWidget(medium);
    diffLayout->addWidget(hard);

    difficultyRadioBox->setLayout(diffLayout);

    return difficultyRadioBox;
}

// Creates a QGroupBox of a QComboBox and QPushButton
QGroupBox* PlaySpace::createOptionsBox(){

    // Prepare the playerRole combo box
    playerRole = new QComboBox;
    QStringList options;
    options<< "Breaker" <<"Creator";
    playerRole->addItems(options);

    codeLabel = new QLabel;
    codeLabel->setText(tr("Player Role:"));
    codeLabel->setBuddy(playerRole);

    duplicates = new QCheckBox(tr("Allow &duplicates?"));
    duplicates->setChecked(true);

    // Create a new game button
    newGameButton = new QPushButton("New Game");


    // Create a layout for the role and new game button
    QHBoxLayout *roleLayout = new QHBoxLayout;
    roleLayout->addWidget(codeLabel);
    roleLayout->addWidget(playerRole);
    roleLayout->addWidget(duplicates);
    roleLayout->addWidget(newGameButton);

    // Create the button group
     QGroupBox *groupBox = new QGroupBox(tr("Player Options:"));

    groupBox->setLayout(roleLayout);
    return groupBox;
}

QGraphicsView* PlaySpace::createDummyView(){
    int total = difficulty->checkedId();

    dummy = new QGraphicsScene;

    QPixmap pixmap(":/images/question.png");
    int iconWidth = 40;

    for(int i =0;i<total;i++){
        QGraphicsPixmapItem *item = new QGraphicsPixmapItem(pixmap);
        item->setPos(i*iconWidth,0);
        dummy->addItem(item);
    }

    QGraphicsView *view = new QGraphicsView;
    view->setScene(dummy);
    view->setMinimumSize(400,55);
    view->setMaximumSize(480,58);
    view->setStyleSheet("background-color: green;");
    return view;
}

void PlaySpace::updateDummyView(int newCodeLength){

        // Clear the scene - automatically deletes all items in the scene
        dummy->clear();

        QPixmap pixmap(":/images/question.png");// Default question mark image
        int iconWidth = 40; // Width of each image/icon

        // Iterate through the number provided in the difficulty radio
        // button box and create new items for the scene
        for(int i =0;i<newCodeLength;i++){
            QGraphicsPixmapItem *item = new QGraphicsPixmapItem(pixmap);
            item->setPos(i*iconWidth,0); // Set this item's position in the scene
            dummy->addItem(item);
        }

        // Update the view to show the new scene
        dummyView->update();

}

void PlaySpace::showCode(bool complete){
    if(complete){
        // Clear the scene to prepare to show the code
        dummy->clear();

        int total = codeWord.length();
        int iconWidth = 40; // Width of each image/icon

        // Iterate through the number provided in the difficulty radio
        // button box and create new items for the scene
        for(int i =0;i<total;i++){
            QString imagePath = codeComponents.value(QString(QChar(codeWord[i])));
            QPixmap pixmap(imagePath);// Show the image related to the code
            QGraphicsPixmapItem *item = new QGraphicsPixmapItem(pixmap);
            item->setPos(i*iconWidth,0); // Set this item's position in the scene
            dummy->addItem(item);
        }

        // Update the view to show the new scene
        dummyView->update();
    }
}

void PlaySpace::loadGame(Game &game){

}

void PlaySpace::saveGame(){

}

#endif // PLAYSPACE_CPP


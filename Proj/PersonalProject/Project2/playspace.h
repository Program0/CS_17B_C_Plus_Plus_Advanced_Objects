/*
* File: playspace.h
* Interface file for PlaySpace class. The class inherits from
* QWidget. It displays and accepts user created code and guess entries for the
* game bulls and cows - a version predating mastermind.
* Author: Marlo Zeroth
*/

#ifndef PLAYSPACE_H
#define PLAYSPACE_H

#include <QWidget>
#include <QString>
#include <QList>
#include <QStack>
#include <QVector>
#include <QPixmap>
#include <QComboBox>
#include <QGroupBox>
#include <QButtonGroup>
#include <QRadioButton>
#include <QStringList>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGraphicsView>

// User libraries
#include "guessentry.h"
#include "list.h" // User created templated doubly-linked list
#include "codescene.h"
#include "codedialog.h"
#include "game.h"

class PlaySpace:public QWidget{

    Q_OBJECT

public:
    // Main constructor
    PlaySpace(QMap<QString, QString> map, unsigned int size, QWidget *parent=0, Qt::WindowFlags f=0);

public slots:
    void setCode(const QString &entry);
    // Sets the new code word

    void loadGame(Game &game);
    // Loads a saved game

    void saveGame();

    void newGame(bool test);
    // Starts a new game

private slots:    

    void showCode(bool complete);
    // Reveals the actual code when the game is finished

signals:    
    void codeChanged(QString code);
    void gameFinished(bool );
    void codeLengthChanged(int );
    void guessNumberChanged(int );

private:

    QPixmap cow; // To hold images for cows
    QPixmap bull; // To hold images for bulls
    QString codeWord; // Holds the current code to break    
    unsigned int totalGuesses; // Holds how many guess entries to generate    
    bool finished; // If the current game is complete
    QMap<QString,QString> codeComponents; // Valid Components that can be used to generate a code and output images
    QString options; // Holds the keys of codeComponents to easily generate code
    List<GuessEntry *> guessInterface; // Holds the guessing interface.

    // For the new game entry
    CodeDialog *codeEntry; // Used to get an user generated code
    QGraphicsScene *dummy; //
    QGraphicsView *dummyView; //
    QLabel *codeLabel; // Buddy label for iconView
    CodeScene *codeScene; // Holds icons elements to drop onto GuessEntry objects
    QGraphicsView *codeView; // Displays the iconScene
    QButtonGroup *difficulty; // Determines the size of the code
    QCheckBox *duplicates; // Determines whether duplicates are allowed in the code
    QComboBox *playerRole; // Determines whether a player generates or breaks the code
    QPushButton *newGameButton; // Starts/resets the game
    QPushButton *quitButton;

    /*Utility functions*/
    QString generateCode();
    // Generates a code if player is breaker

    QGroupBox* createDifficultyBox();
    // Creates a radion button group box with difficulty levels

    QGroupBox* createOptionsBox();
    // Creates a button group box with the player role and new game button

    QGraphicsView* createDummyView();
    // Creates a dummy code QGraphicsView while playing the game

    void updateDummyView(int newCodeLength);
    // Updates the size of the shown dummy code whenever the difficulty changes

};

#endif // PLAYSPACE_H


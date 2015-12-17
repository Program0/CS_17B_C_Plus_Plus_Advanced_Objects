
#include "mainwindow.h"

MainWindow::MainWindow():TRIES(10){


    imageFiles = new QFile(":/text/code_options.txt");
    QMap<QString,QString> map = loadImages(*imageFiles);
    playSpace = new PlaySpace(map,TRIES);
    setCentralWidget(playSpace);

    createActions();
    createMenus();
    createContextMenu();
    createToolBars();
    createStatusBar();

    readSettings();

    loginDialog =  new LoginDialog;
    newUserDialog = new NewUserDialog;
    loginUser = NULL;
    connectState = createConnection();

    setAttribute(Qt::WA_DeleteOnClose);
    // Release memory when the application closes

    setWindowIcon(QIcon(":/images/bull-icon.png"));
    setCurrentFile("");
}

void MainWindow::login(){
    loginDialog->show();
}

typename MainWindow::Connection MainWindow::createConnection(){
    QSqlDatabase::drivers();
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL","QMYSQLCSC17B");
    // Create database object to access remote database

    // Set the login information
    db.setHostName("209.129.8.2");
    db.setDatabaseName("mastermind");
    db.setUserName("48941");
    db.setPassword("48941cis17b");


    Connection connection;
    connection.db = db;
    if (!db.open()) {
        QMessageBox msgBx;
        msgBx.setText("Error connecting to remote server.");
        msgBx.exec();
        connection.connected = false;
        return connection;
    }
    connection.connected = true;
    return connection;
}

void MainWindow::closeEvent(QCloseEvent *event){
    if (okToContinue()) {
        writeSettings();
        event->accept();
    } else {
        event->ignore();
    }
}

void MainWindow::newGame(){
    // Open multiple instances of the application
    MainWindow *mainWin = new MainWindow;
    mainWin->show();

}

void MainWindow::open(){
    if (okToContinue()) {
        QString fileName = QFileDialog::getOpenFileName(this,
                                   tr("Open Bulls and Cows"), ".",
                                   tr("Bulls and Cows files (*.bc)"));
        if (!fileName.isEmpty())
            loadFile(fileName);
    }
}
bool MainWindow::save(){
    if (curFile.isEmpty()) {
        return saveAs();
    } else {
        return saveFile(curFile);
    }
}

bool MainWindow::saveAs(){
    QString fileName = QFileDialog::getSaveFileName(this,
                               tr("Save game"), ".",
                               tr("Game files (*.bc)"));
    if (fileName.isEmpty())
        return false;

    return saveFile(fileName);
}

void MainWindow::about()
{
    QMessageBox::about(this, tr("About Bulls and Cows"),
            tr("<h2>Bulls and Cows 1.1</h2>"
               "<p>Copyright &copy; 2015 Marlo Zeroth."
               "<p>Bulls and Cows is a small application that "
               "demonstrates QNetwork, QMySQL, QAction, QMainWindow, QMenuBar, "
               "QStatusBar, QTableWidget, QToolBar, and many other "
               "Qt classes."));
}

void MainWindow::openRecentFile(){
    if (okToContinue()) {
        QAction *action = qobject_cast<QAction *>(sender());
        if (action)
            loadFile(action->data().toString());
    }
}

void MainWindow::updateStatusBar(){

}

void MainWindow::gameModified(){

}

void MainWindow::createActions(){

    newAction = new QAction(tr("&New"), this);
    newAction->setIcon(QIcon(":/images/new.png"));
    newAction->setShortcut(QKeySequence::New);
    newAction->setStatusTip(tr("Create a new bulls and cows game file"));
    connect(newAction, SIGNAL(triggered()), this, SLOT(newGame()));

    openAction = new QAction(tr("&Open..."), this);
    openAction->setIcon(QIcon(":/images/open.png"));
    openAction->setShortcut(QKeySequence::Open);
    openAction->setStatusTip(tr("Open an existing bulls and cows game file"));
    connect(openAction, SIGNAL(triggered()), this, SLOT(open()));

    saveAction = new QAction(tr("&Save"), this);
    saveAction->setIcon(QIcon(":/images/save.png"));
    saveAction->setShortcut(QKeySequence::Save);
    saveAction->setStatusTip(tr("Save the game to disk"));
    connect(saveAction, SIGNAL(triggered()), this, SLOT(save()));

    saveAsAction = new QAction(tr("Save &As..."), this);
    saveAsAction->setStatusTip(tr("Save the bulls and cows under a new "
                                  "name"));
    connect(saveAsAction, SIGNAL(triggered()), this, SLOT(saveAs()));

    for (int i = 0; i < MaxRecentFiles; ++i) {
        recentFileActions[i] = new QAction(this);
        recentFileActions[i]->setVisible(false);
        connect(recentFileActions[i], SIGNAL(triggered()),
                this, SLOT(openRecentFile()));
    }

    loginAction = new QAction(tr("L&ogin"),this);
    loginAction->setIcon(QIcon(":/images/login-icon.png"));
    loginAction->setShortcut(tr("Ctrl+L"));
    loginAction->setStatusTip(tr("Login to the remote server"));
    connect(loginAction,SIGNAL(triggered()),this,SLOT(login()));

    exitAction = new QAction(tr("E&xit"), this);
    exitAction->setShortcut(tr("Ctrl+Q"));
    exitAction->setStatusTip(tr("Exit the application"));
    connect(exitAction, SIGNAL(triggered()), this, SLOT(close()));

    aboutAction = new QAction(tr("&About"), this);
    aboutAction->setStatusTip(tr("Show the application's About box"));
    connect(aboutAction, SIGNAL(triggered()), this, SLOT(about()));

    aboutQtAction = new QAction(tr("About &Qt"), this);
    aboutQtAction->setStatusTip(tr("Show the Qt library's About box"));
    connect(aboutQtAction, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
}

void MainWindow::createMenus(){
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(newAction);
    fileMenu->addAction(openAction);
    fileMenu->addAction(saveAction);
    fileMenu->addAction(saveAsAction);
    fileMenu->addAction(loginAction);
    separatorAction = fileMenu->addSeparator();
    for (int i = 0; i < MaxRecentFiles; ++i)
        fileMenu->addAction(recentFileActions[i]);
    fileMenu->addSeparator();
    fileMenu->addAction(exitAction);

    menuBar()->addSeparator();

    helpMenu = menuBar()->addMenu(tr("&Help"));
    helpMenu->addAction(aboutAction);
    helpMenu->addAction(aboutQtAction);
}

void MainWindow::createContextMenu(){

}

void MainWindow::createToolBars(){
    fileToolBar = addToolBar(tr("&File"));
    fileToolBar->addAction(newAction);
    fileToolBar->addAction(openAction);
    fileToolBar->addAction(saveAction);
    fileToolBar->addAction(loginAction);
}

void MainWindow::createStatusBar(){

    loginLabel = new QLabel(" Local Player - Not Logged in ");
    loginLabel->setAlignment(Qt::AlignHCenter);
    loginLabel->setMinimumSize(loginLabel->sizeHint());

    currentMoveLabel = new QLabel;
    currentMoveLabel->setIndent(3);

    statusBar()->addWidget(loginLabel);
    statusBar()->addWidget(currentMoveLabel, 1);

    //connect(playSpace, SIGNAL(currentCellChanged(int, int, int, int)),
            //this, SLOT(updateStatusBar()));
    //connect(spreadsheet, SIGNAL(modified()),
            //this, SLOT(spreadsheetModified()));

    updateStatusBar();
}

void MainWindow::readSettings(){

}

void MainWindow::writeSettings(){

}

bool MainWindow::okToContinue(){
    return true;
}

bool MainWindow::loadFile(const QString &fileName){

    return true;
}

QMap<QString, QString> MainWindow::loadImages(QFile &file){
    // Creates a value pair image key (a string) and image value path (path to icon)
    QMap<QString,QString> map;

    // Test the file to ensure it opened
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
        std::cerr<<"Cannot open file for reading "
                <<qPrintable(file.errorString())<<std::endl;

    // Iterate through the text stream and load into the map
    QTextStream in(&file);
    while(!in.atEnd()){
       QString line = in.readLine();
       QStringList iconList;
       iconList=line.split("\t");
       std::cerr<<"Size of list "<<iconList.size()<<std::endl;
       QString iconValue = iconList.takeFirst();
       QString iconImage = QString(":/images/"+iconList.takeFirst());
       map.insert(iconValue,iconImage);
    }
    return map;
}

bool MainWindow::saveFile(const QString &fileName){
    return true;
}

void MainWindow::setCurrentFile(const QString &fileName){

}

void MainWindow::updateRecentFileActions(){

}

QString MainWindow::strippedName(const QString &fileName){
    QString a("a");
    return a;
}

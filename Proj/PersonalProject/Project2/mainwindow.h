/*
* File: mainwindow.h
* Interface file for MainWindow class. The class inherits from
* QWindow. It is the main class for displaying game.
* Author: Marlo Zeroth
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include <QMenu>

#include <QSql>
#include <QSqlQuery>
#include <QSqlDatabase>

#include "playspace.h"
#include "logindialog.h"
#include "newuserdialog.h"
#include "user.h"
#include "stack.h"

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    MainWindow();

protected:
    void closeEvent(QCloseEvent *event);
private slots:
    void newGame();
    void open();
    bool save();
    bool saveAs();
    void openRecentFile();
    void updateStatusBar();
    void gameModified();
    void about();
    void login(); // Opens the login dialog

private:
    // Struct for create database connections
    struct Connection{
        QSqlDatabase db;
        bool connected;
    };

    void createActions();
    void createMenus();
    void createContextMenu();
    void createToolBars();
    void createStatusBar();
    void readSettings();
    void writeSettings();
    bool okToContinue();    
    Connection createConnection();
    bool loadFile(const QString &fileName); // For loading an existing game either from network or locally
    QMap<QString,QString> loadImages(QFile &file); // For loading images to central widget
    bool saveFile(const QString &fileName); // Saving a game locally
    void setCurrentFile(const QString &fileName); // Setting the current game at start up
    void updateRecentFileActions(); // Updating the current moves    
    QString strippedName(const QString &fileName);

    const unsigned int TRIES;
    QFile *imageFiles;
    LoginDialog *loginDialog;
    NewUserDialog *newUserDialog;
    PlaySpace *playSpace;
    User *loginUser;
    Connection connectState;

    QLabel *loginLabel;
    QLabel *currentMoveLabel;
    QStringList recentFiles;
    QString curFile;

    enum { MaxRecentFiles = 5 };
    QAction *recentFileActions[MaxRecentFiles];
    QAction *separatorAction;

    QMenu *fileMenu;
    QMenu *helpMenu;
    QToolBar *fileToolBar;
    QAction *newAction;
    QAction *openAction;
    QAction *saveAction;
    QAction *saveAsAction;
    QAction *loginAction;
    QAction *exitAction;
    QAction *aboutAction;
    QAction *aboutQtAction;
};


#endif // MAINWINDOW_H


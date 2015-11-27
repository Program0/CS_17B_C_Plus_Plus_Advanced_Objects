#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
// Added includes to fix project.
// Also got rid of forward declarations

#include <QAction>
#include <QActionGroup>
#include <QLabel>
#include <QMdiArea>
#include <QMenuBar>
#include <QToolBar>
#include <QStatusBar>
#include <QMdiSubWindow>

// User classes
#include "editor.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();

public slots:
    void newFile();
    void openFile(const QString &fileName);

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void open();
    void save();
    void saveAs();
    void cut();
    void copy();
    void paste();
    void about();
    void updateActions();
    void loadFiles();

private:
    void createActions();
    void createMenus();
    void createToolBars();
    void createStatusBar();
    void addEditor(Editor *editor);
    Editor *activeEditor();

    QMdiArea *mdiArea;
    QLabel *readyLabel;
    QWidgetList windows;

    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *windowMenu;
    QMenu *helpMenu;
    QToolBar *fileToolBar;
    QToolBar *editToolBar;
    QActionGroup *windowActionGroup;
    QAction *newAction;
    QAction *openAction;
    QAction *saveAction;
    QAction *saveAsAction;
    QAction *exitAction;
    QAction *cutAction;
    QAction *copyAction;
    QAction *pasteAction;
    QAction *closeAction;
    QAction *closeAllAction;
    QAction *tileAction;
    QAction *cascadeAction;
    QAction *nextAction;
    QAction *previousAction;
    QAction *separatorAction;
    QAction *aboutAction;
    QAction *aboutQtAction;
};

#endif

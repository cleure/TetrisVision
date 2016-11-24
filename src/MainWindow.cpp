
#include <QtWidgets>
#include "MainWindow.hpp"
#include "MainView.hpp"

MainWindow::MainWindow() {
    mainView = new MainView;
    setCentralWidget(mainView);

    exitAction = new QAction("Exit", this);
    exitAction->setShortcuts(QKeySequence::Quit);
    connect(exitAction, SIGNAL(triggered()), this, SLOT(close()));

    fileMenu = menuBar()->addMenu("File");
    fileMenu->addAction(exitAction);
}


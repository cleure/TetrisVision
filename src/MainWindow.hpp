
#ifndef MAIN_WINDOW_HPP
#define MAIN_WINDOW_HPP

#include <QtWidgets>
#include "MainView.hpp"

class MainWindow : public QMainWindow {
    Q_OBJECT

    private:
        MainView *mainView;
        QMenu *fileMenu;
        QAction *exitAction;

    public:
        MainWindow();
};

#endif


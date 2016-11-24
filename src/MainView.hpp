
#ifndef MAIN_VIEW_HPP
#define MAIN_VIEW_HPP

#include <QtWidgets>

class MainView : public QWidget {
    Q_OBJECT

    private:
        QPushButton *detectPlayfieldBtn;
        QPushButton *playPauseBtn;
        QPushButton *nextFrameBtn;
        QPushButton *prevFrameBtn;
        QPushButton *skipFwdBtn;
        QPushButton *skipBwdBtn;

    public:
        MainView(QWidget *parent = 0);
        ~MainView();

    private slots:
        void handleButton();
};

#endif


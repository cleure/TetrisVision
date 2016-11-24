
#include <cstdio>
#include "MainView.hpp"

MainView::MainView(QWidget *parent) : QWidget(parent) {
    QGridLayout *layout = new QGridLayout;

    detectPlayfieldBtn = new QPushButton("Detect Playfield", this);
    playPauseBtn = new QPushButton("Play/Pause", this);
    nextFrameBtn = new QPushButton("Next Frame", this);
    prevFrameBtn = new QPushButton("Prev Frame", this);
    skipFwdBtn = new QPushButton("Skip Fwd", this);
    skipBwdBtn = new QPushButton("Skip Bwd", this);

    connect(detectPlayfieldBtn, SIGNAL(released()), this, SLOT(handleButton()));
    connect(playPauseBtn, SIGNAL(released()), this, SLOT(handleButton()));
    connect(nextFrameBtn, SIGNAL(released()), this, SLOT(handleButton()));
    connect(prevFrameBtn, SIGNAL(released()), this, SLOT(handleButton()));
    connect(skipFwdBtn, SIGNAL(released()), this, SLOT(handleButton()));
    connect(skipBwdBtn, SIGNAL(released()), this, SLOT(handleButton()));

    layout->addWidget(detectPlayfieldBtn, 0, 0);
    layout->addWidget(playPauseBtn, 0, 1);
    layout->addWidget(nextFrameBtn, 0, 2);
    layout->addWidget(prevFrameBtn, 0, 3);
    layout->addWidget(skipFwdBtn, 0, 4);
    layout->addWidget(skipBwdBtn, 0, 5);

    setLayout(layout);
}

MainView::~MainView() {
}

void MainView::handleButton() {
    QPushButton *btn = reinterpret_cast<QPushButton *>(sender());

    if (btn == detectPlayfieldBtn) {
        printf("Detect Playfield\n");
    } else if (btn == playPauseBtn) {
        printf("Play/Pause\n");
    } else if (btn == nextFrameBtn) {
        printf("Next Frame\n");
    } else if (btn == prevFrameBtn) {
        printf("Previous Frame\n");
    } else if (btn == skipFwdBtn) {
        printf("Skip Forward\n");
    } else if (btn == skipBwdBtn) {
        printf("Skip Backwards\n");
    }
}


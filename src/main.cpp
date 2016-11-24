
#include <QtWidgets>
#include <cstdio>
#include <cstdlib>

#include "MainWindow.hpp"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    printf("Here\n");

    MainWindow mainWindow;
    mainWindow.show();

    return app.exec();
}


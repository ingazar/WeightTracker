#include <QApplication>
#include <QDebug>

#include "mainwindow.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    weighttracker::MainWindow window;
    window.show();

    return a.exec();
}

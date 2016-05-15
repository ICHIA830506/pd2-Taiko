#include <QApplication>
#include "Game.h"

#include <MyTimer.h>


#include <mainwindow.h>
Game * game;
MyTimer * timer;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);



    MainWindow w;
    w.show();




    return a.exec();
}


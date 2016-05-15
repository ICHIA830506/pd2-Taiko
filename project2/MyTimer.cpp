#include "MyTimer.h"
#include <QTimer>

#include "Game.h"

//#include <QDebug>
#include <QTime>

extern Game * game; //there is an external global object called game


MyTimer::MyTimer()
{
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(MySlot()));
    timer->start(1000);


}

void MyTimer::MySlot()
{
    //qDebug()<<"Time Excution";
    game->ttimer->decrease();

}


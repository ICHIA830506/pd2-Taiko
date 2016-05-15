#include "Timer.h"
#include <QFont>
#include <QTimer>
#include <QDebug>

#include "Dialog.h"
#include "Game.h"
#include <MyTimer.h>
extern Game * game;
extern MyTimer * timer;

Timer::Timer(QGraphicsItem *parent): QGraphicsTextItem(parent){
    // initioalize the time to 30
    time = 30;

    //draw the text
    setPlainText(QString("Time: ") + QString::number(time));
    setDefaultTextColor(Qt::white);
    setFont(QFont("times",22));

}

void Timer::decrease(){
    time--;
    setPlainText(QString("Time: ") + QString::number(time));

    if (time==0){

        game->score->setFinalScore(game->score->getScore());

        // disable all scene items
        //delete
        game->music->stop();
        game->timer->stop();
        //delete game->ttimer;
        //delete game->score;
        //delete game->player;
        //delete game->scene;
        delete timer;

        game->gameOver();
    }
}

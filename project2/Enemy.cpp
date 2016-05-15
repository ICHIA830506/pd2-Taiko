#include "Enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>
#include "Game.h"


extern Game * game; //there is an external global object called game

Enemy::Enemy(QGraphicsItem * parent): QObject(), QGraphicsPixmapItem(){


    //set position
    setPos(750,180);
    // drew graphics
    int random = rand()%2;

    if (random == 0){
        setPixmap(QPixmap(":/images/enemynew.png"));
        QTimer * timer = new QTimer();
        connect(timer,SIGNAL(timeout()),this,SLOT(move_Blue()));
        timer->start(40);
    }
    else{
        setPixmap(QPixmap(":/images/enemy2new.png"));
        QTimer * timer = new QTimer();
        connect(timer,SIGNAL(timeout()),this,SLOT(move_Red()));
        timer->start(40);
    }
}

void Enemy::move_Blue(){

        setPos(x()-10,y());
        if ((pos().x()>45 && pos().x()<80)&&(Player::Key_Blue == true)){
            game->drum->change();
            game->score->increase();
            scene()->removeItem(this);

            delete this;
        }
}

void Enemy::move_Red(){

        setPos(x()-11,y());
        if ((pos().x()>45 && pos().x()<80)&&(Player::Key_Red == true)){
            game->drum->change();
            game->score->increase();
            scene()->removeItem(this);

            delete this;
        }


        if (pos().x() < 0){
            scene()->removeItem(this);
            delete this;
        }
}




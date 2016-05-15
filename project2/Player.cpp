#include "Player.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "Bullet.h"
#include "Enemy.h"
#include "Game.h"



extern Game * game; //there is an external global object called game




Player::Player(QGraphicsItem *parent): QGraphicsPixmapItem(parent){
    // drew graphics
    setPixmap(QPixmap(":/images/playernew.png"));
}

int Player::Key_Blue = 0;
int Player::Key_Red = 0;

void Player::keyPressEvent(QKeyEvent *event){

    if (event->key() == Qt::Key_Left){
        if (pos().x() > 0)
            setPos(x()-10,y());
    }
    else if (event->key() == Qt::Key_Right){
        if (pos().x() +100 < 800)
            setPos(x()+10,y());
    }
    else if (event->key() == Qt::Key_Space){
        //create the bullets
        Bullet * bullet = new Bullet();
        bullet->setPos(x(),y());
        scene()->addItem(bullet);
    }
    else if (event->key() == Qt::Key_S){

        Key_Blue = 1;


    }
    else if (event->key() == Qt::Key_A){

        Key_Red = 1;


    }
}

void Player::keyReleaseEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_S){
        Key_Blue = 0;
        game->drum->changeback();



    }
    else if (event->key() == Qt::Key_A){

        Key_Red = 0;
        game->drum->changeback();

    }
}


void Player::spawn(){
    //create an enemy
    Enemy * enemy = new Enemy();
    scene()->addItem(enemy);
}


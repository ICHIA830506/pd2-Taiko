#include "Drum.h"
#include <QGraphicsScene>
#include <QTimer>
#include <Player.h>


Drum::Drum():  QObject(),QGraphicsPixmapItem(){

    // drew graphics
    setPixmap(QPixmap(":/images/dumeblack.png"));

}

void Drum::change(){
    if ((Player::Key_Blue == true)||(Player::Key_Red == true)){
        setPixmap(QPixmap(":/images/dumenew.png"));
    }

    else
        setPixmap(QPixmap(":/images/dumeblack.png"));

}
void Drum::changeback(){
    setPixmap(QPixmap(":/images/dumeblack.png"));
}




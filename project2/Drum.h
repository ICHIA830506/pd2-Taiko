#ifndef DRUM_H
#define DRUM_H

#include <QGraphicsPixmapItem>
#include <QObject>

class Drum: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Drum();

    void change();
    void changeback();
};


#endif // DRUM_H

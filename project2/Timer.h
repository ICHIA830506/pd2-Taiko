#ifndef TIMER_H
#define TIMER_H


#include <QGraphicsTextItem>



class Timer: public QGraphicsTextItem{
public:
    Timer(QGraphicsItem * parent = 0);

    void decrease();

private:
    int time;
};

#endif // TIMER_H

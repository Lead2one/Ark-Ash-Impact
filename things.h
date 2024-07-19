
#ifndef THINGS_H
#define THINGS_H

#include <QRect>
#include "QPixmap"


class things
{
public:
    things();
    int type=1;
    int tx;
    int ty;
    void tupdateposition();
    QRect trect;
    QPixmap blood;
    QPixmap score;
    bool tfree;
    int speed;

};

#endif // THINGS_H


#ifndef BULLET_H
#define BULLET_H
#include <QPixmap>
#include <QRect>



class bullet
{
public:
    bullet();
    int btype=1;
    int bspeed_1=180;
    int bx;
    int by;
    QPixmap bullet_1;
    QPixmap bullet_2;
    bool bfree;
    bool ct;
    int b1;
    int bfx=1;
    QRect BRECT1;
    void bupdateposition();


};

#endif // BULLET_H

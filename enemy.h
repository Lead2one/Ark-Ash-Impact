
#ifndef ENEMYS_H
#define ENEMYS_H

#include <QPixmap>
#include <QRect>
#include <QTimer>

class enemys
{
public:
    enemys();
    int etype=1;
    int fx=1;
    int rspeed_1=2;
    int rspeed_2=12;
    int rspeed_3=4;
    int ex=1500;
    int ey=469;
    bool efree=true;
    bool sfdie=false;
    QPixmap enemy_1[20];
    QPixmap menemy_1[20];
    QPixmap enemy_2[8];
    QPixmap menemy_2[8];
    QPixmap enemy_3[8];
    QPixmap menemy_3[8];

    int walknow=0;
    int runnow=0;
    int blood=300;
    QPixmap nowact();
    void eupdateposition();
    void live();
    QRect erect;
    QTimer walktime;
};

#endif // ENEMYS_H

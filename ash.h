
#ifndef ASH_H
#define ASH_H
#include <QPixmap>
#include <QRect>
#include <QTimer>
#include "bullet.h"


class ash
{
public:
    ash();
    QPixmap walk[28];
    QPixmap m_walk[28];
    QPixmap stand[28];
    QPixmap m_stand[28];
    QPixmap a[21];
    QPixmap m_a[21];
    QPixmap sf[8];
    QPixmap m_sf[8];
    QPixmap ss[5];
    QPixmap m_ss[5];
    QPixmap ashe[26];
    QPixmap m_ashe[26];
    QPixmap die;
    QPixmap mdie;
    int ax;
    int ay;
    int blood=3;
    int walknow;
    int standnow;
    int mwalknow;
    int mstandnow;
    int anow;
    int manow;
    int sfnow;
    int msfnow;
    int ssnow;
    int mssnow;
    int ashenow;
    int mashenow;
    bool sfa=false;
    QRect ASH_RECT;
    QTimer walktime;
    QTimer shottime;
    QTimer etime;
    void updatepositionx();
    QPixmap nowact();
    int fx=3;
    int movespeed=1;
    void ashwalk();
    void shot();
    int sfz=0;
    bullet ash_bullet[20];
    int bmuch;

};

#endif // ASH_H

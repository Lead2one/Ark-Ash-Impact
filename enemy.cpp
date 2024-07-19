
#include "enemy.h"
#include <qobject.h>
#include "config.h"
#include <QTimer>

enemys::enemys()
{
    enemy_1[0].load(":/enemys/res/enemys/agz/m_agz1.png");
    enemy_1[1].load(":/enemys/res/enemys/agz/m_agz2.png");
    enemy_1[2].load(":/enemys/res/enemys/agz/m_agz3.png");
    enemy_1[3].load(":/enemys/res/enemys/agz/m_agz4.png");
    enemy_1[4].load(":/enemys/res/enemys/agz/m_agz5.png");
    enemy_1[5].load(":/enemys/res/enemys/agz/m_agz6.png");
    enemy_1[6].load(":/enemys/res/enemys/agz/m_agz7.png");
    enemy_1[7].load(":/enemys/res/enemys/agz/m_agz8.png");
    enemy_1[8].load(":/enemys/res/enemys/agz/m_agz9.png");
    enemy_1[9].load(":/enemys/res/enemys/agz/m_agz10.png");
    enemy_1[10].load(":/enemys/res/enemys/agz/m_agz11.png");
    enemy_1[11].load(":/enemys/res/enemys/agz/m_agz12.png");
    enemy_1[12].load(":/enemys/res/enemys/agz/m_agz13.png");
    enemy_1[13].load(":/enemys/res/enemys/agz/m_agz14.png");
    enemy_1[14].load(":/enemys/res/enemys/agz/m_agz15.png");
    enemy_1[15].load(":/enemys/res/enemys/agz/m_agz16.png");
    enemy_1[16].load(":/enemys/res/enemys/agz/m_agz17.png");
    enemy_1[17].load(":/enemys/res/enemys/agz/m_agz18.png");
    enemy_1[18].load(":/enemys/res/enemys/agz/m_agz19.png");
    enemy_1[19].load(":/enemys/res/enemys/agz/m_agz20.png");

    menemy_1[0].load(":/enemys/res/enemys/agz/agz1.png");
    menemy_1[1].load(":/enemys/res/enemys/agz/agz2.png");
    menemy_1[2].load(":/enemys/res/enemys/agz/agz3.png");
    menemy_1[3].load(":/enemys/res/enemys/agz/agz4.png");
    menemy_1[4].load(":/enemys/res/enemys/agz/agz5.png");
    menemy_1[5].load(":/enemys/res/enemys/agz/agz6.png");
    menemy_1[6].load(":/enemys/res/enemys/agz/agz7.png");
    menemy_1[7].load(":/enemys/res/enemys/agz/agz8.png");
    menemy_1[8].load(":/enemys/res/enemys/agz/agz9.png");
    menemy_1[9].load(":/enemys/res/enemys/agz/agz10.png");
    menemy_1[10].load(":/enemys/res/enemys/agz/agz11.png");
    menemy_1[11].load(":/enemys/res/enemys/agz/agz12.png");
    menemy_1[12].load(":/enemys/res/enemys/agz/agz13.png");
    menemy_1[13].load(":/enemys/res/enemys/agz/agz14.png");
    menemy_1[14].load(":/enemys/res/enemys/agz/agz15.png");
    menemy_1[15].load(":/enemys/res/enemys/agz/agz16.png");
    menemy_1[16].load(":/enemys/res/enemys/agz/agz17.png");
    menemy_1[17].load(":/enemys/res/enemys/agz/agz18.png");
    menemy_1[18].load(":/enemys/res/enemys/agz/agz19.png");
    menemy_1[19].load(":/enemys/res/enemys/agz/agz20.png");

    enemy_2[0].load(":/enemys/res/enemys/kaqi/m_kaqi1.png");
    enemy_2[1].load(":/enemys/res/enemys/kaqi/m_kaqi2.png");
    enemy_2[2].load(":/enemys/res/enemys/kaqi/m_kaqi3.png");
    enemy_2[3].load(":/enemys/res/enemys/kaqi/m_kaqi4.png");
    enemy_2[4].load(":/enemys/res/enemys/kaqi/m_kaqi5.png");
    enemy_2[5].load(":/enemys/res/enemys/kaqi/m_kaqi6.png");
    enemy_2[6].load(":/enemys/res/enemys/kaqi/m_kaqi7.png");
    enemy_2[7].load(":/enemys/res/enemys/kaqi/m_kaqi8.png");

    menemy_2[0].load(":/enemys/res/enemys/kaqi/kaqi1.png");
    menemy_2[1].load(":/enemys/res/enemys/kaqi/kaqi2.png");
    menemy_2[2].load(":/enemys/res/enemys/kaqi/kaqi3.png");
    menemy_2[3].load(":/enemys/res/enemys/kaqi/kaqi4.png");
    menemy_2[4].load(":/enemys/res/enemys/kaqi/kaqi5.png");
    menemy_2[5].load(":/enemys/res/enemys/kaqi/kaqi6.png");
    menemy_2[6].load(":/enemys/res/enemys/kaqi/kaqi7.png");
    menemy_2[7].load(":/enemys/res/enemys/kaqi/kaqi8.png");

    enemy_3[0].load(":/enemys/res/enemys/xiaobin/m_xb1.png");
    enemy_3[1].load(":/enemys/res/enemys/xiaobin/m_xb2.png");
    enemy_3[2].load(":/enemys/res/enemys/xiaobin/m_xb3.png");
    enemy_3[3].load(":/enemys/res/enemys/xiaobin/m_xb4.png");
    enemy_3[4].load(":/enemys/res/enemys/xiaobin/m_xb5.png");
    enemy_3[5].load(":/enemys/res/enemys/xiaobin/m_xb6.png");
    enemy_3[6].load(":/enemys/res/enemys/xiaobin/m_xb7.png");
    enemy_3[7].load(":/enemys/res/enemys/xiaobin/m_xb8.png");

    menemy_3[0].load(":/enemys/res/enemys/xiaobin/xb1.png");
    menemy_3[1].load(":/enemys/res/enemys/xiaobin/xb2.png");
    menemy_3[2].load(":/enemys/res/enemys/xiaobin/xb3.png");
    menemy_3[3].load(":/enemys/res/enemys/xiaobin/xb4.png");
    menemy_3[4].load(":/enemys/res/enemys/xiaobin/xb5.png");
    menemy_3[5].load(":/enemys/res/enemys/xiaobin/xb6.png");
    menemy_3[6].load(":/enemys/res/enemys/xiaobin/xb7.png");
    menemy_3[7].load(":/enemys/res/enemys/xiaobin/xb8.png");


    erect.setWidth(200);
    erect.setHeight(400);
    erect.moveTo(ex+120,ey);
    walktime.setInterval(walkfps);
    walktime.start();
    walknow=0;
    if(fx==2){
        ex=-300;
    }

    QObject::connect(&walktime,&QTimer::timeout,[=](){
        walknow=(++walknow)%20;
        runnow=(++runnow)%7;
    });

}

QPixmap enemys::nowact()
{
    if(efree==true){

    }
    if(etype==1){
        if(fx==1)
            return enemy_1[walknow];
        if(fx==2)
            return menemy_1[walknow];}
    if(etype==2){
        if(fx==1)
            return enemy_2[runnow];
        if(fx==2)
            return menemy_2[runnow];}
    if(etype==3){
        if(fx==1)
            return enemy_3[runnow];
        if(fx==2)
            return menemy_3[runnow];}
}

void enemys::eupdateposition()
{
    if(efree==true){

        return;
    }
    if(fx==1){
        if(etype==1)
            ex-=rspeed_1;
        if(etype==2)
            ex-=rspeed_2;
        if(etype==3){
            ex-=rspeed_3;}
        if(ex<=-155){ex=-155;}
        erect.moveTo(ex+120,ey);
    }
    if(fx==2){
        if(etype==1)
            ex+=rspeed_1;
        if(etype==2)
            ex+=rspeed_2;
        if(etype==3)
            ex+=rspeed_3;
        if(ex>=1200){ex=1200;}
        erect.moveTo(ex+50,ey);
    }

}

void enemys::live()
{
    if(efree==true){
        efree=false;
    }
}





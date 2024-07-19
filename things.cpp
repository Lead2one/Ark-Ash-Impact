
#include "things.h"

things::things()
{
    blood.load(":/res/hcy.png");
    score.load(":/res/ori.png");
    tx=0;
    ty=0;
    tfree=true;
    speed=5;
    trect.setWidth(score.width());
    trect.setHeight(score.height());
    trect.moveTo(tx,ty);
}

void things::tupdateposition()
{
    if(tfree){
        return;
    }
    ty += 5;
    trect.moveTo(tx,ty-100);

    if(ty >= 710 + score.height())
    {
        ty=710 + score.height();
    }

}


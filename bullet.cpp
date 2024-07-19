
#include "bullet.h"
#include "config.h"
#include "ash.h"

bullet::bullet()
{
    bullet_1.load(":/res/b1.jpg");
    bullet_2.load(":/res/liudan.png");
    bx=300;
    by=500;
    bfree=true;
    ct=false;
    b1=100;
    BRECT1.setWidth(bullet_1.width());
    BRECT1.setHeight(bullet_1.height());
    BRECT1.moveTo(bx,by);
}

void bullet::bupdateposition()
{
    if(bfree==true){
        return;
    }
    if(bfx==4||bfx==1){
        bx-=12;
        BRECT1.moveTo(bx,by);}
    if(bfx==3||bfx==2){
        bx+=12;
        BRECT1.moveTo(bx,by);}
    if(bfx==5){
        bx+=12;
        BRECT1.moveTo(bx,by);
    }
    if(bfx==6){
        bx-=12;
        BRECT1.moveTo(bx,by);
    }
    if(bfx==7){
        bx+=16;
        by+=2;
        BRECT1.moveTo(bx,by);
    }
    if(bfx==8){
        bx-=16;
        by+=2;
        BRECT1.moveTo(bx,by);
    }

    if(bx<=0||bx>=map_height){
        bfree=true;


    }
    if(by>=850){
        bfree=true;
    }

}


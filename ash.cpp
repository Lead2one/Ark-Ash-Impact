
#include "ash.h"
#include "config.h"
#include <qobject.h>
#include "bullet.h"
ash::ash()
{

    walk[0].load(":/ash/res/ash/walk/w1.png");
    walk[1].load(":/ash/res/ash/walk/w2.png");
    walk[2].load(":/ash/res/ash/walk/w3.png");
    walk[3].load(":/ash/res/ash/walk/w4.png");
    walk[4].load(":/ash/res/ash/walk/w5.png");
    walk[5].load(":/ash/res/ash/walk/w6.png");
    walk[6].load(":/ash/res/ash/walk/w7.png");
    walk[7].load(":/ash/res/ash/walk/w8.png");
    walk[8].load(":/ash/res/ash/walk/w9.png");
    walk[9].load(":/ash/res/ash/walk/w10.png");
    walk[10].load(":/ash/res/ash/walk/w11.png");
    walk[11].load(":/ash/res/ash/walk/w12.png");
    walk[12].load(":/ash/res/ash/walk/w13.png");
    walk[13].load(":/ash/res/ash/walk/w14.png");
    walk[14].load(":/ash/res/ash/walk/w15.png");
    walk[15].load(":/ash/res/ash/walk/w16.png");
    walk[16].load(":/ash/res/ash/walk/w17.png");
    walk[17].load(":/ash/res/ash/walk/w18.png");
    walk[18].load(":/ash/res/ash/walk/w19.png");
    walk[19].load(":/ash/res/ash/walk/w20.png");
    walk[20].load(":/ash/res/ash/walk/w21.png");
    walk[21].load(":/ash/res/ash/walk/w22.png");
    walk[22].load(":/ash/res/ash/walk/w23.png");
    walk[23].load(":/ash/res/ash/walk/w24.png");
    walk[24].load(":/ash/res/ash/walk/w25.png");
    walk[25].load(":/ash/res/ash/walk/w26.png");
    walk[26].load(":/ash/res/ash/walk/w27.png");
    stand[0].load(":/ash/res/ash/stand/s1.png");
    stand[1].load(":/ash/res/ash/stand/s2.png");
    stand[2].load(":/ash/res/ash/stand/s3.png");
    stand[3].load(":/ash/res/ash/stand/s4.png");
    stand[4].load(":/ash/res/ash/stand/s5.png");
    stand[5].load(":/ash/res/ash/stand/s6.png");
    stand[6].load(":/ash/res/ash/stand/s7.png");
    stand[7].load(":/ash/res/ash/stand/s8.png");
    stand[8].load(":/ash/res/ash/stand/s9.png");
    stand[9].load(":/ash/res/ash/stand/s10.png");
    stand[10].load(":/ash/res/ash/stand/s11.png");
    stand[11].load(":/ash/res/ash/stand/s12.png");
    stand[12].load(":/ash/res/ash/stand/s13.png");
    stand[13].load(":/ash/res/ash/stand/s14.png");
    stand[14].load(":/ash/res/ash/stand/s15.png");
    stand[15].load(":/ash/res/ash/stand/s16.png");
    stand[16].load(":/ash/res/ash/stand/s17.png");
    stand[17].load(":/ash/res/ash/stand/s18.png");
    stand[18].load(":/ash/res/ash/stand/s19.png");
    stand[19].load(":/ash/res/ash/stand/s20.png");
    stand[20].load(":/ash/res/ash/stand/s21.png");
    stand[21].load(":/ash/res/ash/stand/s22.png");
    stand[22].load(":/ash/res/ash/stand/s23.png");
    stand[23].load(":/ash/res/ash/stand/s24.png");
    stand[24].load(":/ash/res/ash/stand/s25.png");
    stand[25].load(":/ash/res/ash/stand/s26.png");
    stand[26].load(":/ash/res/ash/stand/s27.png");
    stand[27].load(":/ash/res/ash/stand/s28.png");
    m_walk[0].load(":/ash/res/ash/walk/m_w1.png");
    m_walk[1].load(":/ash/res/ash/walk/m_w2.png");
    m_walk[2].load(":/ash/res/ash/walk/m_w3.png");
    m_walk[3].load(":/ash/res/ash/walk/m_w4.png");
    m_walk[4].load(":/ash/res/ash/walk/m_w5.png");
    m_walk[5].load(":/ash/res/ash/walk/m_w6.png");
    m_walk[6].load(":/ash/res/ash/walk/m_w7.png");
    m_walk[7].load(":/ash/res/ash/walk/m_w8.png");
    m_walk[8].load(":/ash/res/ash/walk/m_w9.png");
    m_walk[9].load(":/ash/res/ash/walk/m_w10.png");
    m_walk[10].load(":/ash/res/ash/walk/m_w11.png");
    m_walk[11].load(":/ash/res/ash/walk/m_w12.png");
    m_walk[12].load(":/ash/res/ash/walk/m_w13.png");
    m_walk[13].load(":/ash/res/ash/walk/m_w14.png");
    m_walk[14].load(":/ash/res/ash/walk/m_w15.png");
    m_walk[15].load(":/ash/res/ash/walk/m_w16.png");
    m_walk[16].load(":/ash/res/ash/walk/m_w17.png");
    m_walk[17].load(":/ash/res/ash/walk/m_w18.png");
    m_walk[18].load(":/ash/res/ash/walk/m_w19.png");
    m_walk[19].load(":/ash/res/ash/walk/m_w20.png");
    m_walk[20].load(":/ash/res/ash/walk/m_w21.png");
    m_walk[21].load(":/ash/res/ash/walk/m_w22.png");
    m_walk[22].load(":/ash/res/ash/walk/m_w23.png");
    m_walk[23].load(":/ash/res/ash/walk/m_w24.png");
    m_walk[24].load(":/ash/res/ash/walk/m_w25.png");
    m_walk[25].load(":/ash/res/ash/walk/m_w26.png");
    m_walk[26].load(":/ash/res/ash/walk/m_w27.png");
    m_walk[27].load(":/ash/res/ash/walk/m_w28.png");
    m_stand[0].load(":/ash/res/ash/stand/m_s1.png");
    m_stand[1].load(":/ash/res/ash/stand/m_s2.png");
    m_stand[2].load(":/ash/res/ash/stand/m_s3.png");
    m_stand[3].load(":/ash/res/ash/stand/m_s4.png");
    m_stand[4].load(":/ash/res/ash/stand/m_s5.png");
    m_stand[5].load(":/ash/res/ash/stand/m_s6.png");
    m_stand[6].load(":/ash/res/ash/stand/m_s7.png");
    m_stand[7].load(":/ash/res/ash/stand/m_s8.png");
    m_stand[8].load(":/ash/res/ash/stand/m_s9.png");
    m_stand[9].load(":/ash/res/ash/stand/m_s10.png");
    m_stand[10].load(":/ash/res/ash/stand/m_s11.png");
    m_stand[11].load(":/ash/res/ash/stand/m_s12.png");
    m_stand[12].load(":/ash/res/ash/stand/m_s13.png");
    m_stand[13].load(":/ash/res/ash/stand/m_s14.png");
    m_stand[14].load(":/ash/res/ash/stand/m_s15.png");
    m_stand[15].load(":/ash/res/ash/stand/m_s16.png");
    m_stand[16].load(":/ash/res/ash/stand/m_s17.png");
    m_stand[17].load(":/ash/res/ash/stand/m_s18.png");
    m_stand[18].load(":/ash/res/ash/stand/m_s19.png");
    m_stand[19].load(":/ash/res/ash/stand/m_s20.png");
    m_stand[20].load(":/ash/res/ash/stand/m_s21.png");
    m_stand[21].load(":/ash/res/ash/stand/m_s22.png");
    m_stand[22].load(":/ash/res/ash/stand/m_s23.png");
    m_stand[23].load(":/ash/res/ash/stand/m_s24.png");
    m_stand[24].load(":/ash/res/ash/stand/m_s25.png");
    m_stand[25].load(":/ash/res/ash/stand/m_s26.png");
    m_stand[26].load(":/ash/res/ash/stand/m_s27.png");
    m_stand[27].load(":/ash/res/ash/stand/m_s28.png");
    a[0].load(":/ash/res/ash/attack/a/a1.png");
    a[1].load(":/ash/res/ash/attack/a/a2.png");
    a[2].load(":/ash/res/ash/attack/a/a3.png");
    a[3].load(":/ash/res/ash/attack/a/a4.png");
    a[4].load(":/ash/res/ash/attack/a/a5.png");
    a[5].load(":/ash/res/ash/attack/a/a6.png");
    a[6].load(":/ash/res/ash/attack/a/a7.png");
    a[7].load(":/ash/res/ash/attack/a/a8.png");
    a[8].load(":/ash/res/ash/attack/a/a9.png");
    a[9].load(":/ash/res/ash/attack/a/a10.png");
    a[10].load(":/ash/res/ash/attack/a/a11.png");
    a[11].load(":/ash/res/ash/attack/a/a12.png");
    a[12].load(":/ash/res/ash/attack/a/a13.png");
    a[13].load(":/ash/res/ash/attack/a/a14.png");
    a[14].load(":/ash/res/ash/attack/a/a15.png");
    a[15].load(":/ash/res/ash/attack/a/a16.png");
    a[16].load(":/ash/res/ash/attack/a/a17.png");
    a[17].load(":/ash/res/ash/attack/a/a18.png");
    a[18].load(":/ash/res/ash/attack/a/a19.png");
    a[19].load(":/ash/res/ash/attack/a/a20.png");
    a[20].load(":/ash/res/ash/attack/a/a21.png");
    m_a[0].load(":/ash/res/ash/attack/a/m_a1.png");
    m_a[1].load(":/ash/res/ash/attack/a/m_a2.png");
    m_a[2].load(":/ash/res/ash/attack/a/m_a3.png");
    m_a[3].load(":/ash/res/ash/attack/a/m_a4.png");
    m_a[4].load(":/ash/res/ash/attack/a/m_a5.png");
    m_a[5].load(":/ash/res/ash/attack/a/m_a6.png");
    m_a[6].load(":/ash/res/ash/attack/a/m_a7.png");
    m_a[7].load(":/ash/res/ash/attack/a/m_a8.png");
    m_a[8].load(":/ash/res/ash/attack/a/m_a9.png");
    m_a[9].load(":/ash/res/ash/attack/a/m_a10.png");
    m_a[10].load(":/ash/res/ash/attack/a/m_a11.png");
    m_a[11].load(":/ash/res/ash/attack/a/m_a12.png");
    m_a[12].load(":/ash/res/ash/attack/a/m_a13.png");
    m_a[13].load(":/ash/res/ash/attack/a/m_a14.png");
    m_a[14].load(":/ash/res/ash/attack/a/m_a15.png");
    m_a[15].load(":/ash/res/ash/attack/a/m_a16.png");
    m_a[16].load(":/ash/res/ash/attack/a/m_a17.png");
    m_a[17].load(":/ash/res/ash/attack/a/m_a18.png");
    m_a[18].load(":/ash/res/ash/attack/a/m_a19.png");
    m_a[19].load(":/ash/res/ash/attack/a/m_a20.png");
    m_a[20].load(":/ash/res/ash/attack/a/m_a21.png");
    ss[0].load(":/ash/res/ash/stand/ss1.png");
    ss[1].load(":/ash/res/ash/stand/sf4.png");
    ss[2].load(":/ash/res/ash/stand/sf6.png");
    ss[3].load(":/ash/res/ash/stand/sf7.png");
    ss[4].load(":/ash/res/ash/stand/ss2.png");
    m_ss[0].load(":/ash/res/ash/stand/m_ss1.png");
    m_ss[1].load(":/ash/res/ash/stand/m_sf4.png");
    m_ss[2].load(":/ash/res/ash/stand/m_sf6.png");
    m_ss[3].load(":/ash/res/ash/stand/m_sf7.png");
    m_ss[4].load(":/ash/res/ash/stand/m_ss2.png");
    sf[0].load(":/ash/res/ash/stand/sf1.png");
    sf[1].load(":/ash/res/ash/stand/sf2.png");
    sf[2].load(":/ash/res/ash/stand/sf3.png");
    sf[3].load(":/ash/res/ash/stand/sf4.png");
    sf[4].load(":/ash/res/ash/stand/sf5.png");
    sf[5].load(":/ash/res/ash/stand/sf6.png");
    sf[6].load(":/ash/res/ash/stand/sf7.png");
    sf[7].load(":/ash/res/ash/stand/sf8.png");
    m_sf[0].load(":/ash/res/ash/stand/m_sf1.png");
    m_sf[1].load(":/ash/res/ash/stand/m_sf2.png");
    m_sf[2].load(":/ash/res/ash/stand/m_sf3.png");
    m_sf[3].load(":/ash/res/ash/stand/m_sf4.png");
    m_sf[4].load(":/ash/res/ash/stand/m_sf5.png");
    m_sf[5].load(":/ash/res/ash/stand/m_sf6.png");
    m_sf[6].load(":/ash/res/ash/stand/m_sf7.png");
    m_sf[7].load(":/ash/res/ash/stand/m_sf8.png");
    ashe[0].load(":/ash/res/ash/attack/e/e1.png");
    ashe[1].load(":/ash/res/ash/attack/e/e2.png");
    ashe[2].load(":/ash/res/ash/attack/e/e3.png");
    ashe[3].load(":/ash/res/ash/attack/e/e4.png");
    ashe[4].load(":/ash/res/ash/attack/e/e5.png");
    ashe[5].load(":/ash/res/ash/attack/e/e6.png");
    ashe[6].load(":/ash/res/ash/attack/e/e7.png");
    ashe[7].load(":/ash/res/ash/attack/e/e8.png");
    ashe[8].load(":/ash/res/ash/attack/e/e9.png");
    ashe[9].load(":/ash/res/ash/attack/e/e10.png");
    ashe[10].load(":/ash/res/ash/attack/e/e11.png");
    ashe[11].load(":/ash/res/ash/attack/e/e12.png");
    ashe[12].load(":/ash/res/ash/attack/e/e13.png");
    ashe[13].load(":/ash/res/ash/attack/e/e14.png");
    ashe[14].load(":/ash/res/ash/attack/e/e15.png");
    ashe[15].load(":/ash/res/ash/attack/e/e16.png");
    ashe[16].load(":/ash/res/ash/attack/e/e17.png");
    ashe[17].load(":/ash/res/ash/attack/e/e18.png");
    ashe[18].load(":/ash/res/ash/attack/e/e19.png");
    ashe[19].load(":/ash/res/ash/attack/e/e20.png");
    ashe[20].load(":/ash/res/ash/attack/e/e21.png");
    ashe[21].load(":/ash/res/ash/attack/e/e22.png");
    ashe[22].load(":/ash/res/ash/attack/e/e23.png");
    ashe[23].load(":/ash/res/ash/attack/e/e24.png");
    ashe[24].load(":/ash/res/ash/attack/e/e25.png");
    ashe[25].load(":/ash/res/ash/attack/e/e26.png");

    m_ashe[0].load(":/ash/res/ash/attack/e/m_e1.png");
    m_ashe[1].load(":/ash/res/ash/attack/e/m_e2.png");
    m_ashe[2].load(":/ash/res/ash/attack/e/m_e3.png");
    m_ashe[3].load(":/ash/res/ash/attack/e/m_e4.png");
    m_ashe[4].load(":/ash/res/ash/attack/e/m_e5.png");
    m_ashe[5].load(":/ash/res/ash/attack/e/m_e6.png");
    m_ashe[6].load(":/ash/res/ash/attack/e/m_e7.png");
    m_ashe[7].load(":/ash/res/ash/attack/e/m_e8.png");
    m_ashe[8].load(":/ash/res/ash/attack/e/m_e9.png");
    m_ashe[9].load(":/ash/res/ash/attack/e/m_e10.png");
    m_ashe[10].load(":/ash/res/ash/attack/e/m_e11.png");
    m_ashe[11].load(":/ash/res/ash/attack/e/m_e12.png");
    m_ashe[12].load(":/ash/res/ash/attack/e/m_e13.png");
    m_ashe[13].load(":/ash/res/ash/attack/e/m_e14.png");
    m_ashe[14].load(":/ash/res/ash/attack/e/m_e15.png");
    m_ashe[15].load(":/ash/res/ash/attack/e/m_e16.png");
    m_ashe[16].load(":/ash/res/ash/attack/e/m_e17.png");
    m_ashe[17].load(":/ash/res/ash/attack/e/m_e18.png");
    m_ashe[18].load(":/ash/res/ash/attack/e/m_e19.png");
    m_ashe[19].load(":/ash/res/ash/attack/e/m_e20.png");
    m_ashe[20].load(":/ash/res/ash/attack/e/m_e21.png");
    m_ashe[21].load(":/ash/res/ash/attack/e/m_e22.png");
    m_ashe[22].load(":/ash/res/ash/attack/e/m_e23.png");
    m_ashe[23].load(":/ash/res/ash/attack/e/m_e24.png");
    m_ashe[24].load(":/ash/res/ash/attack/e/m_e25.png");
    m_ashe[25].load(":/ash/res/ash/attack/e/m_e26.png");

    // ash_bullet[19].bullet_1.load()
    die.load(":/ash/res/ash/attacked/die.png");
    mdie.load(":/ash/res/ash/attacked/m_die.png");






    ax=600;
    ay=600;
    walknow=0;
    standnow=0;
    mwalknow=0;
    mstandnow=0;
    anow=0;
    bmuch=0;
    ashenow=0;
    mashenow=0;

    ASH_RECT.setWidth(67);
    ASH_RECT.setHeight(100);
    ASH_RECT.moveTo(ax+100,ay);
    walktime.setInterval(walkfps);
    shottime.setInterval(20);
    etime.setInterval(22);
    walktime.start();
    shottime.start();
    etime.start();
    QObject::connect(&walktime,&QTimer::timeout,[=](){
        walknow=(++walknow)%27;
        standnow=(++standnow)%27;
        mwalknow=(++mwalknow)%27;
        mstandnow=(++mstandnow)%27;
        sfnow=(++sfnow)%8;
        msfnow=(++msfnow)%8;


    });
    QObject::connect(&shottime,&QTimer::timeout,[=](){
        anow=(++anow)%20;
        manow=(++manow)%20;
        mssnow=(++mssnow)%5;
        ssnow=(++ssnow)%5;


    });

    QObject::connect(&etime,&QTimer::timeout,[=](){
        ashenow=(++ashenow)%25;
        mashenow=(++mashenow)%25;
        });
}


QPixmap ash::nowact()
{
    if((fx==2||fx==3||fx==5||fx==7)&&blood<=0){
        return die;
    }
    if((fx==1||fx==4||fx==6||fx==8)&&blood<=0){
        return mdie;
    }
    if(fx==7){
        return ashe[ashenow];
    }
    if(fx==8){
        return m_ashe[mashenow];
    }
    if(sfa==true&&(fx==3)){
        return a[anow];
    }
    if(sfa==true&&(fx==4)){
        return m_a[manow];
    }
    if (fx==5&&sfa==true){
        return ss[mssnow];
    }
    if (fx==6&&sfa==true){
        return m_ss[mssnow];
    }
    if (fx==5){
        return sf[msfnow];
    }
    if(fx==6){
        return m_sf[sfnow];
    }

    if(fx==1)
        return m_walk[mwalknow];
    if(fx==2)
        return walk[walknow];
    if(fx==3)
        return stand[standnow];
    if(fx==4)
        return m_stand[mstandnow];
}

void ash::ashwalk()
{
    if(fx==1){    ax-=8;

        if(ax+130<=0)
        {
            ax=-130;
        };
    }
    if(fx==2){
        ax+=8;

        if(ax+200>=map_height){
            ax=map_height-200;
        };
    }
    ASH_RECT.moveTo(ax+100,ay);
}

void ash::shot()
{
    for(int i=0;i<20;i++){
        if(ash_bullet[i].bfree==true)
        { ash_bullet[i].bfree=false;
            ash_bullet[i].bfx=fx;
            if(fx==5||fx==6){
                ash_bullet[i].bx=ax+208;
                ash_bullet[i].by=ay+212;
                ash_bullet[i].ct=true;
                break;
            }
            ash_bullet[i].bx=ax+208;
            ash_bullet[i].by=ay+182;
            ash_bullet[i].ct=true;
            break;

        }


    }

}


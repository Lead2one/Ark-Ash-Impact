
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "config.h"
#include <QPainter>
#include <QTimer>
#include <QPixmap>
#include <QIcon>
#include <QKeyEvent>
#include "bullet.h"
#include "ash.h"
#include <QRect>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->end->hide();
    ui->reborn->hide();
    ui->score->hide();
    ui->scores->hide();
    ui->blood->hide();
    ui->bloods->hide();
    ui->ends->hide();
    ui->endss->hide();
    ui->fanhui->hide();
    begin();


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::begin(){
srand((unsigned int)time(NULL));
    t1.setInterval(gamespeed);
    t2.setInterval(slowspeed);
    bt.setInterval(380);
    ss.setInterval(150);
    ld.setInterval(700);
    for(int i=0;i<10;i++){
        sjetype[i]=rand()%2;
        thtype[i]=rand()%2;
    }
    for(int i=0;i<10;i++){
        if(sjetype[i]==0){
            sjetype[i]=2;
        }
        if(thtype[i]==0){
            thtype[i]=2;
        }
    }
    chuguai.setInterval(300);
    setFixedSize(map_height,map_width);
    setWindowIcon(QIcon(":/res/icon.ico"));
    setWindowTitle(gamename);


}

void MainWindow::playgame()
{

    hsa.blood=3;
    score=0;
    maptype=opti->choosemap->mp;
    t1.start();
    t2.start();
    bt.start();
    ss.start();
    ld.start();
    chuguai.start();
    for(int i=0;i<10;i++){
        en[i].etype=sjetype[i];
        th[i].type=thtype[i];
    }
    if(re==false){
    connect(&t1,&QTimer::timeout,[=](){

        for(int i=0;i<20;i++){

            hsa.ash_bullet[i].bupdateposition();
        }

        update();
        sfpz_be();
        sfpz_le();
        sfpz_at();
        ui->bloods->setText(" "+QString::number(hsa.blood));
        ui->scores->setText(" "+QString::number(score));
        ui->endss->setText(" "+QString::number(score));
        });
    connect(&ss,&QTimer::timeout,[=](){

        if(hsa.sfa==1&&(hsa.fx==5||hsa.fx==6)){
            hsa.shot();

        }


    });
    connect(&ld,&QTimer::timeout,[=](){

        if(hsa.fx==7||hsa.fx==8){
            hsa.shot();

        }

    });
    connect(&chuguai,&QTimer::timeout,[=](){

        shuaguai();
        shuawu();

    });

    connect(&bt,&QTimer::timeout,[=]{

        if(hsa.sfa==1&&(hsa.fx==3||hsa.fx==4)){
            hsa.shot();}

    });
    connect(&t2,&QTimer::timeout,[=](){

        ash_updateposition();
        for(int i=0;i<10;i++){
            en[i].eupdateposition();

        }
        for(int i=0;i<10;i++){
            th[i].tupdateposition();
        }

        //update();

    });
    }
}

void MainWindow::endgame()
{
    for(int i=0;i<10;i++){
    en[i].efree=true;
    th[i].tfree=true;
    th[i].ty=-100;
    th[i].trect.moveTo(th[i].tx,th[i].ty);
    th[i].tx=-100;
    en[i].ex=-100;
    en[i].erect.moveTo(en[i].ex,en[i].ey);
    t1.stop();
    t2.stop();
    bt.stop();
    ss.stop();
    ld.stop();
    chuguai.stop();

    }
    ui->end->show();
    ui->reborn->show();
    ui->ends->show();
    ui->endss->show();
    ui->fanhui->show();
    ui->blood->hide();
    ui->bloods->hide();
    ui->score->hide();
    ui->scores->hide();
}

void MainWindow::ash_updateposition()
{

    if(hsa.sfz==1){
        hsa.ashwalk();
    }
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(mapt.map1_x,-100, mapt.map1);
    if(maptype==1){
        painter.drawPixmap(mapt.map1_x,-100, mapt.map1);}
    if(maptype==2){
        painter.drawPixmap(mapt.map1_x,0, mapt.map2);}
    if(maptype==3){
        painter.drawPixmap(mapt.map1_x,0, mapt.map3);}
    painter.drawPixmap(hsa.ax,hsa.ay,hsa.nowact());
    for(int i=0;i<20;i++){
        if(!hsa.ash_bullet[i].bfree){
            if(hsa.ash_bullet[i].bfx==7||hsa.ash_bullet[i].bfx==8)
            painter.drawPixmap(hsa.ash_bullet[i].bx,hsa.ash_bullet[i].by,hsa.ash_bullet[i].bullet_2);
            else{painter.drawPixmap(hsa.ash_bullet[i].bx,hsa.ash_bullet[i].by,hsa.ash_bullet[i].bullet_1);}
        }
    }
    for(int i=0;i<10;i++){
        if(en[i].efree==false){
            if(en[i].etype==3)
                painter.drawPixmap(en[i].ex,en[i].ey+130,en[i].nowact());
            if(en[i].etype==1||en[i].etype==2)
                painter.drawPixmap(en[i].ex,en[i].ey,en[i].nowact());
        }

    }
    for(int i=0;i<10;i++){
        if(th[i].tfree==false){
            if(th[i].type==1){
                painter.drawPixmap(th[i].tx,th[i].ty,th[i].blood);
            }
            if(th[i].type==2){
                painter.drawPixmap(th[i].tx,th[i].ty,th[i].score);
            }
        }
    }

}

void MainWindow::keyPressEvent(QKeyEvent *event){
    QKeyEvent *key=(QKeyEvent*) event;
    if(key->key()==Qt::Key_D){

        hsa.sfz=1;
        hsa.fx=2;
        for (int i = 0;  i< 20; i++) {
            if(hsa.ash_bullet[i].ct==true){continue;}
            hsa.ash_bullet[i].bfx=2;
        }

    }
    if(key->key()==Qt::Key_A){

        hsa.sfz=1;
        hsa.fx=1;
        for (int i = 0;  i< 20; i++) {
            if(hsa.ash_bullet[i].ct==true){continue;}
            hsa.ash_bullet[i].bfx=1;
        }
    }
    if(key->key()==Qt::Key_S){
        if(hsa.fx==3){
            hsa.fx=5;}
        if (hsa.fx==4){
            hsa.fx=6;
        }
        for(int i=0;i<20;i++){
            hsa.ash_bullet[i].b1=150;
            hsa.ash_bullet[i].bspeed_1=250;}
    }

    if(key->key()==Qt::Key_J){
        hsa.sfa=true;
    }
    if(key->key()==Qt::Key_E){
        if(hsa.fx==3){
            hsa.fx=7;}
        if(hsa.fx==4){

            hsa.fx=8;}
        for(int i=0;i<20;i++){

            hsa.ash_bullet[i].b1=1000;
            hsa.ash_bullet[i].bspeed_1=3;
        }
    }
}

void MainWindow::keyReleaseEvent(QKeyEvent *event)
{
    QKeyEvent *key=(QKeyEvent*) event;
    if(key->key()==Qt::Key_D){
        hsa.sfz=0;
        hsa.fx=3;

    }
    if(key->key()==Qt::Key_A){
        hsa.sfz=0;
        hsa.fx=4;

    }
    if(key->key()==Qt::Key_S){
        hsa.sfz=0;
        if(hsa.fx==5){
            hsa.fx=3;
        }
        if(hsa.fx==6){
            hsa.fx=4;
        }
        for(int i=0;i<20;i++){
            hsa.ash_bullet[i].b1=100;
            hsa.ash_bullet[i].bspeed_1=180;}
    }
    if(key->key()==Qt::Key_E){
        hsa.sfz=0;
        if(hsa.fx==7){
            hsa.fx=3;

        }
        if(hsa.fx==8){
            hsa.fx=4;

        }
        for(int i=0;i<20;i++){
            hsa.ash_bullet[i].b1=100;
            hsa.ash_bullet[i].bspeed_1=180;}
    }
    if(key->key()==Qt::Key_J){
        hsa.sfa=false;
    }
}

void MainWindow::sfpz_be()
{
    for (int i= 0;  i< 10; i++) {
        if(en[i].efree)
        {

            continue;
        }
        for(int j = 0 ; j < 20;j++)
        {
            if(hsa.ash_bullet[j].bfree)
            {
                continue;
            }

            if(en[i].erect.intersects(hsa.ash_bullet[j].BRECT1))
            {
                en[i].blood-=hsa.ash_bullet[j].b1;
                if(en[i].blood<=0)en[i].efree = true;
                hsa.ash_bullet[j].bfree = true;
                en[i].erect.moveTo(1500,426);
               // en[i].sfdie=true;
                continue;
            }
        }
    }
}

void MainWindow::sfpz_le()
{
    for(int i=0;i<10;i++){
        if(en[i].erect.intersects(hsa.ASH_RECT)){
            en[i].efree=true;
            en[i].erect.moveTo(1500,910);
            hsa.blood-=1;
            if(hsa.blood<=0){endgame();}}
    }
}

void MainWindow::sfpz_at()
{
    for(int i=0;i<10;i++){
        if(th[i].trect.intersects(hsa.ASH_RECT)){
            th[i].tfree=true;
            if(th[i].type==1){
                hsa.blood+=1;

            }
            if(th[i].type==2){
                score+=100;
            }
            th[i].trect.moveTo(0,0);
            th[i].tx=0;
            th[i].ty=0;
        }
    }
}

void MainWindow::shuaguai()
{int x=0;

    js++;
    if(score>=2000){js++;}
    if(score>=5000){js++;}
    if(js < 10)
    {
        return;
    }
    js = 0;
    for(int i = 0 ; i< 10;i++)
    {
        if(en[i].efree)
        {
            en[i].efree = false;
            srand((unsigned int)time(NULL));
            en[i].fx=rand()%2+1;
            if(en[i].fx==1)
            {   en[i].ex=1500;
                en[i].erect.moveTo(en[i].ex,en[i].ey);
                x=rand()%1000;
                if(x<=100){
                    en[i].etype=1;
                }
                if(x>=900){
                    en[i].etype=2;
                }
                else   en[i].etype=3;

                if(en[i].etype==0){
                    en[i].etype=3;}
                if(en[i].etype==1){
                    en[i].blood=2000;}
                if(en[i].etype==2){
                    en[i].blood=300;}
                if(en[i].etype==3){
                    en[i].blood=300;}


                break;}
            if(en[i].fx==2)
            {   en[i].ex=-300;
                en[i].erect.moveTo(en[i].ex,en[i].ey);
                en[i].etype=rand()%3;
                if(en[i].etype==0){
                    en[i].etype=3;}
                if(en[i].etype==1){
                    en[i].blood=2000;}
                if(en[i].etype==2){
                    en[i].blood=300;}
                if(en[i].etype==3){
                    en[i].blood=300;}

                break;
            }
        }
    }
}

void MainWindow::shuawu()
{
    int x=rand()%1400;
    int t=rand()%1000;

    jt++;
    if(jt < 20)
    {
        return;
    }
    jt = 0;
    for(int i = 0 ; i< 10;i++)
    {

        if(th[i].tfree)
        {
            th[i].tfree = false;

               th[i].tx=x;
            if(t<=100){
                th[i].type=1;
               }
            else {th[i].type=2;}



                break;}
    }
}



void MainWindow::on_START_clicked()
{
    ui->label->hide();
    ui->START->hide();
    ui->opti->hide();

    ui->blood->show();
    ui->bloods->show();
    ui->score->show();
    ui->scores->show();
    playgame();
}




void MainWindow::on_opti_clicked()
{
    opti= new options;
    opti->setWindowFlags(Qt::WindowStaysOnTopHint);
    opti->show();
}




void MainWindow::on_reborn_clicked()
{
    re=true;
    ui->end->hide();
    ui->reborn->hide();
    ui->fanhui->hide();
    ui->ends->hide();
    ui->endss->hide();
    ui->blood->show();
    ui->bloods->show();
    ui->score->show();
    ui->scores->show();
    playgame();
}


void MainWindow::on_fanhui_clicked()
{
    re=true;
    ui->end->hide();
    ui->ends->hide();
    ui->endss->hide();
    ui->fanhui->hide();
    ui->reborn->hide();
    ui->label->show();
    ui->START->show();
    ui->opti->show();
}

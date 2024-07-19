
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "map.h"
#include "ash.h"
#include "enemy.h"
#include <ctime>
#include "options.h"
#include "things.h"
#include "maps.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QTimer t1;
    QTimer t2;
    QTimer bt;
    QTimer ss;
    QTimer ld;
    QTimer chuguai;
    map mapt;
    ash hsa;
    enemys en[10];
    things th[10];
    int sjetype[10];
    int thtype[10];
    int js=0;
    int jt=0;
    int score=0;
    bool re=false;
    void begin();
    void playgame();
    void endgame();
    void ash_updateposition();
    void paintEvent(QPaintEvent *event);
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    void shuaguai();
    void shuawu();
    void sfpz_be();
    void sfpz_le();
    void sfpz_at();
    options *opti = new options;
    int maptype;
    maps *choosemap=new maps;

private slots:


   // void on_START_clicked();


   // void on_opti_clicked();

    void on_START_clicked();

    void on_opti_clicked();

    void on_reborn_clicked();

    void on_fanhui_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

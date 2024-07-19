#include "maps.h"
#include "ui_maps.h"

maps::maps(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::maps)
{
    ui->setupUi(this);
}

maps::~maps()
{
    delete ui;
}

void maps::on_map1_clicked()
{
    mp=1;
    maps::~maps();
}


void maps::on_map2_clicked()
{
    mp=2;
    maps::~maps();
}


void maps::on_map3_clicked()
{
    mp=3;
    maps::~maps();
}


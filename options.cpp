#include "options.h"
#include "ui_options.h"

options::options(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::options)
{
    ui->setupUi(this);
}

options::~options()
{
    delete ui;
}

void options::on_mapchoose_clicked()
{
    choosemap= new maps;
    choosemap->setWindowFlags(Qt::WindowStaysOnTopHint);
    choosemap->show();
}


void options::on_intro_clicked()
{
    intro= new introduction;
    intro->setWindowFlags(Qt::WindowStaysOnTopHint);
    intro->show();
}


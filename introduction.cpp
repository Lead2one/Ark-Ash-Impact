#include "introduction.h"
#include "ui_introduction.h"

introduction::introduction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::introduction)
{
    ui->setupUi(this);
}

introduction::~introduction()
{
    delete ui;
}

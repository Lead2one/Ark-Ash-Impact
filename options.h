#ifndef OPTIONS_H
#define OPTIONS_H

#include <QWidget>
#include "maps.h"
#include "introduction.h"

namespace Ui {
class options;
}

class options : public QWidget
{
    Q_OBJECT

public:
    explicit options(QWidget *parent = nullptr);
    ~options();
    maps *choosemap=new maps;
    introduction *intro=new introduction;

private slots:
    void on_mapchoose_clicked();

    void on_intro_clicked();

private:
    Ui::options *ui;
};

#endif // OPTIONS_H

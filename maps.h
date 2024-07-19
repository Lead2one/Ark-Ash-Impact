#ifndef MAPS_H
#define MAPS_H

#include <QWidget>

namespace Ui {
class maps;
}

class maps : public QWidget
{
    Q_OBJECT

public:
    explicit maps(QWidget *parent = nullptr);
    ~maps();
    int mp;

private slots:
    void on_map1_clicked();

    void on_map2_clicked();

    void on_map3_clicked();

private:
    Ui::maps *ui;
};

#endif // MAPS_H

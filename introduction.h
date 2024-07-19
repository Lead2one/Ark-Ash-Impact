#ifndef INTRODUCTION_H
#define INTRODUCTION_H

#include <QWidget>

namespace Ui {
class introduction;
}

class introduction : public QWidget
{
    Q_OBJECT

public:
    explicit introduction(QWidget *parent = nullptr);
    ~introduction();

private:
    Ui::introduction *ui;
};

#endif // INTRODUCTION_H

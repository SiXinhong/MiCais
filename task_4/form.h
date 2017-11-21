#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QPainter>
#include <algorithm>
#include<iostream>
using namespace std;

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT
    
public:
    explicit Form(QWidget *parent = 0);
    ~Form();
protected:
    void paintEvent(QPaintEvent *);
private:
    Ui::Form *ui;
    int gridsize;
    void updateGridSize();
};

#endif // FORM_H

#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QPainter>
#include <algorithm>
#include<iostream>
#include <QWheelEvent>
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
    void wheelEvent(QWheelEvent *event);
private:
    Ui::Form *ui;
    int gridsize;
    double grid;
    int centerX;
    int centerY;
    int o;
    bool f;
    void updateGridSize();
};

#endif // FORM_H

#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    gridsize=width()/20;
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::paintEvent(QPaintEvent *)
{
    QPainter painters(this);
    updateGridSize();
    int w=width()/gridsize*gridsize;
    int h=height()/gridsize*gridsize;
    for(int i=gridsize;i<height();i+=gridsize){
        painters.drawLine(QPoint(gridsize,i),QPoint(w,i));

    }
    for(int i=gridsize;i<width();i+=gridsize){
        painters.drawLine(QPoint(i,gridsize),QPoint(i,h));
    }
}

void Form::updateGridSize()
{
    int ori=max(height(),width());
    if(ori/gridsize>25){
        int x=ori/20;
        x/=10;x*=10;
        gridsize=x;
    }else if(ori/gridsize<15){
        int x=ori/20;
        x/=10;x*=10;
        gridsize=x;
    }
}

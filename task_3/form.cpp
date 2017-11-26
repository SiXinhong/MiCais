#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    f=true;
    grid=10;
    centerX=0;
    centerY=0;
}

Form::~Form()
{
    delete ui;
}

void Form::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load("D:/p2.png");
    painter.drawPixmap(50,50,1200,600,pix);
    QPainter painters(this);
    if(f){
        gridsize=(width()-50)/10;
        f=false;
    }
    o=max(height(),width());
    painters.drawLine(QPoint(40,40),QPoint(40,height()-10));
    painters.drawLine(QPoint(40,40),QPoint(width()-10,40));
    painters.drawLine(QPoint(width()-10,40),QPoint(width()-10,height()-10));
    painters.drawLine(QPoint(40,height()-10),QPoint(width()-10,height()-10));
    for(long long i=40+centerY;i<=height()-10;i+=gridsize){
        if(i>=40){
            QRectF ff(5,i,35,i+20);
            QString s=QString::number(((i-40-centerY)/gridsize*grid));

            painters.drawText(ff,s);
            painters.drawLine(QPoint(40,i),QPoint(width()-10,i));
        }
    }
    for(long long i=40+centerX;i<=width()-10;i+=gridsize){
        if(i>=40){
            QRectF ff(i,20,i+20,35);
            QString s=QString::number(((i-40-centerX)/gridsize*grid));
            painters.drawText(ff,s);
            painters.drawLine(QPoint(i,40),QPoint(i,height()-10));
        }
    }
}

void Form::wheelEvent(QWheelEvent *event)
{
    int r=event->delta();
    if(r>0){
        centerX=centerX*26/25-event->x()/25;
        centerY=centerY*26/25-event->y()/25;
        gridsize+=gridsize/25;
    }else if(gridsize>1){
        if(centerX<0) centerX=centerX*24/25+event->x()/25;
        else centerX=0;
        if(centerY<0) centerY=centerY*24/25+event->y()/25;
        else centerY=0;
        gridsize-=gridsize/25;
    }
    updateGridSize();
    this->update();
}


void Form::updateGridSize()
{
    int ori=max(height(),width())-50;
    if(ori/gridsize>=20){
        grid=grid*2;
        gridsize*=2;
    }else if(ori/gridsize<5){
        grid=grid/2;
        gridsize/=2;
    }
}


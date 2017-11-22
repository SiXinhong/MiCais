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
    QPainter painters(this);
    if(f){
        gridsize=width()/10;
        f=false;
    }
    o=max(height(),width());
    int w=(width()-40)/gridsize*gridsize+40;
    int h=(height()-40)/gridsize*gridsize+40;
    cout<<centerX<<" "<<centerY<<endl;
    for(int i=40+centerX;i<height();i+=gridsize){

        QRectF ff(5,i,35,i+20);
        QString s=QString::number(((i-40-centerX)/gridsize*grid));
        painters.drawText(ff,s);
        painters.drawLine(QPoint(40+centerX,i),QPoint(w,i));
    }
    for(int i=40+centerY;i<width();i+=gridsize){

        QRectF ff(i,20,i+20,35);
        QString s=QString::number(((i-40-centerY)/gridsize*grid));
        painters.drawText(ff,s);
        painters.drawLine(QPoint(i,40+centerY),QPoint(i,h));
    }
}

void Form::wheelEvent(QWheelEvent *event)
{
    int r=event->delta();
    if(r>0){
        centerX-=(event->x()-centerX)/25;
        centerY-=(event->y()-centerY)/25;
        gridsize+=gridsize/25;

    }else if(gridsize>1){
        if(centerX<0)centerX+=(event->x()-centerX)/25;
        else centerX=0;
        if(centerY<0)centerY+=(event->y()-centerY)/25;
        else centerY=0;
        gridsize-=gridsize/25;
    }
    updateGridSize();
    this->update();
}


void Form::updateGridSize()
{
    int ori=max(height(),width())-40;
    if(ori/gridsize>=20){
        cout<<"------"<<(ori)/gridsize<<endl;
        grid=grid*2;
        int x=ori/10;
        gridsize=x;
    }else if(ori/gridsize<=5){
        cout<<"------"<<(ori)/gridsize<<endl;
        grid=grid/2;
        int x=ori/10;
        //        x/=10;x*=10;
        gridsize=x;
    }
}

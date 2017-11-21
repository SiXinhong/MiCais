#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowState(Qt::WindowMaximized);
    ui->dockWidget->hide();
    ui->dockWidget_3->setMinimumWidth(250);
    widget=new Form(this);

    widget->setGeometry(0,50,width()-260,height()-60);
    widget->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *)
{
    widget->setGeometry(0,50,width()-260,height()-60);
    widget->update();
}

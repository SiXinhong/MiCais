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

    widget->setGeometry(0,50,width()-ui->dockWidget_3->width()-10,height()-60);

    widget->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *)
{
    widget->setGeometry(0,50,width()-ui->dockWidget_3->width()-10,height()-60);
    widget->update();
}



void MainWindow::on_action_read_dfx_triggered()
{
    QString qfilename=QFileDialog::getOpenFileName(this,tr("打开文件"),"default.dxf","*.dxf",0);
    dialog=new TypeDialog(this);
    dialog->show();
}

void MainWindow::on_action_read_micai_triggered()
{
    QString qfilename=QFileDialog::getOpenFileName(this,tr("打开数码迷彩文件"),"default.dmc","*.dmc",0);
}

void MainWindow::on_action_write_dfx_triggered()
{
    QString qfilename=QFileDialog::getSaveFileName(this,tr("导出工程文件"),"defalut.dxf","*.dxf",0);
}

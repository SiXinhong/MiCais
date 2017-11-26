#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<form.h>
#include<QWheelEvent>
#include<typedialog.h>
#include<QFileDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Form *widget;
protected:
    void paintEvent(QPaintEvent *);
private slots:
    void on_action_read_dfx_triggered();

    void on_action_read_micai_triggered();

    void on_action_write_dfx_triggered();

private:
    Ui::MainWindow *ui;
    TypeDialog *dialog;
};

#endif // MAINWINDOW_H

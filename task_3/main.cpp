#include <QApplication>
#include<QTextCodec>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("system"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("system"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("system"));
    QTextCodec::setCodecForTr(QTextCodec::codecForLocale());
    MainWindow w;
    w.show();
    return a.exec();
}

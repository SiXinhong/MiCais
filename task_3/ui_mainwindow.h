/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Nov 21 16:45:21 2017
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_read_dfx;
    QAction *action_read_micai;
    QAction *action_write_dfx;
    QAction *action_amalgamation;
    QAction *action;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(752, 481);
        action_read_dfx = new QAction(MainWindow);
        action_read_dfx->setObjectName(QString::fromUtf8("action_read_dfx"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon/cad.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_read_dfx->setIcon(icon);
        action_read_micai = new QAction(MainWindow);
        action_read_micai->setObjectName(QString::fromUtf8("action_read_micai"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icon/MICAI.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        action_read_micai->setIcon(icon1);
        action_write_dfx = new QAction(MainWindow);
        action_write_dfx->setObjectName(QString::fromUtf8("action_write_dfx"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icon/savepic.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_write_dfx->setIcon(icon2);
        action_amalgamation = new QAction(MainWindow);
        action_amalgamation->setObjectName(QString::fromUtf8("action_amalgamation"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("icon/changeBack.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_amalgamation->setIcon(icon3);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("icon/empty.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 752, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);
        dockWidget_2 = new QDockWidget(MainWindow);
        dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        dockWidget_2->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_2);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(action_read_dfx);
        menu->addAction(action_read_micai);
        menu->addAction(action_write_dfx);
        menu_2->addAction(action_amalgamation);
        menu_2->addAction(action);
        mainToolBar->addAction(action_read_dfx);
        mainToolBar->addAction(action_read_micai);
        mainToolBar->addAction(action_write_dfx);
        mainToolBar->addAction(action_amalgamation);
        mainToolBar->addAction(action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\217\230\345\275\242\350\277\267\345\275\251\345\267\245\347\250\213\345\233\276\350\236\215\345\220\210\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        action_read_dfx->setText(QApplication::translate("MainWindow", "\345\257\274\345\205\245\345\233\276\347\272\270", 0, QApplication::UnicodeUTF8));
        action_read_micai->setText(QApplication::translate("MainWindow", "\345\257\274\345\205\245\350\277\267\345\275\251", 0, QApplication::UnicodeUTF8));
        action_write_dfx->setText(QApplication::translate("MainWindow", "\345\257\274\345\207\272\345\233\276\347\272\270", 0, QApplication::UnicodeUTF8));
        action_amalgamation->setText(QApplication::translate("MainWindow", "\350\236\215\345\220\210", 0, QApplication::UnicodeUTF8));
        action->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244\350\277\267\345\275\251", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        menu_2->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221", 0, QApplication::UnicodeUTF8));
        menu_3->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

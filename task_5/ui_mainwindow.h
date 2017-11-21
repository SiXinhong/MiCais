/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Nov 21 14:21:33 2017
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
    QAction *action_keyshot;
    QAction *action_read_png;
    QAction *action_write_png;
    QAction *action_set_grid;
    QAction *action_setSize;
    QAction *action_add_rule;
    QAction *action_set_color;
    QAction *action_set_type;
    QAction *action_create;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QDockWidget *dockWidget_3;
    QWidget *dockWidgetContents_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(875, 456);
        action_keyshot = new QAction(MainWindow);
        action_keyshot->setObjectName(QString::fromUtf8("action_keyshot"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon/keyshot.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        action_keyshot->setIcon(icon);
        action_read_png = new QAction(MainWindow);
        action_read_png->setObjectName(QString::fromUtf8("action_read_png"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icon/openobj.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_read_png->setIcon(icon1);
        action_write_png = new QAction(MainWindow);
        action_write_png->setObjectName(QString::fromUtf8("action_write_png"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icon/savepic.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_write_png->setIcon(icon2);
        action_set_grid = new QAction(MainWindow);
        action_set_grid->setObjectName(QString::fromUtf8("action_set_grid"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("icon/m.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_set_grid->setIcon(icon3);
        action_setSize = new QAction(MainWindow);
        action_setSize->setObjectName(QString::fromUtf8("action_setSize"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("icon/cube.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_setSize->setIcon(icon4);
        action_add_rule = new QAction(MainWindow);
        action_add_rule->setObjectName(QString::fromUtf8("action_add_rule"));
        action_set_color = new QAction(MainWindow);
        action_set_color->setObjectName(QString::fromUtf8("action_set_color"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("icon/mycolor.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_set_color->setIcon(icon5);
        action_set_type = new QAction(MainWindow);
        action_set_type->setObjectName(QString::fromUtf8("action_set_type"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("icon/5.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_set_type->setIcon(icon6);
        action_create = new QAction(MainWindow);
        action_create->setObjectName(QString::fromUtf8("action_create"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("icon/run.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        action_create->setIcon(icon7);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 875, 23));
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
        dockWidget_3 = new QDockWidget(MainWindow);
        dockWidget_3->setObjectName(QString::fromUtf8("dockWidget_3"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        dockWidget_3->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_3);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(action_keyshot);
        menu->addAction(action_read_png);
        menu->addAction(action_write_png);
        menu_2->addAction(action_setSize);
        menu_2->addAction(action_set_grid);
        menu_2->addAction(action_add_rule);
        menu_2->addAction(action_set_color);
        menu_2->addAction(action_set_type);
        menu_2->addAction(action_create);
        mainToolBar->addAction(action_keyshot);
        mainToolBar->addAction(action_read_png);
        mainToolBar->addAction(action_write_png);
        mainToolBar->addAction(action_set_grid);
        mainToolBar->addAction(action_setSize);
        mainToolBar->addAction(action_set_type);
        mainToolBar->addAction(action_set_color);
        mainToolBar->addAction(action_create);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\217\230\345\275\242\350\277\267\345\275\251\344\270\211\347\273\264\346\270\262\346\237\223\350\275\257\344\273\266", 0, QApplication::UnicodeUTF8));
        action_keyshot->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200keyshot", 0, QApplication::UnicodeUTF8));
        action_read_png->setText(QApplication::translate("MainWindow", "\345\257\274\345\205\245\350\247\206\345\233\276", 0, QApplication::UnicodeUTF8));
        action_write_png->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\345\267\245\347\250\213\345\233\276", 0, QApplication::UnicodeUTF8));
        action_set_grid->setText(QApplication::translate("MainWindow", "\345\215\225\344\275\215\347\275\221\346\240\274\345\260\272\345\257\270", 0, QApplication::UnicodeUTF8));
        action_setSize->setText(QApplication::translate("MainWindow", "\346\250\241\345\236\213\345\260\272\345\257\270", 0, QApplication::UnicodeUTF8));
        action_add_rule->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\346\240\207\345\260\272", 0, QApplication::UnicodeUTF8));
        action_set_color->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\351\242\234\350\211\262", 0, QApplication::UnicodeUTF8));
        action_set_type->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\233\276\347\272\270\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        action_create->setText(QApplication::translate("MainWindow", "\345\210\266\344\275\234\345\267\245\347\250\213\345\233\276", 0, QApplication::UnicodeUTF8));
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

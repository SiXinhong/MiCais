/********************************************************************************
** Form generated from reading UI file 'typedialog.ui'
**
** Created: Sun Nov 26 16:23:33 2017
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TYPEDIALOG_H
#define UI_TYPEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_TypeDialog
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *comboBox;

    void setupUi(QDialog *TypeDialog)
    {
        if (TypeDialog->objectName().isEmpty())
            TypeDialog->setObjectName(QString::fromUtf8("TypeDialog"));
        TypeDialog->resize(400, 163);
        buttonBox = new QDialogButtonBox(TypeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 90, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        comboBox = new QComboBox(TypeDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(30, 60, 321, 22));

        retranslateUi(TypeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TypeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TypeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TypeDialog);
    } // setupUi

    void retranslateUi(QDialog *TypeDialog)
    {
        TypeDialog->setWindowTitle(QApplication::translate("TypeDialog", "\351\200\211\346\213\251\350\247\206\345\233\276\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("TypeDialog", "\345\211\215\350\247\206\345\233\276", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TypeDialog", "\345\220\216\350\247\206\345\233\276", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TypeDialog", "\345\267\246\350\247\206\345\233\276", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TypeDialog", "\345\217\263\350\247\206\345\233\276", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TypeDialog", "\344\277\257\350\247\206\345\233\276", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class TypeDialog: public Ui_TypeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TYPEDIALOG_H

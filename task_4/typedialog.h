#ifndef TYPEDIALOG_H
#define TYPEDIALOG_H

#include <QDialog>

namespace Ui {
class TypeDialog;
}

class TypeDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit TypeDialog(QWidget *parent = 0);
    ~TypeDialog();
    
private:
    Ui::TypeDialog *ui;
};

#endif // TYPEDIALOG_H

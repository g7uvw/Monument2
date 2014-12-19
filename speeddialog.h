#ifndef SPEEDDIALOG_H
#define SPEEDDIALOG_H

#include <QDialog>

namespace Ui {
class SpeedDialog;
}

class SpeedDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SpeedDialog(QWidget *parent = 0);
    ~SpeedDialog();

private:
    Ui::SpeedDialog *ui;
};

#endif // SPEEDDIALOG_H

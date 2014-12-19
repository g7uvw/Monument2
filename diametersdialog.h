#ifndef DIAMETERSDIALOG_H
#define DIAMETERSDIALOG_H

#include <QDialog>

namespace Ui {
class DiametersDialog;
}

class DiametersDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DiametersDialog(QWidget *parent = 0);
    ~DiametersDialog();

private:
    Ui::DiametersDialog *ui;
};

#endif // DIAMETERSDIALOG_H

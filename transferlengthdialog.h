#ifndef TRANSFERLENGTHDIALOG_H
#define TRANSFERLENGTHDIALOG_H

#include <QDialog>

namespace Ui {
class TransferLengthDialog;
}

class TransferLengthDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TransferLengthDialog(QWidget *parent = 0);
    ~TransferLengthDialog();

private:
    Ui::TransferLengthDialog *ui;
};

#endif // TRANSFERLENGTHDIALOG_H

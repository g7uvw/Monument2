#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
class QAction;
class QActionGroup;
class QLabel;
class QMenu;
QT_END_NAMESPACE

class QMenu;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

protected:
protected:


private slots:
    void on_pushButton_clicked();
    void on_actionSet_Spool_Sizes_triggered();
    void on_actionSet_Transfer_Speed_triggered();
    void on_actionSet_Transfer_Length_triggered();
    void on_pushButton_savetoppos_clicked();
    void on_pushButton_gototoppos_clicked();
    void on_pushButton_gotosavepos_clicked();
    void on_pushButton_gotobottompos_clicked();
    void on_pushButton_savebottompos_clicked();
    void on_pushButton_savecurpos_clicked();
    void on_pushButton_lockfreetop_clicked();
    void on_pushButton_lockfreebottom_clicked();
};

#endif // MAINWINDOW_H
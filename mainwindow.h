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
    enum system_statuses {unconfigured, configured_but_not_run, diameters_configured, speed_configured, length_configured, running, paused, error};

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
    void on_actionSetup_Communications_triggered();
};

#endif // MAINWINDOW_H

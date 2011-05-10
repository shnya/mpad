#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mptabview.h"
#include "qstringlist.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


    MPTabView *TabView();
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void init(const QStringList &qls);
public slots:
    void open();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

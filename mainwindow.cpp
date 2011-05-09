#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mptabview.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QLayout *lay = ui->centralWidget->layout();
    if(lay != 0){
        MPTabView *tabview = new MPTabView();
        lay->addWidget(tabview);
    }
 }

MainWindow::~MainWindow()
{
}

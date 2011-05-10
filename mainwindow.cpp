#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qfiledialog.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QLayout *lay = ui->centralWidget->layout();
    if(lay != 0){
        MPTabView *tabview = new MPTabView();
        lay->addWidget(tabview);
    }else{
        abort();
    }
    QObject::connect(ui->action_OPEN, SIGNAL(triggered()), this, SLOT(open()));
 }

MPTabView *MainWindow::TabView(){
    return static_cast<MPTabView*>(
            ui->horizontalLayout->itemAt(0)->widget()
    );
}

void MainWindow::init(const QStringList &qls){
    if(qls.count() > 1){
        for(int i = 1; i < qls.count(); i++)
            TabView()->openTab(qls[i]);
    }else{
        TabView()->newTab();
    }
}

void MainWindow::open(){
    QString filename = QFileDialog::getOpenFileName(this);
    TabView()->openTab(filename);
}


MainWindow::~MainWindow()
{
}

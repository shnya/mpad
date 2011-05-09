#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QStringList qls = QApplication::arguments();
    MainWindow w;
    //if(qls.count() > 1){
       // w.setFile(qls.last());
   // }
    //w.loadTextFile();
    w.show();

    return a.exec();
}

#include "mptabview.h"
#include "mptab.h"
#include <qvector.h>
#include <qfile.h>
#include <qtextstream.h>

MPTabView::MPTabView(QWidget *parent) :
    QTabWidget(parent)
{
    setMovable(true);
    setTabsClosable(true);
    setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
}

bool MPTabView::newTab(){
    MPTab *tab = new MPTab;
    addTab(tab,"*New");
    return true;
}

bool MPTabView::openTab(const QString &filename){
    MPTab *tab = new MPTab;
    addTab(tab,filename);

    QFile inputFile(filename);
    inputFile.open(QIODevice::ReadOnly);

    QTextStream in(&inputFile);
    QString line = in.readAll();
    inputFile.close();

    tab->setPlainText(line);
//    QTextCursor cursor = ui->textEdit->textCursor();
//    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);

    return true;
}



MPTabView::~MPTabView(){

}

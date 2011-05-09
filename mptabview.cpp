#include "mptabview.h"
#include "mptab.h"
#include <qvector.h>

MPTabView::MPTabView(QWidget *parent) :
    QTabWidget(parent)
{
    setMovable(true);
    setTabsClosable(true);
    setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    MPTab *tab = new MPTab;
    addTab(tab,"*New");
}



MPTabView::~MPTabView(){

}

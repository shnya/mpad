#include "mptab.h"
#include "qlayout.h"
#include "mptextedit.h"

MPTab::MPTab(QWidget *parent) :
    QWidget(parent)
{
    setAutoFillBackground(true);
    QHBoxLayout *lay = new QHBoxLayout;
    lay->setMargin(0);
    MPTextEdit *tedit = new MPTextEdit;
    tedit->setAutoFillBackground(true);
    lay->addWidget(tedit);
    setLayout(lay);
}

MPTab::~MPTab(){
}

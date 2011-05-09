#include "mptab.h"
#include "qlayout.h"

MPTab::MPTab(QWidget *parent) :
    QWidget(parent)
{
    setAutoFillBackground(true);
    QHBoxLayout *lay = new QHBoxLayout;
    lay->setMargin(0);
    QPlainTextEdit *tedit = new QPlainTextEdit;
    tedit->setAutoFillBackground(true);
    lay->addWidget(tedit);
    setLayout(lay);
}

MPTab::~MPTab(){
}

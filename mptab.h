#ifndef MPTAB_H
#define MPTAB_H

#include <QWidget>
#include "mptextedit.h"

class MPTab : public QWidget
{
    Q_OBJECT

    MPTextEdit* TextEdit();
public:
    explicit MPTab(QWidget *parent = 0);
    ~MPTab();

    void setPlainText(const QString &text);

signals:

public slots:

private:

};

#endif // MPTAB_H

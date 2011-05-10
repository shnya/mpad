#ifndef MPTABVIEW_H
#define MPTABVIEW_H

#include <QTabWidget>

class MPTabView : public QTabWidget
{
    Q_OBJECT
public:
    explicit MPTabView(QWidget *parent = 0);
    ~MPTabView();
    bool newTab();
    bool openTab(const QString &filename);

signals:

public slots:


};

#endif // MPTABVIEW_H

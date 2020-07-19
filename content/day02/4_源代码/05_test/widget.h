#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

signals:
    void mySignal(); // emit mySignal();

public slots:
    //void mySlot();
};

#endif // WIDGET_H

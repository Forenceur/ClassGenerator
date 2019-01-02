#ifndef MAINWIN_H
#define MAINWIN_H

#include <QObject>
#include <QWidget>

class MainWin : public QWidget
{
    Q_OBJECT
public:
    explicit MainWin(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // MAINWIN_H
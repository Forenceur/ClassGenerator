#ifndef MAINWIN_H
#define MAINWIN_H

#include <QObject>
#include <QWidget>
#include <QLayout>
#include <QGroupBox>
#include <QPushButton>
#include <QApplication>

#include <qgroupboxdefclass.h>
#include <qgroupboxoptions.h>
#include <qgroupboxcommentary.h>
#include <codewin.h>


class MainWin : public QWidget
{
    Q_OBJECT
public:
    explicit MainWin(QWidget *parent = nullptr);

private:
    QVBoxLayout *mainLayout;
    QGroupBoxDefClass *boxDefClass;
    QGroupBoxOptions *boxOptions;
    QGroupBoxCommentary *boxComment;

    QHBoxLayout *layoutButton;
    QPushButton *buttonGenerate;
    QPushButton *buttonExit;

    CodeWin *winOutCode;

signals:

public slots:
    void generateCode(void);
};

#endif // MAINWIN_H

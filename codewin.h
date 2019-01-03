#ifndef CODEWIN_H
#define CODEWIN_H

#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QMessageBox>

class CodeWin : public QDialog
{
    Q_OBJECT
public:
    explicit CodeWin(QString const& text, QWidget *parent = nullptr);

private:
    QVBoxLayout *vbox;
    QTextEdit *code;
    QPushButton *buttonQuit;

signals:

public slots:
};

#endif // CODEWIN_H

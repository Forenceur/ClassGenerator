#include "codewin.h"

CodeWin::CodeWin(QString const& text, QWidget *parent) : QDialog(parent)
{
    vbox=new QVBoxLayout;
    buttonQuit=new QPushButton(tr("Quitter","pour quitter l'app"));
    code=new  QTextEdit;
    code->setReadOnly(true);
    code->setFont(QFont("Courrier"));
    code->setPlainText(text);

    vbox->addWidget(code);
    vbox->addWidget(buttonQuit);

    this->setLayout(vbox);

    QObject::connect(buttonQuit,SIGNAL(clicked()),qApp,SLOT(quit()));
}

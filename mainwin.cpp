#include "mainwin.h"

MainWin::MainWin(QWidget *parent) : QWidget(parent)
{
    mainLayout=new QVBoxLayout;
    boxDefClass=new QGroupBoxDefClass;
    boxOptions=new  QGroupBoxOptions;
    boxComment=new QGroupBoxCommentary;
    buttonExit=new QPushButton(tr("Quitter"));
    buttonGenerate=new QPushButton(tr("Générer","génére le code voulu"));
    layoutButton=new QHBoxLayout;

    layoutButton->addWidget(buttonGenerate);
    layoutButton->addWidget(buttonExit);

    mainLayout->addWidget(boxDefClass);
    mainLayout->addWidget(boxOptions);
    mainLayout->addWidget(boxComment);
    mainLayout->addLayout(layoutButton);

    this->setLayout(mainLayout);

    QObject::connect(buttonExit,SIGNAL(clicked()),qApp,SLOT(quit()));
    QObject::connect(buttonGenerate,SIGNAL(clicked()),this,SLOT(generateCode()));
}

void MainWin::generateCode(void)
{
    QString code;
    if(boxComment->isChecked())
    {
        code.append("/*\n");
        QString author=boxComment->getAuthorString();
        if(!author.isEmpty())
            code.append(tr(" *autheur : "));
        code.append(author);

        QString date=boxComment->getDateString();
        if(!date.isEmpty())
            code.append(tr("\n *date création : "));
        code.append(date);

        QString description=boxComment->getCommentTextString();
        if(!description.isEmpty())
        {
            code.append("\n *");
            description.replace("\n","\n *");
            code.append(description);
        }
        code.append("\n*/");
    }

    code.append("\n\nClass ");
    code.append(boxDefClass->getClassNameFieldText());
    QString heritage=boxDefClass->getClassBaseFieldText();
    if(!heritage.isEmpty())
    {
        code.append(" : public ");
        code.append(heritage);
    }
    code.append("\n{\n\tpublic:\n");
    code.append("\n\tprotected:\n");
    code.append("\n\tprivate:\n");
    code.append("}");

    winOutCode=new CodeWin(code,this);
    winOutCode->exec();
}

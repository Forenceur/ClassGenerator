#include "qgroupboxcommentary.h"

QGroupBoxCommentary::QGroupBoxCommentary(QWidget *parent) : QGroupBox ("Ajouter des commentaires",parent)
{
    this->setCheckable(true);
    this->setChecked(false);
    author=new QLineEdit;
    date=new QDateEdit(QDate::currentDate());
    commentText=new QTextEdit;

    form=new QFormLayout;
    form->addRow("&Autheur:",author);
    form->addRow("Da&te de création:",date);
    form->addRow("&Rôle de la classe:",commentText);
    this->setLayout(form);
}

QString QGroupBoxCommentary::getAuthorString() const
{
    return author->text();
}

QString QGroupBoxCommentary::getDateString() const
{
    return date->text();
}

QString QGroupBoxCommentary::getCommentTextString() const
{
    return commentText->toPlainText();
}

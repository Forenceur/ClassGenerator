#include "qgroupboxcommentary.h"

QGroupBoxCommentary::QGroupBoxCommentary(QWidget *parent) : QGroupBox (tr("Ajouter des commentaires"),parent)
{
    this->setCheckable(true);
    this->setChecked(false);
    author=new QLineEdit;
    date=new QDateEdit(QDate::currentDate());
    commentText=new QTextEdit;

    form=new QFormLayout;
    form->addRow(tr("&Autheur:"),author);
    form->addRow(tr("Da&te de création:"),date);
    form->addRow(tr("&Rôle de la classe:"),commentText);
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

#include "qgroupboxdefclass.h"

QGroupBoxDefClass::QGroupBoxDefClass(QWidget *parent) : QGroupBox(tr("Définition de la classe"),parent)
{
    form=new QFormLayout;
    ClassBaseField=new QLineEdit();
    ClassNameField=new QLineEdit();

    form->addRow(tr("&Nom:","Nom de la classe"),ClassNameField);
    form->addRow(tr("Classe &Mère:"),ClassBaseField);

    this->setLayout(form);
}

QString QGroupBoxDefClass::getClassNameFieldText() const
{
    return ClassNameField->text();
}

QString QGroupBoxDefClass::getClassBaseFieldText() const
{
    return ClassBaseField->text();
}

#include "qgroupboxdefclass.h"

QGroupBoxDefClass::QGroupBoxDefClass(QWidget *parent) : QGroupBox("Définition de la classe",parent)
{
    form=new QFormLayout;
    ClassBaseField=new QLineEdit();
    ClassNameField=new QLineEdit();

    form->addRow("&Nom:",ClassNameField);
    form->addRow("Classe &Mère:",ClassBaseField);

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

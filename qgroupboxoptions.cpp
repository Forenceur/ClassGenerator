#include "qgroupboxoptions.h"

QGroupBoxOptions::QGroupBoxOptions(QWidget *parent) : QGroupBox("Options",parent)
{
    protectionInclude=new QCheckBox(tr("Protéger le &header contre les inclusions multiples"));
    generateConstructor=new QCheckBox(tr("Générer un &constructeur par défaut"));
    generateDestructor=new QCheckBox(tr("Générer un &destructeur"));

    protectionInclude->setChecked(true);

    vbox=new QVBoxLayout;
    vbox->addWidget(protectionInclude);
    vbox->addWidget(generateConstructor);
    vbox->addWidget(generateDestructor);

    this->setLayout(vbox);
}

bool QGroupBoxOptions::getProtectionIncludeActivate() const
{
    return protectionInclude->isChecked();
}

bool QGroupBoxOptions::getGenerateConstructorActivate() const
{
    return generateConstructor->isChecked();
}

bool QGroupBoxOptions::getGenerateDestructorActivate() const
{
    return generateDestructor->isChecked();
}

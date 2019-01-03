#ifndef QGROUPBOXDEFCLASS_H
#define QGROUPBOXDEFCLASS_H

#include <QGroupBox>
#include <QLineEdit>
#include <QFormLayout>
#include <QLayout>

class QGroupBoxDefClass : public QGroupBox
{
    Q_OBJECT

public:
    explicit QGroupBoxDefClass(QWidget *parent=nullptr);

    QString getClassNameFieldText() const;
    QString getClassBaseFieldText() const;

private:
    QLineEdit *ClassNameField;
    QLineEdit *ClassBaseField;
    QFormLayout *form;

signals:

public slots:
};

#endif // QGROUPBOXDEFCLASS_H

#ifndef QGROUBOXOPTIONS_H
#define QGROUBOXOPTIONS_H

#include <QGroupBox>
#include <QCheckBox>
#include <QLayout>

class QGroupBoxOptions : public QGroupBox
{
    Q_OBJECT
public:
    explicit QGroupBoxOptions(QWidget *parent=nullptr);

    bool getProtectionIncludeActivate() const;
    bool getGenerateConstructorActivate() const;
    bool getGenerateDestructorActivate() const;

private:
    QCheckBox *protectionInclude;
    QCheckBox *generateConstructor;
    QCheckBox *generateDestructor;
    QVBoxLayout *vbox;

signals:

public slots:
};

#endif // QGROUBOXOPTIONS_H

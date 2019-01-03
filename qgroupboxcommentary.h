#ifndef QGROUPBOXCOMMENTARY_H
#define QGROUPBOXCOMMENTARY_H

#include <QGroupBox>
#include <QFormLayout>
#include <QDateEdit>
#include <QLineEdit>
#include <QTextEdit>

class QGroupBoxCommentary : public QGroupBox
{
    Q_OBJECT

public:
    explicit QGroupBoxCommentary(QWidget *parent=nullptr);

    QString getAuthorString() const;
    QString getDateString() const;
    QString getCommentTextString() const;

private:
    QFormLayout *form;
    QLineEdit *author;
    QDateEdit *date;
    QTextEdit *commentText;

signals:

public slots:
};

#endif // QGROUPBOXCOMMENTARY_H

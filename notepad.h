#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QPlainTextEdit;
class QToolButton;
QT_END_NAMESPACE

class NotePad : public QWidget
{
    Q_OBJECT
public:
    explicit NotePad(QWidget *parent = nullptr);

private:
    QToolButton *back;

signals:

};

#endif // NOTEPAD_H

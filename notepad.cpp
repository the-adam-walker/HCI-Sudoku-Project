#include "notepad.h"

#include <QPlainTextEdit>
#include <QGridLayout>
#include <QToolButton>
#include <QDir>

QT_USE_NAMESPACE

NotePad::NotePad(QWidget *parent) : QWidget(parent)
{
       QGridLayout *layout = new QGridLayout(this);

       // Add notepad
       QPlainTextEdit *notePad = new QPlainTextEdit(this);
       notePad->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
       layout->addWidget(notePad, 1, 0);

       // Add back button
       back = new QToolButton(this);
       back->setText(tr("Back"));
       layout->addWidget(back, 0, 0);
}

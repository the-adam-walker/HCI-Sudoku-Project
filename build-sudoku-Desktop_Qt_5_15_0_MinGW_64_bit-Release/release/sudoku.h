//
// Statemachine code from reading SCXML file 'sudoku.scxml'
// Created by: The Qt SCXML Compiler version 1 (Qt 5.15.0)
// WARNING! All changes made in this file will be lost!
//

#ifndef SUDOKU_H
#define SUDOKU_H

#include <QScxmlStateMachine>
#include <QString>
#include <QVariant>

class Sudoku: public QScxmlStateMachine
{
    /* qmake ignore Q_OBJECT */
    Q_OBJECT
    Q_PROPERTY(bool game)
    Q_PROPERTY(bool idle)
    Q_PROPERTY(bool unsolved)
    Q_PROPERTY(bool solved)
    Q_PROPERTY(bool playing)
    Q_PROPERTY(bool solving)
    Q_PROPERTY(bool noting)
    Q_PROPERTY(bool notepad)


public:
    Q_INVOKABLE Sudoku(QObject *parent = 0);
    ~Sudoku();



Q_SIGNALS:


private:
    struct Data;
    friend struct Data;
    struct Data *data;
};

Q_DECLARE_METATYPE(::Sudoku*)

#endif // SUDOKU_H

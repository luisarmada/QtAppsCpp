/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btnAdd;
    QPushButton *btnSubtract;
    QPushButton *btnDivide;
    QPushButton *btnMultiply;
    QLineEdit *firstNumInput;
    QLineEdit *secondNumInput;
    QLineEdit *resultOutput;
    QLabel *label_4;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->setMinimumSize(QSize(377, 338));
        Calculator->setMaximumSize(QSize(377, 338));
        Calculator->resize(377, 338);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 70, 101, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 20, 381, 41));
        label_2->setSizeIncrement(QSize(0, 0));
        label_2->setTextFormat(Qt::AutoText);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 120, 101, 41));
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(40, 190, 61, 31));
        btnSubtract = new QPushButton(centralwidget);
        btnSubtract->setObjectName("btnSubtract");
        btnSubtract->setGeometry(QRect(120, 190, 61, 31));
        btnDivide = new QPushButton(centralwidget);
        btnDivide->setObjectName("btnDivide");
        btnDivide->setGeometry(QRect(200, 190, 61, 31));
        btnMultiply = new QPushButton(centralwidget);
        btnMultiply->setObjectName("btnMultiply");
        btnMultiply->setGeometry(QRect(280, 190, 61, 31));
        firstNumInput = new QLineEdit(centralwidget);
        firstNumInput->setObjectName("firstNumInput");
        firstNumInput->setGeometry(QRect(180, 80, 151, 24));
        secondNumInput = new QLineEdit(centralwidget);
        secondNumInput->setObjectName("secondNumInput");
        secondNumInput->setGeometry(QRect(180, 130, 151, 24));
        resultOutput = new QLineEdit(centralwidget);
        resultOutput->setObjectName("resultOutput");
        resultOutput->setGeometry(QRect(180, 250, 151, 24));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 240, 101, 41));
        Calculator->setCentralWidget(centralwidget);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        label->setText(QCoreApplication::translate("Calculator", "First Number", nullptr));
        label_2->setText(QCoreApplication::translate("Calculator", "Amazing Calculator", nullptr));
        label_3->setText(QCoreApplication::translate("Calculator", "Second Number", nullptr));
        btnAdd->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        btnSubtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        btnDivide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        btnMultiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        resultOutput->setText(QString());
        label_4->setText(QCoreApplication::translate("Calculator", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H

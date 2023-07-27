#include "calculator.h"
#include "ui_calculator.h"
#include <QDoubleValidator>


Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);

    ui->resultOutput->setReadOnly(true);

    // Input can only be numbers (and e)
    QDoubleValidator *validator = new QDoubleValidator(0, 100, 5, this);
    ui->firstNumInput->setValidator(validator);
    ui->secondNumInput->setValidator(validator);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_btnAdd_clicked()
{
    float result = GetFirstNum() + GetSecondNum();
    ui->resultOutput->setText(QString::number(result));
}


void Calculator::on_btnSubtract_clicked()
{
    float result = GetFirstNum() - GetSecondNum();
    ui->resultOutput->setText(QString::number(result));
}


void Calculator::on_btnDivide_clicked()
{
    float result = GetFirstNum() / GetSecondNum();
    ui->resultOutput->setText(QString::number(result));
}


void Calculator::on_btnMultiply_clicked()
{
    float result = GetFirstNum() * GetSecondNum();
    ui->resultOutput->setText(QString::number(result));
}

float Calculator::GetFirstNum(){
    return ui->firstNumInput->text().toFloat();
}

float Calculator::GetSecondNum(){
    return ui->secondNumInput->text().toFloat();
}

#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    float GetFirstNum();
    float GetSecondNum();

private slots:
    void on_btnAdd_clicked();

    void on_btnSubtract_clicked();

    void on_btnDivide_clicked();

    void on_btnMultiply_clicked();

private:
    Ui::Calculator *ui;
};
#endif // CALCULATOR_H

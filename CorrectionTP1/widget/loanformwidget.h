//
// Created by ihab on 22/05/2023.
//

#ifndef CORRECTIONTP1_LOANFORMWIDGET_H
#define CORRECTIONTP1_LOANFORMWIDGET_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class LoanFormWidget; }
QT_END_NAMESPACE

class LoanFormWidget : public QWidget {
Q_OBJECT

public:
    explicit LoanFormWidget(QWidget *parent = nullptr);

    ~LoanFormWidget() override;

private:
    Ui::LoanFormWidget *ui;
};


#endif //CORRECTIONTP1_LOANFORMWIDGET_H

//
// Created by ihab on 22/05/2023.
//

#ifndef CORRECTIONTP1_LOANPAGE_H
#define CORRECTIONTP1_LOANPAGE_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class LoanPage; }
QT_END_NAMESPACE

class LoanPage : public QWidget {
Q_OBJECT

public:
    explicit LoanPage(QWidget *parent = nullptr);

    ~LoanPage() override;

private:
    Ui::LoanPage *ui;
};


#endif //CORRECTIONTP1_LOANPAGE_H

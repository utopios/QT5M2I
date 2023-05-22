//
// Created by ihab on 22/05/2023.
//

#ifndef CORRECTIONTP1_LOANSWIDGET_H
#define CORRECTIONTP1_LOANSWIDGET_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class LoansWidget; }
QT_END_NAMESPACE

class LoansWidget : public QWidget {
Q_OBJECT

public:
    explicit LoansWidget(QWidget *parent = nullptr);

    ~LoansWidget() override;

private:
    Ui::LoansWidget *ui;
};


#endif //CORRECTIONTP1_LOANSWIDGET_H

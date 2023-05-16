//
// Created by ihab on 16/05/2023.
//

#ifndef CLION_DEMO_APP_JOACHIMMAINWINDOW_H
#define CLION_DEMO_APP_JOACHIMMAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QSpinBox>
#include <QPushButton>
#include <QComboBox>
#include <QLabel>


QT_BEGIN_NAMESPACE
namespace Ui { class JoaChimMainWindow; }
QT_END_NAMESPACE

class JoaChimMainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit JoaChimMainWindow(QWidget *parent = nullptr);

    ~JoaChimMainWindow() override;

private:
    Ui::JoaChimMainWindow *ui;
    QWidget* m_widget;
    QVBoxLayout* m_qvBoxLayout;
    QHBoxLayout* m_qhBoxLayout;
    QDoubleSpinBox* m_temperatureSpinBox;
    QComboBox* m_qComboBox;
    QStringList m_qStringList;
    QLabel* m_qLabel;
    QPushButton* m_conversionButton;
    void createContent();

private slots:
    void handleConversionButton();
};



#endif //CLION_DEMO_APP_JOACHIMMAINWINDOW_H

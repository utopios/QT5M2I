//
// Created by ihab on 16/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "JoaChimMainWindow.h"
#include "ui_JoaChimMainWindow.h"


JoaChimMainWindow::JoaChimMainWindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::JoaChimMainWindow) {
    ui->setupUi(this);
    createContent();
}

void JoaChimMainWindow::createContent() {
    m_widget = new QWidget();
    m_qvBoxLayout = new QVBoxLayout(m_widget);
    m_qhBoxLayout = new QHBoxLayout();
    m_temperatureSpinBox = new QDoubleSpinBox(m_widget);
    m_qComboBox = new QComboBox(m_widget);
    m_qLabel = new QLabel(m_widget);
    m_conversionButton = new QPushButton(m_widget);

    m_qStringList.append("Celsius -> Farenheit");
    m_qStringList.append("Farenheit -> Celsius");
    m_qComboBox->addItems(m_qStringList);
    m_qLabel->setText("N/A");
    m_conversionButton->setText("Convertir");

    m_qhBoxLayout->addWidget(m_temperatureSpinBox);
    m_qhBoxLayout->addWidget(m_qComboBox);
    m_qhBoxLayout->addWidget(m_qLabel);
    m_qvBoxLayout->addLayout(m_qhBoxLayout);
    m_qvBoxLayout->addWidget(m_conversionButton);

    QObject::connect(m_conversionButton, &QPushButton::clicked, this, &JoaChimMainWindow::handleConversionButton);
    setCentralWidget(m_widget);
}

void JoaChimMainWindow::handleConversionButton() {
    double conv(0.0);
    QString suffix("");

    if (m_qComboBox->currentIndex() == 0) {
        conv = (m_temperatureSpinBox->value() * 9/5) + 32;
        suffix = " °F";
    } else {
        conv = (m_temperatureSpinBox->value() - 32) * 5/9;
        suffix = " °C";
    }

    QString convString = QString::number(conv);
    m_qLabel->setText(convString + suffix);
}

JoaChimMainWindow::~JoaChimMainWindow() {
    delete ui;
}


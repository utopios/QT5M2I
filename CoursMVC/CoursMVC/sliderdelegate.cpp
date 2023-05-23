#include "sliderdelegate.h"
#include <QSlider>

QWidget* SliderDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &, const QModelIndex &index) const {
    QSlider *slider = new QSlider(parent);
    slider->setOrientation(Qt::Horizontal);
    slider->setRange(0,10);
    return slider;
}

void SliderDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const {
    QSlider *slider = qobject_cast<QSlider*>(editor);
    if(slider) {
        slider->setValue(index.data().toInt());
    }
}

void SliderDelegate::setModelData(QWidget *editor,QAbstractItemModel *model, const QModelIndex &index) const {
    QSlider *slider = qobject_cast<QSlider*>(editor);
    if(slider) {
        model->setData(index, slider->value());
    }
}

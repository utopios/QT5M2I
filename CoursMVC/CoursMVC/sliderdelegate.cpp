#include "sliderdelegate.h"
#include <QSlider>

QWidget* SliderDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &, const QModelIndex &index) const {
    QSlider *slider = new QSlider(parent);
    slider->setRange(0,1000);
    return slider;
}

void SliderDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const {
    QSlider *slider = qobject_cast<QSlider*>(editor);
    if(slider) {
        slider->setValue(index.data().toInt());
    }
}

void setModelData(QWidget *editor,QAbstractItemModel *model, const QModelIndex &index)  {
    QSlider *slider = qobject_cast<QSlider*>(editor);
    if(slider) {
        model->setData(index, slider->value());
    }
}

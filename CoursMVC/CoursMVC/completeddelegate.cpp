#include "completeddelegate.h"
#include <QCheckBox>

QWidget* CompletedDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &, const QModelIndex &index) const {
    QCheckBox* checkbox = new QCheckBox(parent);
    checkbox->setStyleSheet("width:100%; margin:auto");
    return checkbox;
}

void CompletedDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const {
    QCheckBox *checkbox = qobject_cast<QCheckBox*>(editor);
    if(checkbox) {
        checkbox->setChecked(index.data().toBool());
    }
}

void CompletedDelegate::setModelData(QWidget *editor,QAbstractItemModel *model, const QModelIndex &index) const {
    QCheckBox *checkbox = qobject_cast<QCheckBox*>(editor);

    if(checkbox) {
        model->setData(index, checkbox->isChecked());
    }
}

void CompletedDelegate::paint(QPainter* painter, const QStyleOptionViewItem &option, const QModelIndex &index) const {
    QStyleOptionViewItem opt = option;
    initStyleOption(&opt, index);
    if(index.data().toBool()) {
        opt.text= "Done";
        opt.palette.setColor(QPalette::Text, Qt::green);
    }
    else {
        opt.text = "Not Done";
        opt.palette.setColor(QPalette::Text, Qt::red);
    }
    const QWidget *widget = option.widget;
    QStyle *style = widget->style();
    style->drawControl(QStyle::CE_ItemViewItem, &opt, painter, widget);
}

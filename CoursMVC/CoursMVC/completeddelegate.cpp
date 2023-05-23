#include "completeddelegate.h"
#include <QCheckBox>

QWidget* CompletedDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &, const QModelIndex &index) const {
    QCheckBox* checkbox = new QCheckBox(parent);
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

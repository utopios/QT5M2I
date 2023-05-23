#ifndef SLIDERDELEGATE_H
#define SLIDERDELEGATE_H
#include <QStyledItemDelegate>

class SliderDelegate: public QStyledItemDelegate
{
public:
    SliderDelegate(QObject *parent = nullptr): QStyledItemDelegate(parent){}
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &, const QModelIndex &index) const override;
    void setEditorData(QWidget *editor, const QModelIndex &index) const override;
    void setModelData(QWidget *editor,QAbstractItemModel *model, const QModelIndex &index) const override;
};

#endif // SLIDERDELEGATE_H

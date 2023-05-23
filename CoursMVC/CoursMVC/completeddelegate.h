#ifndef COMPLETEDDELEGATE_H
#define COMPLETEDDELEGATE_H

#include <QStyledItemDelegate>

class CompletedDelegate : public QStyledItemDelegate
{
public:
    CompletedDelegate(QObject *parent = nullptr): QStyledItemDelegate(parent){}
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &, const QModelIndex &index) const override;
    void setEditorData(QWidget *editor, const QModelIndex &index) const override;
    void setModelData(QWidget *editor,QAbstractItemModel *model, const QModelIndex &index) const override;
    void paint(QPainter* painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
};

#endif // COMPLETEDDELEGATE_H

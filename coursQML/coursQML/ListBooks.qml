import QtQuick 2.15
import QtQuick.Layouts 1.15
ListView {
    id: fieldsList
    model: bookModel
    width: 300
    height: 100
    delegate: RowLayout {
        Text {
            text: bookModel.getField(index, "title")
        }
        Text {
            text: bookModel.getField(index, "author")
        }
        Text {
            text: bookModel.getField(index, "isbn")
        }
    }
}

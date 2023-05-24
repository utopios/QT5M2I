import QtQuick 2.15
import QtQuick.Layouts 1.15
ListView {
    id: fieldsList
    model: contactModel
    width: 300
    height: 100
    delegate: RowLayout {
//        Repeater {
//          model: contactModel.columnCount()
//          Text {
//              text: contactModel.data(contactModel.index(index, modelData))
//          }
//        }

        Text {
            text: contactModel.getField(index, "firstName")
        }
        Text {
            text: contactModel.getField(index, "lastName")
        }
        Text {
            text: contactModel.getField(index, "phone")
        }
    }

//    delegate: Row {
//        spacing: 10
//        Text {
//            text: firstName
//        }
//        Text {
//            text: lastName
//        }
//        Text {
//            text: phone
//        }
//    }
}

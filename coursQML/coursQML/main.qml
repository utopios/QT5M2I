import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
//    Rectangle {
//        width: 400
//        height : 400
//        color: "white"
//        anchors.centerIn: parent
//        Column {
//            Text {
//                text: "Hello World"
//                color: "#ff0000"
//                //anchors.centerIn: parent
//            }
//            Text {
//                text: "Im Ihab"
//                color: "#cd2127"
//                //anchors.centerIn: parent
//            }
//            Button {
//                text: "Buton 1"
//                //background: "#cd2127"
//            }
//        }


//    }
//    RowLayout {
//        anchors.centerIn: parent
//        Button {
//            text: "Button 1"
//        }
//        Button {
//            text: "Button 2"
//        }
//        Button {
//            text: "Button 3"
//        }
//    }

//    ColumnLayout {
//        anchors.centerIn: parent
//        Button {
//            text: "Button 1"
//        }
//        Button {
//            text: "Button 2"
//        }
//        Button {
//            text: "Button 3"
//        }
//    }
      GridLayout {
          anchors.centerIn: parent
          columns: 3
          rows: 4
          Button {
              text: "Button 1"
              Layout.row: 0
              Layout.column: 1
              onClicked: () => {
                  console.log("Hello From button with click on javascript")
              }
          }

          Button {
              text: "Button 2"
              Layout.row: 1
              Layout.column: 0
          }
      }

}

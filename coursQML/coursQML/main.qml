import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

import QtQuick.Layouts 1.15
import "functions.js" as ScriptFunctions
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
//      GridLayout {
//          anchors.centerIn: parent
//          columns: 3
//          rows: 4
//          Button {
//              text: "1"
//              Layout.row: 0
//              Layout.column: 1
//              onClicked: () => {
//                  let number = parseInt(this.text);
////                  number++;
////                  this.text = number.toString();
////                  console.log("Hello From button with click on javascript");
//                   this.text = ScriptFunctions.increase(number).toString()
//              }
//          }

//          Button {
//              text: "Button 2"
//              Layout.row: 1
//              Layout.column: 0
//          }
//      }
//     ColumnLayout {
//         anchors.centerIn: parent
//         Column {

//             Row {
//                 ListModel {
//                     id: fieldModel
//                     ListElement {name: "toto"}
//                 }
//                 ScrollView {
//                     width: 300
//                     height: 100
//                     //listView
////                     ListView {
////                         id: fieldsList
////                         model: fieldModel
////                         width: 300
////                         height: 100
////                         delegate: Text {
////                             text: name
////                         }
////                     }
//                     //TableView
//                     TableView {
//                         id: fieldsList
//                         model: fieldModel
////                         TableViewColumn {
////                             role: "name"
////                             title: "Field 1"
////                         }
//                         delegate: Text {
//                             text: name
//                         }
//                     }
//                 }


//             }
//             Row {
//                 Text {
//                     text: "Field 1"
//                 }
//                 TextField {
//                     id: field1
//                     width: 200
//                     placeholderText: "Text Field 1"
//                 }
//             }
//             Row {
//                 Button {
//                     text: "b1"
//                     onClicked: () => {
//                                    console.log(field1.text)
//                                    fieldModel.append({name: field1.text})
//                                    field1.text = ""
//                                }
//                 }
//             }
//         }






//     }
    //Correction Contact Form
    ColumnLayout {
//        ListModel {
//        id: contactModel
//        ListElement {firstName: "toto"; lastName:"titi"; phone:"010101010"}
//        }

        anchors.centerIn: parent

//        Form {

//        }

//        ListContacts {

//        }

        FormBook {

        }
        ListBooks {

        }

    }

}

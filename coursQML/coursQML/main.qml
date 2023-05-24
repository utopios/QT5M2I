import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Rectangle {
        width: 400
        height : 400
        color: "white"
        anchors.centerIn: parent
        Column {
            Text {
                text: "Hello World"
                color: "#ff0000"
                //anchors.centerIn: parent
            }
            Text {
                text: "Im Ihab"
                color: "#cd2127"
                //anchors.centerIn: parent
            }
            Button {
                text: "Buton 1"
                //background: "#cd2127"
            }
        }


    }
}

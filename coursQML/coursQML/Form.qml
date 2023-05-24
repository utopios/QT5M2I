import QtQuick 2.15
import QtQuick.Controls 2.15
Column {
    id: formContact
    Text {
        id: message
    }

    Rectangle {
        id: rectError
        //width:300
        border.color: "red"

    }

    TextField {
        id: firstName
        width: 300
        placeholderText: "Prénom"
        states: [
            State {
                name: "NORMAL"
                PropertyChanges {
                    target: firstName;
                    color: "green"
                }
            },
            State {
                name: "ERROR"
                PropertyChanges {
                    target: firstName;
                    background: rectError
                }
            }
        ]

    }
    TextField {
        id: lastName
        width: 300
        placeholderText: "Nom"
    }
    TextField {
        id: phone
        width: 300
        placeholderText: "Téléphone"
    }
    Button {
        text: "Valider"
        width: 300
        onClicked: () => {

                       if(firstName.text == "" || lastName.text == "" || phone.text == "") {
                           message.color = "red"
                           message.text = "Merci de saisir la totalité des champs"
                           //firstName.background = rectError
                           //lastName.background = rectError
                           //phone.background = rectError
                           firstName.state = "ERROR"
                       }
                       else {
                           firstName.state = "NORMAL"
                           message.color = "green"
                           message.text = firstName.text + " "+ lastName.text + " "+phone.text
                           contactModel.addRecord(firstName.text, lastName.text, phone.text)
                       }
                   }
    }
}

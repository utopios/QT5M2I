import QtQuick 2.15
import QtQuick.Controls 2.15
Column {
    id: formBook
    Text {
        id: message
    }

    TextField {
        id: title
        width: 300
        placeholderText: "Titre"
    }
    TextField {
        id: isbn
        width: 300
        placeholderText: "isbn"
    }
    TextField {
        id: author
        width: 300
        placeholderText: "auteur"
    }
    Button {
        text: "Valider"
        width: 300
        onClicked: () => {

                       if(title.text == "" || isbn.text == "" || author.text == "") {
                           message.color = "red"
                           message.text = "Merci de saisir la totalité des champs"
                       }
                       else {
                           message.text = "Livre ajouté"
                           bookModel.addRecord(title.text, isbn.text, author.text)
                           title.text= ""
                           author.text = ""
                           isbn.text = ""
                       }
                   }
    }
}

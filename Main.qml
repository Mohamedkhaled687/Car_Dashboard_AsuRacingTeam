import QtQuick
import QtQuick.Window
import QtQuick.Controls
Window {
    id: root
    width: 1400
    height: 700
    visible: true
    title: qsTr("CarDashboard_AsuRacingTeam")
    color: "black"


    StackView {
        id : stackView
        anchors.fill : parent
        initialItem : "UI/WelcomePage/WelcomeScreen.qml"
    }

}

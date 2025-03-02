import QtQuick
import QtQuick.Controls

Rectangle {
    id: root

    property real scaleFactor : 1.0
    color: "#1A3438"
    anchors.fill: parent
    radius: 40
    border.color: "#A6F1E0"
    border.width: 5


    Text {
        id : waitingText
        text : "Connecting to the Server"
        font {
            family : "Amiri"
            bold : true
            pixelSize : 25 * root.scaleFactor
        }

        anchors{
            horizontalCenter : parent.horizontalCenter
            bottom : busyIndicator.top
            bottomMargin : 10
        }

        color: "turquoise"
    }
    BusyIndicator {
       id : busyIndicator
       anchors.centerIn : parent
       width : 50
       height : 50

    }
}

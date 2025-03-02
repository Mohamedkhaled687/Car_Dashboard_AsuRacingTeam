import QtQuick 2.15
import QtQuick.Controls
import "../.."

Rectangle {
    id: root

    property real scaleFactor : 1.0
    color: "#1A3438"
    anchors.fill: parent
    radius: 40
    border.color: "#A6F1E0"
    border.width: 5

    Row {
        anchors.fill : parent
        anchors.margins : 40 * root.scaleFactor
        spacing : 10


        Rectangle {
            id : leftRect
            width : parent.width / 3
            height : parent.height - 10 * root.scaleFactor
            color : "#09122C"
            radius : 30

            Image {
                id : carImg
                source : "../Assets/CAR-215-ASURT.png"
                width : 350 * root.scaleFactor
                height : 300 * root.scaleFactor
                fillMode : Image.PreserveAspectFit
                smooth : true

                anchors {
                    top : formulalogo.top
                    horizontalCenter : parent.horizontalCenter
                    topMargin : 40
                }
            }

            Image {
                id : formulalogo
                source : "../Assets/formulalogo.jpeg"
                width : 200
                height : 100
                fillMode : Image.PreserveAspectFit
                smooth : true
                anchors {
                    top : parent.top
                    left : parent.left
                    leftMargin : 10
                }
            }

            Column {
                spacing : 8

                anchors {
                    horizontalCenter : parent.horizontalCenter
                    top : carImg.bottom
                    topMargin : 10
                }

                Text {
                    id : sessionInfo
                    text : "Please Enter Session details"
                    font {
                        family : "DS-Digital"
                        pixelSize : 18 * root.scaleFactor
                        bold : true
                    }

                    anchors.horizontalCenter : parent.horizontalCenter
                    color: "turquoise"
                }

                Text {
                    id : sessionName
                    text : "Enter Session Name : "
                    font {
                        pixelSize : 14 * root.scaleFactor
                        bold : true
                    }

                    anchors.left : parent.left
                    color : "white"
                }

                TextField {
                    id : sessionNameField
                    placeholderText: startButton.inValid_Name ? "Don't Leave This Empty!" : "Enter Session Name"
                    placeholderTextColor: startButton.inValid_Name ? "darkRed" : "turquoise"

                    width: 300 * root.scaleFactor
                    height: 30 * root.scaleFactor

                    font.pointSize : 12 * root.scaleFactor
                    verticalAlignment :  TextInput.AlignVCenter
                    anchors.horizontalCenter : parent.horizontalCenter
                    color : "white"

                    background : Rectangle {
                        color: "#636363"
                        radius: 50
                        border.color: parent.activeFocus ? "turquoise" : startButton.inValid_Name ? "darkRed" : "transparent"
                        border.width : 4
                    }


                }

                Text {
                    text: "Choose Port:"
                    font {
                        bold: true
                        pixelSize: 14 * root.scaleFactor
                    }
                    anchors {
                        left: parent.left
                    }
                    color: "white"
                }

                TextField {
                    id : portField
                    placeholderText: startButton.inValid_Port ? "Don't Leave This Empty!" : "Enter Port (e.g. , 8080)"
                    placeholderTextColor: startButton.inValid_Port ? "darkRed" : "turquoise"

                    width: 300 * root.scaleFactor
                    height: 30 * root.scaleFactor

                    font.pointSize : 12 * root.scaleFactor
                    verticalAlignment :  TextInput.AlignVCenter
                    anchors.horizontalCenter : parent.horizontalCenter
                    color : "white"

                    background : Rectangle {
                        color: "#636363"
                        radius: 50
                        border.color: parent.activeFocus ? "turquoise" : startButton.inValid_Port ? "darkRed" : "transparent"
                        border.width : 4
                    }

                }
            }

            MyButton {
                id : startButton
                property bool inValid_Name : false
                property bool inValid_Port : false

                source : "../Assets/powerButton.png"
                hoverText : "Start Session"
                width : 50 * root.scaleFactor
                height : 50 * root.scaleFactor
                fillMode : Image.PreserveAspectFit
                smooth : true

                anchors {
                    horizontalCenter : parent.horizontalCenter
                    bottom : parent.bottom
                    bottomMargin : 50
                }

                onClicked : {
                    inValid_Name = (sessionNameField.text === "")
                    inValid_Port = (portField.text === "")

                    // Only navigate if both fields are valid
                    if(!inValid_Name && !inValid_Port) {
                        // Convert port text to integer
                        var portNumber = parseInt(portField.text.trim())

                        // Validate port number (valid ports are 1-65535)
                        if (isNaN(portNumber) || portNumber < 1 || portNumber > 65535) {
                            // Show error for invalid port
                            inValid_Port = true
                            return
                        }

                        // Start the UDP client with the entered port
                        var success = udpClient.start(portNumber)

                        if (success) {
                            console.log("UDP client started successfully on port: " + portNumber)
                            // Navigate to waiting screen
                            stackView.push("WaitingScreen.qml")
                        } else {
                            console.error("Failed to start UDP client on port: " + portNumber)
                            // Optionally show an error message
                            inValid_Port = true // Mark as invalid to show error state
                        }
                    }
                }
            }

            Text {
                id : startText
                text : "Start"

                font {
                    family : "DS-Digital"
                    bold : true
                    pixelSize : 20 * root.scaleFactor
                }
                color: "turquoise"
                anchors {
                    horizontalCenter : parent.horizontalCenter
                    top : startButton.bottom
                    topMargin : 5
                }
            }
        }


    }
}

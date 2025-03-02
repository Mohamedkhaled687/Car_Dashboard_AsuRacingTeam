cmake_minimum_required(VERSION 3.16)

project(Car_Dashboard VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick Network)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appCar_Dashboard
    main.cpp
)

qt_add_qml_module(appCar_Dashboard
    URI Car_Dashboard
    VERSION 1.0
    QML_FILES
        Main.qml
        QML_FILES UI/WelcomePage/WelcomeScreen.qml
        RESOURCES UI/Assets/30.gif
        RESOURCES UI/Assets/CAR-215-ASURT.png
        RESOURCES UI/Assets/power.png
        QML_FILES UI/WelcomePage/MyButton.qml
        RESOURCES UI/Assets/powerButton.png
        QML_FILES UI/WelcomePage/WaitingScreen.qml
        SOURCES Controllers/udpclient.h Controllers/udpclient.cpp
        RESOURCES UI/Assets/formulalogo.jpeg
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appCar_Dashboard PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appCar_Dashboard
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appCar_Dashboard
    PRIVATE Qt6::Quick Qt6::Network
)

include(GNUInstallDirs)
install(TARGETS appCar_Dashboard
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

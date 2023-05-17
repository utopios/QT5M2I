cmake_minimum_required(VERSION 3.21)
project(AnnuaireDAO)
set(CMAKE_PREFIX_PATH "/Users/ihab/Qt/5.15.2/clang_64")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        Sql
        REQUIRED)

add_executable(AnnuaireDAO main.cpp entity/contact.cpp entity/contact.h dao/ContactDAO.cpp dao/ContactDAO.h dao/BaseDAO.cpp dao/BaseDAO.h window/contactwindow.cpp window/contactwindow.h window/contactwindow.ui widget/formwidget.cpp widget/formwidget.h widget/formwidget.ui)
target_link_libraries(AnnuaireDAO
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        Qt5::Sql
        )


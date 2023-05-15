cmake_minimum_required(VERSION 3.21)
project(CLion_demo_app)
set(CMAKE_PREFIX_PATH "/Users/ihab/Qt/5.15.2/clang_64")
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(CLion_demo_app main.cpp)
target_link_libraries(CLion_demo_app
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )


cmake_minimum_required(VERSION 3.21)
project(CorrectionTP1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/Users/ihab/Qt/5.15.2/clang_64")

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(CorrectionTP1 main.cpp mainwindow.cpp mainwindow.h mainwindow.ui page/bookspage.cpp page/bookspage.h page/bookspage.ui page/userspage.cpp page/userspage.h page/userspage.ui page/loanpage.cpp page/loanpage.h page/loanpage.ui widget/bookformwidget.cpp widget/bookformwidget.h widget/bookformwidget.ui widget/bookswidget.cpp widget/bookswidget.h widget/bookswidget.ui widget/userformwidget.cpp widget/userformwidget.h widget/userformwidget.ui widget/userswidget.cpp widget/userswidget.h widget/userswidget.ui widget/loanformwidget.cpp widget/loanformwidget.h widget/loanformwidget.ui widget/loanswidget.cpp widget/loanswidget.h widget/loanswidget.ui entity/Book.cpp entity/Book.h entity/User.cpp entity/User.h entity/Loan.cpp entity/Loan.h dao/BaseDAO.cpp dao/BaseDAO.h dao/UserDAO.cpp dao/UserDAO.h dao/LoanDAO.cpp dao/LoanDAO.h dao/BookDAO.cpp dao/BookDAO.h)
target_link_libraries(CorrectionTP1
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )


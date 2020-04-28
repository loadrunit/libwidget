cmake_minimum_required(VERSION 3.5)

project(libwidget LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
# set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets LinguistTools REQUIRED)

set(TS_FILES bwidget_zh_CN.ts)

add_library(widget SHARED
    frameless.cpp
    frameless.h
    ${TS_FILES}
)

target_link_libraries(widget PRIVATE Qt5::Widgets)

target_compile_definitions(widget PRIVATE WIDGET_LIBRARY)

qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})

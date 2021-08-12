cmake_minimum_required(VERSION 3.5)
list(APPEND "EXTRA_COMPONENT_DIRS" "./components/bus" "./components/lvgl_gui" "./components/screen" "./components/touch_panel")
include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(lvgl-demo)

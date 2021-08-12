
file(GLOB_RECURSE srcs lvgl/src/*.c)

list(APPEND srcs "lvgl_gui.c"
                "lvgl_adapter.c")

set(incdirs "."
            "lvgl"
            "include"
            "lvgl/src")
idf_component_register(
                        #SRCS "${srcs}"
                        INCLUDE_DIRS "${incdirs}"
                        REQUIRES screen 
                        )
                        target_link_libraries(${COMPONENT_LIB} INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/liblvgl_gui.a")
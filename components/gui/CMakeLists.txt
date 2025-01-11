FILE(GLOB SRC_FILES "*/*.c")
idf_component_register(
                    SRCS ${SRC_FILES} "gui.c"
                    INCLUDE_DIRS "boot/" "home/" "."
                    REQUIRES lvgl fonts rot_encoder config clock
                    )

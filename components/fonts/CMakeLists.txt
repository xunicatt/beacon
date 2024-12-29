FILE(GLOB SRC_FILES "digital/*.c" "dseg/*.c")
idf_component_register(
                    SRCS ${SRC_FILES} 
                    INCLUDE_DIRS "."
                    REQUIRES lvgl
                    )

idf_component_register(
                    SRCS "app.c" "main.c"
                    INCLUDE_DIRS "."
                    REQUIRES ws2812b st7789 rot_encoder nvs_flash wifi fonts
                    )

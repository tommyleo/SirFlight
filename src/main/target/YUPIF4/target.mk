F405_TARGETS    += $(TARGET)
FEATURES        += SDCARD VCP

#TARGET_SRC = \
            drivers/accgyro_mpu6500.c \
            drivers/accgyro_spi_mpu6500.c \
            drivers/accgyro_spi_icm20689.c\
            drivers/max7456.c \
            io/osd.c


TARGET_SRC = \
            drivers/accgyro_icm20689.c \
            drivers/accgyro_spi_mpu6500.c \
            drivers/max7456.c \
            io/osd.c

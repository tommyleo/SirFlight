F405_TARGETS   += $(TARGET)
FEATURES       += VCP ONBOARDFLASH

TARGET_SRC = \
            drivers/accgyro_mpu6500.c \
            drivers/accgyro_spi_mpu6500.c            

#TARGET_SRC = \
            drivers/accgyro_icm20689.c \
            drivers/accgyro_spi_mpu6500.c \

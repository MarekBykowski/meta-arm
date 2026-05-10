# FVP base specific U-boot support

DEPENDS += "gnutls-native"

SRC_URI:append = " \
    file://0001-vexpress64-Select-PSCI-RESET-by-default.patch \
    file://0002-vexpress64-Imply-CONFIG_ARM64_CRC32-by-default.patch \
    file://tick.patch \
    file://config-boot.cfg \
    "

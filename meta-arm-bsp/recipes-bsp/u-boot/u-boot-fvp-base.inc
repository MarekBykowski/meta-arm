# FVP base specific U-boot support

#mb: Override the u-boot recipe for fvp-base so that it gets U-boot from my repo.
SRCREV = "866ca972d6c3cabeaf6dbac431e8e08bb30b3c8e"
SRC_URI = "git://github.com/MarekBykowski/u-boot.git;protocol=https;branch=fvp-base"

SRC_URI:append = " \
    file://0001-vexpress64-Set-the-DM_RNG-property.patch \
    file://0002-vexpress64-Select-PSCI-RESET-by-default.patch \
    file://0003-vexpress64-Imply-CONFIG_ARM64_CRC32-by-default.patch \
    file://tick.patch \
    "

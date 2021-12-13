LICENSE = "Apache-2.0 & BSD-3-Clause & Zlib"
LIC_FILES_CHKSUM = "file://license.rst;md5=ea160bac7f690a069c608516b17997f4"

SRC_URI = "git://git.trustedfirmware.org/TS/trusted-services.git;protocol=https;branch=integration;name=ts;destsuffix=git/ts"

SRCREV_ts ?= "a365a04f937b9b76ebb2e0eeade226f208cbc0d2"

S = "${WORKDIR}/git/ts"
B = "${WORKDIR}/build"

export CROSS_COMPILE="${TARGET_PREFIX}"

CFLAGS[unexport] = "1"
CPPFLAGS[unexport] = "1"
AS[unexport] = "1"
LD[unexport] = "1"

# setting the linker options used to build the secure partitions
SECURITY_LDFLAGS = ""
TARGET_LDFLAGS = "-Wl,--build-id=none -Wl,--hash-style=both"

EXTRA_OEMAKE += "HOST_PREFIX=${HOST_PREFIX}"
EXTRA_OEMAKE += "CROSS_COMPILE64=${HOST_PREFIX}"

do_configure[cleandirs] = "${B}"
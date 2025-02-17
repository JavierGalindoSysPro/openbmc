SUMMARY = "TPM2 Access Broker & Resource Manager"
DESCRIPTION = "This is a system daemon implementing the TPM2 access \
broker (TAB) & Resource Manager (RM) spec from the TCG. The daemon (tpm2-abrmd) \
is implemented using Glib and the GObject system. In this documentation and \
in the code we use `tpm2-abrmd` and `tabrmd` interchangeably. \
"
SECTION = "security/tpm"

LICENSE = "BSD-2-Clause"
LIC_FILES_CHKSUM = "file://${S}/LICENSE;md5=500b2e742befc3da00684d8a1d5fd9da"

DEPENDS = "autoconf-archive dbus glib-2.0 tpm2-tss glib-2.0-native \
            libtss2 libtss2-mu libtss2-tcti-device libtss2-tcti-mssim"

SRC_URI = "\
    git://github.com/tpm2-software/tpm2-abrmd.git \
    file://tpm2-abrmd-init.sh \
    file://tpm2-abrmd.default \
"

SRCREV = "e2759308f6ff56270bf6e10ea82637d9c4669d9a"

S = "${WORKDIR}/git"

inherit autotools pkgconfig systemd update-rc.d useradd

SYSTEMD_PACKAGES += "${PN}"
SYSTEMD_SERVICE:${PN} = "tpm2-abrmd.service"
SYSTEMD_AUTO_ENABLE:${PN} = "disable"

INITSCRIPT_NAME = "${PN}"
INITSCRIPT_PARAMS = "start 99 2 3 4 5 . stop 19 0 1 6 ."

USERADD_PACKAGES = "${PN}"
GROUPADD_PARAM:${PN} = "tss"
USERADD_PARAM:${PN} = "--system -M -d /var/lib/tpm -s /bin/false -g tss tss"

PACKAGECONFIG ?="${@bb.utils.contains('DISTRO_FEATURES','systemd','systemd', '', d)}"
PACKAGECONFIG[systemd] = "--with-systemdsystemunitdir=${systemd_system_unitdir}, --with-systemdsystemunitdir=no"

do_install:append() {
    install -d "${D}${sysconfdir}/init.d"
    install -m 0755 "${WORKDIR}/tpm2-abrmd-init.sh" "${D}${sysconfdir}/init.d/tpm2-abrmd"

    install -d "${D}${sysconfdir}/default"
    install -m 0644 "${WORKDIR}/tpm2-abrmd.default" "${D}${sysconfdir}/default/tpm2-abrmd"
}

FILES:${PN} += "${libdir}/systemd/system-preset \
		${datadir}/dbus-1"

RDEPENDS:${PN} += "tpm2-tss"

BBCLASSEXTEND = "native"

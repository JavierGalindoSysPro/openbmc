FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI += "file://facebook-grandcanyon_defconfig.append \
           "

do_copyfile () {
    bbnote "copy files"

}
addtask copyfile after do_patch before do_configure

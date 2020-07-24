#sudo apt-get update
#sudo apt-get upgrade -y
#sudo apt-get install iproute2 -y

echo -m "install /sbin"
install -m 0755 -d /sbin
echo -m "install /etc/iproute2"
install -m 0755 -d /etc/iproute2
echo -m "install /var/lib/arpd"
install -m 0755 -d /var/lib/arpd
echo -m "install /usr/include/iproute2"
install -m 0755 -d /usr/include/iproute2

echo -m "ip folder binaries"
echo -m "install ipmacsec/ip ipmacsec/rtmon /sbin"
install -m 0755 ipmacsec/ip ipmacsec/rtmon /sbin
echo -m "install ipmacsec/ifcfg ipmacsec/rtpr ipmacsec/routel ipmacsec/routef /sbin"
install -m 0755 ipmacsec/ifcfg ipmacsec/rtpr ipmacsec/routel ipmacsec/routef /sbin

echo -m "install ipmacsec/iproute2"
install -m 0644 ipmacsec/iproute2/rt_scopes ipmacsec/iproute2/rt_realms ipmacsec/iproute2/bpf_pinning ipmacsec/iproute2/nl_protos ipmacsec/iproute2/rt_tables ipmacsec/iproute2/ematch_map ipmacsec/iproute2/rt_protos ipmacsec/iproute2/rt_dsfield ipmacsec/iproute2/group /etc/iproute2

echo -m "install /usr/share/bash-completion/completions"
install -m 0755 -d /usr/share/bash-completion/completions
echo -m "install tc to /usr/share/bash-completion/completions"
install -m 0644 ipmacsec/tc /usr/share/bash-completion/completions
echo -m "install devlink to /usr/share/bash-completion/completions"
install -m 0644 ipmacsec/devlink /usr/share/bash-completion/completions
echo -m "install ipmacsec/bpf_elf.h"
install -m 0644 ipmacsec/bpf_elf.h /usr/include/iproute2


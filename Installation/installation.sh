#!/bin/bash
sudo apt-get update
sudo apt-get upgrade -y
sudo apt-get install iproute2 -y

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
sudo cp if_link.h /lib/modules/$(uname -r)/build/include/uapi/linux
sudo cp if_link.h /usr/include/linux

###########################
#install kernel headers
sudo apt install bc
sudo apt install raspberrypi-kernel-headers
bool=$(echo $(uname -r | grep -o -E '[0-9]+.[0-9]+')'>'5.0 | bc -l)
echo $bool
if [[ $bool == 1 ]]; then
	cd MACsec/MACsec5.4
	sudo cp if_macsec.h /lib/modules/$(uname -r)/build/include/uapi/linux
	make
	sudo cp macsec.ko /lib/modules/$(uname -r)/kernel/drivers/net/
	sudo depmod
	sudo modprobe -v macsec
	cd ../../chacha	
	sudo bash script.txt
else

	cd MACsec/MACsec4.19
	sudo cp if_macsec.h /lib/modules/$(uname -r)/build/include/uapi/linux
	make
	sudo cp macsec.ko /lib/modules/$(uname -r)/kernel/drivers/net/
        sudo depmod
        sudo modprobe -v macsec
	cd ../../chacha 
        sudo bash script.txt

fi

#cd ../..
###########################
##helper function to compare linux versions
vercomp () {
    if [[ $1 == $2 ]]
    then
        return 0
    fi
    local IFS=.
    local i ver1=($1) ver2=($2)
    # fill empty fields in ver1 with zeros
    for ((i=${#ver1[@]}; i<${#ver2[@]}; i++))
    do
        ver1[i]=0
    done
    for ((i=0; i<${#ver1[@]}; i++))
    do
        if [[ -z ${ver2[i]} ]]
        then
            # fill empty fields in ver2 with zeros
            ver2[i]=0
        fi
        if ((10#${ver1[i]} > 10#${ver2[i]}))
        then
            return 1
        fi
        if ((10#${ver1[i]} < 10#${ver2[i]}))
        then
            return 2
        fi
    done
    return 0
}

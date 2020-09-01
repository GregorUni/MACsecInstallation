obj-m += macsec.o

ifeq ($(KERNEL_BUILD),)
	ifeq ($(KERNEL_VERSION),)
		KERNEL_VERSION=$(shell uname -r)
	endif
	KERNEL_BUILD=/lib/modules/$(KERNEL_VERSION)/build
endif


all:
	make -C $(KERNEL_BUILD) M=$(PWD) modules

clean:
	make -C $(KERNEL_BUILD) M=$(PWD) clean


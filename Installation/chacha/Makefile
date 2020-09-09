KDIR  := /lib/modules/$(shell uname -r)/build
PWD   := $(shell pwd)
obj-m := chacha20poly1305.o     # same name as the .c file of your module

default:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	make -C $(KDIR) M=$(PWD) clean


KDIR  := /lib/modules/$(shell uname -r)/build
PWD   := $(shell pwd)

obj-m += chacha20poly1305.o     # same name as the .c file of your module
obj-m += chacha_generic.o
obj-m += poly1305_generic.o

default:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean

KVERSION := $(shell uname -r)

TARGET_MODULE := rts5229

EXTRA_CFLAGS := -Idrivers/scsi

obj-m += $(TARGET_MODULE).o

$(TARGET_MODULE)-objs := rtsx.o rtsx_chip.o rtsx_transport.o rtsx_scsi.o rtsx_card.o \
			general.o sd.o ms.o

module:
	cp -f ./define.release ./define.h
	+make -C $(KERNELDIR) M=$(PWD) modules
debug:
	cp -f ./define.debug ./define.h
	$(MAKE) -C $(MOD_DIR)/build/ SUBDIRS=$(CURDIR) modules
install:
	cp $(TARGET_MODULE).ko $(MOD_DIR)/kernel/drivers/scsi -f
clean:
	rm -f *.o *.ko
	rm -f $(TARGET_MODULE).mod.c

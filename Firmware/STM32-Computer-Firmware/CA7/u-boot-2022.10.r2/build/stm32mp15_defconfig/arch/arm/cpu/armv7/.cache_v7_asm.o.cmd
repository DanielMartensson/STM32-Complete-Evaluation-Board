cmd_arch/arm/cpu/armv7/cache_v7_asm.o := arm-ostl-linux-gnueabi-gcc -Wp,-MD,arch/arm/cpu/armv7/.cache_v7_asm.o.d -nostdinc -isystem /home/lubuntu/Program/STM32/SDK/sysroots/x86_64-ostl_sdk-linux/usr/lib/arm-ostl-linux-gnueabi/gcc/arm-ostl-linux-gnueabi/12.3.0/include -Iinclude  -I/home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/include    -I/home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/arch/arm/include -include /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/include/linux/kconfig.h -D__KERNEL__ -D__UBOOT__ -D__ASSEMBLY__ -fno-PIE -g -D__ARM__ -Wa,-mimplicit-it=always -mthumb -mthumb-interwork -mabi=aapcs-linux -mword-relocations -fno-pic -mno-unaligned-access -ffunction-sections -fdata-sections -fno-common -ffixed-r9 -msoft-float -mgeneral-regs-only -pipe -march=armv7-a -D__LINUX_ARM_ARCH__=7 -mtune=generic-armv7-a  -I/home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/arch/arm/mach-stm32mp/include   -c -o arch/arm/cpu/armv7/cache_v7_asm.o /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/arch/arm/cpu/armv7/cache_v7_asm.S

source_arch/arm/cpu/armv7/cache_v7_asm.o := /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/arch/arm/cpu/armv7/cache_v7_asm.S

deps_arch/arm/cpu/armv7/cache_v7_asm.o := \
    $(wildcard include/config/sys/thumb/build.h) \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/include/linux/kconfig.h \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
    $(wildcard include/config/spl/.h) \
    $(wildcard include/config/tpl/.h) \
    $(wildcard include/config/tools/.h) \
    $(wildcard include/config/tpl/build.h) \
    $(wildcard include/config/vpl/build.h) \
    $(wildcard include/config/spl/build.h) \
    $(wildcard include/config/tools/foo.h) \
    $(wildcard include/config/spl/foo.h) \
    $(wildcard include/config/tpl/foo.h) \
    $(wildcard include/config/vpl/foo.h) \
    $(wildcard include/config/option.h) \
    $(wildcard include/config/acme.h) \
    $(wildcard include/config/spl/acme.h) \
    $(wildcard include/config/tpl/acme.h) \
    $(wildcard include/config/if/enabled/int.h) \
    $(wildcard include/config/int/option.h) \
  include/config.h \
    $(wildcard include/config/boarddir.h) \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/include/config_uncmd_spl.h \
    $(wildcard include/config/spl/dm.h) \
    $(wildcard include/config/dm/serial.h) \
    $(wildcard include/config/dm/i2c.h) \
    $(wildcard include/config/dm/stdio.h) \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/include/configs/stm32mp15_st_common.h \
    $(wildcard include/config/sys/baudrate/table.h) \
    $(wildcard include/config/extra/env/settings.h) \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/include/configs/stm32mp15_common.h \
    $(wildcard include/config/sys/sdram/base.h) \
    $(wildcard include/config/sys/bootmapsz.h) \
    $(wildcard include/config/sys/mmc/max/device.h) \
    $(wildcard include/config/sys/max/nand/device.h) \
    $(wildcard include/config/dwc/eth/qos.h) \
    $(wildcard include/config/serverip.h) \
    $(wildcard include/config/distro/defaults.h) \
    $(wildcard include/config/cmd/mmc.h) \
    $(wildcard include/config/net.h) \
    $(wildcard include/config/cmd/ubifs.h) \
    $(wildcard include/config/cmd/usb.h) \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/include/linux/sizes.h \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/include/linux/const.h \
  include/asm/arch/stm32.h \
    $(wildcard include/config/stm32mp15x.h) \
    $(wildcard include/config/stm32mp13x.h) \
    $(wildcard include/config/stm32mp25x.h) \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/include/config_distro_bootcmd.h \
    $(wildcard include/config/sandbox.h) \
    $(wildcard include/config/efi/loader.h) \
    $(wildcard include/config/arm64.h) \
    $(wildcard include/config/arm.h) \
    $(wildcard include/config/x86/run/32bit.h) \
    $(wildcard include/config/x86/run/64bit.h) \
    $(wildcard include/config/arch/rv32i.h) \
    $(wildcard include/config/arch/rv64i.h) \
    $(wildcard include/config/cmd/bootefi/bootmgr.h) \
    $(wildcard include/config/sata.h) \
    $(wildcard include/config/nvme.h) \
    $(wildcard include/config/scsi.h) \
    $(wildcard include/config/ide.h) \
    $(wildcard include/config/pci.h) \
    $(wildcard include/config/cmd/virtio.h) \
    $(wildcard include/config/cmd/dhcp.h) \
    $(wildcard include/config/x86.h) \
    $(wildcard include/config/cmd/pxe.h) \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/arch/arm/include/asm/config.h \
    $(wildcard include/config/arch/ls1021a.h) \
    $(wildcard include/config/fsl/layerscape.h) \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/include/linux/kconfig.h \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/include/config_fallbacks.h \
    $(wildcard include/config/spl/pad/to.h) \
    $(wildcard include/config/spl/max/size.h) \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/include/linux/linkage.h \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/arch/arm/include/asm/linkage.h \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/arch/arm/include/asm/system.h \
    $(wildcard include/config/armv8/psci.h) \
    $(wildcard include/config/armv7/lpae.h) \
    $(wildcard include/config/cpu/v7a.h) \
    $(wildcard include/config/armv7/psci.h) \
    $(wildcard include/config/sys/arm/cache/writethrough.h) \
    $(wildcard include/config/sys/arm/cache/writealloc.h) \
    $(wildcard include/config/sys/arm/cache/writeback.h) \
    $(wildcard include/config/sys/noncached/memory.h) \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/stack/validation.h) \
    $(wildcard include/config/kasan.h) \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/cc/has/asm/inline.h) \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/arch/arm/include/asm/barriers.h \

arch/arm/cpu/armv7/cache_v7_asm.o: $(deps_arch/arm/cpu/armv7/cache_v7_asm.o)

$(deps_arch/arm/cpu/armv7/cache_v7_asm.o):
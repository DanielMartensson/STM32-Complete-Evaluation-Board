cmd_tools/libfdt/fdt_addresses.o := cc -Wp,-MD,tools/libfdt/.fdt_addresses.o.d -Itools -Wall -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu11 -DCONFIG_FIT_SIGNATURE -DCONFIG_FIT_SIGNATURE_MAX_SIZE=0xffffffff -DCONFIG_FIT_CIPHER -include /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/include/compiler.h -idirafterinclude -idirafter/home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/include -idirafter/home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/arch/arm/include  -I/home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/scripts/dtc/libfdt  -I/home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/tools -DUSE_HOSTCC -D__KERNEL_STRICT_NAMES -D_GNU_SOURCE -c -o tools/libfdt/fdt_addresses.o /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/tools/libfdt/fdt_addresses.c

source_tools/libfdt/fdt_addresses.o := /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/tools/libfdt/fdt_addresses.c

deps_tools/libfdt/fdt_addresses.o := \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/stdc-predef.h \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/include/compiler.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/lib/gcc/x86_64-ostl_sdk-linux/12.3.0/include/stddef.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/lib/gcc/x86_64-ostl_sdk-linux/12.3.0/include/stdbool.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/lib/gcc/x86_64-ostl_sdk-linux/12.3.0/include/stdint.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/stdint.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/libc-header-start.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/features.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/features-time64.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/wordsize.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/timesize.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/sys/cdefs.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/long-double.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/gnu/stubs.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/gnu/stubs-64.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/typesizes.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/time64.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/wchar.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/stdint-intn.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/stdint-uintn.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/errno.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/errno.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/linux/errno.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/asm/errno.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/asm-generic/errno.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/asm-generic/errno-base.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types/error_t.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/stdlib.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/waitflags.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/waitstatus.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/floatn.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/floatn-common.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types/locale_t.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types/__locale_t.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/sys/types.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types/clock_t.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types/clockid_t.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types/time_t.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types/timer_t.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/endian.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/endian.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/endianness.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/byteswap.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/uintn-identity.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/sys/select.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/select.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types/sigset_t.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types/__sigset_t.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types/struct_timeval.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types/struct_timespec.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/pthreadtypes.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/thread-shared-types.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/pthreadtypes-arch.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/atomic_wide_counter.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/struct_mutex.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/struct_rwlock.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/alloca.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/stdlib-bsearch.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/stdlib-float.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/stdio.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/lib/gcc/x86_64-ostl_sdk-linux/12.3.0/include/stdarg.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types/__fpos_t.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types/__mbstate_t.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types/__fpos64_t.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types/__FILE.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types/FILE.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types/struct_FILE.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types/cookie_io_functions_t.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/stdio_lim.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/stdio.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/string.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/strings.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/sys/mman.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/mman.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/mman-map-flags-generic.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/mman-linux.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/mman-shared.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/mman_ext.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/fcntl.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/fcntl.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/fcntl-linux.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types/struct_iovec.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/linux/falloc.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/stat.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/struct_stat.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/byteswap.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/time.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/time.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/timex.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types/struct_tm.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/types/struct_itimerspec.h \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/tools/fdt_host.h \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/tools/../include/linux/libfdt.h \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/tools/../include/linux/../../scripts/dtc/libfdt/libfdt.h \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/tools/../include/linux/../../scripts/dtc/libfdt/libfdt_env.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/limits.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/lib/gcc/x86_64-ostl_sdk-linux/12.3.0/include-fixed/limits.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/posix1_lim.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/local_lim.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/linux/limits.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/pthread_stack_min-dynamic.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/posix2_lim.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/xopen_lim.h \
  /opt/STMicroelectronics/STM32MP1/SDK/4.2.4-openstlinux-6.1-yocto-mickledore-mpu-v24.06.26/sysroots/x86_64-ostl_sdk-linux/usr/include/bits/uio_lim.h \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/tools/../include/linux/../../scripts/dtc/libfdt/fdt.h \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/tools/../include/fdt_support.h \
    $(wildcard include/config/of/libfdt.h) \
    $(wildcard include/config/arch/fixup/fdt/memory.h) \
    $(wildcard include/config/usb/ehci/fsl.h) \
    $(wildcard include/config/usb/xhci/fsl.h) \
    $(wildcard include/config/sys/fsl/sec/compat.h) \
    $(wildcard include/config/pci.h) \
    $(wildcard include/config/sys/fdt/pad.h) \
    $(wildcard include/config/of/board/setup.h) \
    $(wildcard include/config/board/rng/seed.h) \
    $(wildcard include/config/of/system/setup.h) \
    $(wildcard include/config/fdt/fixup/partitions.h) \
    $(wildcard include/config/fman/enet.h) \
    $(wildcard include/config/fsl/mc/enet.h) \
    $(wildcard include/config/cmd/pstore.h) \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/tools/../scripts/dtc/libfdt/fdt_addresses.c \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/tools/../scripts/dtc/libfdt/libfdt_env.h \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/scripts/dtc/libfdt/fdt.h \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/scripts/dtc/libfdt/libfdt.h \
  /home/lubuntu/Dokument/GitHub/STM32-Computer/Firmware/STM32-Computer-Firmware/CA7/u-boot-2022.10.r2/u-boot-stm32mp-v2022.10-stm32mp-r2/tools/../scripts/dtc/libfdt/libfdt_internal.h \

tools/libfdt/fdt_addresses.o: $(deps_tools/libfdt/fdt_addresses.o)

$(deps_tools/libfdt/fdt_addresses.o):

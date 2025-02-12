# auto-generated TEE configuration file
# TEE version 92f66bfb3-dev
set(CFG_AES_GCM_TABLE_BASED y)
set(CFG_ARM32_core y)
set(CFG_ARM32_ldelf y)
set(CFG_ARM32_ta_arm32 y)
# CFG_ARM64_core is not set 
set(CFG_ARM_GIC_PM y)
# CFG_ATTESTATION_PTA is not set 
set(CFG_ATTESTATION_PTA_KEY_SIZE 3072)
# CFG_BOOT_SECONDARY_REQUEST is not set 
set(CFG_BSEC_PTA y)
set(CFG_CC_OPT_LEVEL s)
set(CFG_COMPAT_GP10_DES y)
# CFG_CORE_ASLR is not set 
set(CFG_CORE_ASYNC_NOTIF y)
set(CFG_CORE_ASYNC_NOTIF_GIC_INTID 31)
# CFG_CORE_BGET_BESTFIT is not set 
set(CFG_CORE_BIGNUM_MAX_BITS 4096)
# CFG_CORE_BTI is not set 
set(CFG_CORE_CLUSTER_SHIFT 2)
# CFG_CORE_DEBUG_CHECK_STACKS is not set 
# CFG_CORE_DUMP_OOM is not set 
set(CFG_CORE_DYN_SHM y)
set(CFG_CORE_HAS_GENERIC_TIMER y)
set(CFG_CORE_HEAP_SIZE 65536)
set(CFG_CORE_HUK_SUBKEY_COMPAT y)
# CFG_CORE_HUK_SUBKEY_COMPAT_USE_OTP_DIE_ID is not set 
# CFG_CORE_LARGE_PHYS_ADDR is not set 
set(CFG_CORE_MAX_SYSCALL_RECURSION 4)
set(CFG_CORE_MBEDTLS_MPI y)
set(CFG_CORE_NEX_HEAP_SIZE 16384)
# CFG_CORE_PAGE_TAG_AND_IV is not set 
# CFG_CORE_PAUTH is not set 
# CFG_CORE_PREALLOC_EL0_TBLS is not set 
# CFG_CORE_RESERVED_SHM is not set 
# CFG_CORE_RODATA_NOEXEC is not set 
set(CFG_CORE_RWDATA_NOEXEC y)
# CFG_CORE_SANITIZE_KADDRESS is not set 
# CFG_CORE_SANITIZE_UNDEFINED is not set 
set(CFG_CORE_THREAD_SHIFT 0)
# CFG_CORE_TPM_EVENT_LOG is not set 
set(CFG_CORE_TZSRAM_EMUL_SIZE 458752)
set(CFG_CORE_UNMAP_CORE_AT_EL0 y)
set(CFG_CORE_WORKAROUND_NSITR_CACHE_PRIME y)
set(CFG_CORE_WORKAROUND_SPECTRE_BP y)
set(CFG_CORE_WORKAROUND_SPECTRE_BP_SEC y)
set(CFG_COUNTER_DRIVER y)
set(CFG_CRYPTO y)
set(CFG_CRYPTOLIB_DIR core/lib/libtomcrypt)
set(CFG_CRYPTOLIB_NAME tomcrypt)
set(CFG_CRYPTOLIB_NAME_tomcrypt y)
set(CFG_CRYPTO_AES y)
# CFG_CRYPTO_AES_GCM_FROM_CRYPTOLIB is not set 
set(CFG_CRYPTO_CBC y)
set(CFG_CRYPTO_CBC_MAC y)
set(CFG_CRYPTO_CBC_MAC_BUNDLE_BLOCKS 64)
set(CFG_CRYPTO_CCM y)
set(CFG_CRYPTO_CMAC y)
set(CFG_CRYPTO_CONCAT_KDF y)
set(CFG_CRYPTO_CTR y)
set(CFG_CRYPTO_CTS y)
set(CFG_CRYPTO_DES y)
set(CFG_CRYPTO_DH y)
set(CFG_CRYPTO_DRIVER y)
set(CFG_CRYPTO_DRIVER_DEBUG 0)
set(CFG_CRYPTO_DRV_ACIPHER y)
set(CFG_CRYPTO_DRV_CIPHER y)
set(CFG_CRYPTO_DRV_ECC y)
set(CFG_CRYPTO_DRV_HASH y)
set(CFG_CRYPTO_DRV_MAC y)
set(CFG_CRYPTO_DSA y)
set(CFG_CRYPTO_ECB y)
set(CFG_CRYPTO_ECC y)
set(CFG_CRYPTO_ED25519 y)
set(CFG_CRYPTO_GCM y)
set(CFG_CRYPTO_HKDF y)
set(CFG_CRYPTO_HMAC y)
set(CFG_CRYPTO_MD5 y)
set(CFG_CRYPTO_PBKDF2 y)
set(CFG_CRYPTO_RSA y)
set(CFG_CRYPTO_RSASSA_NA1 y)
set(CFG_CRYPTO_SHA1 y)
set(CFG_CRYPTO_SHA224 y)
set(CFG_CRYPTO_SHA256 y)
set(CFG_CRYPTO_SHA384 y)
set(CFG_CRYPTO_SHA512 y)
set(CFG_CRYPTO_SHA512_256 y)
set(CFG_CRYPTO_SIZE_OPTIMIZATION y)
set(CFG_CRYPTO_SM2_DSA y)
set(CFG_CRYPTO_SM2_KEP y)
set(CFG_CRYPTO_SM2_PKE y)
set(CFG_CRYPTO_SM3 y)
set(CFG_CRYPTO_SM4 y)
set(CFG_CRYPTO_X25519 y)
set(CFG_CRYPTO_XTS y)
set(CFG_DEBUG_INFO y)
set(CFG_DEVICE_ENUM_PTA y)
set(CFG_DISPLAY y)
set(CFG_DRAM_BASE 0xc0000000)
set(CFG_DRAM_SIZE 0x20000000)
set(CFG_DRIVERS_ADC y)
set(CFG_DRIVERS_CLK y)
set(CFG_DRIVERS_CLK_DT y)
set(CFG_DRIVERS_CLK_EARLY_PROBE y)
set(CFG_DRIVERS_CLK_FIXED y)
# CFG_DRIVERS_DT_RECURSIVE_PROBE is not set 
set(CFG_DRIVERS_NVMEM y)
# CFG_DRIVERS_REMOTEPROC is not set 
set(CFG_DRIVERS_RSTCTRL y)
# CFG_DRIVERS_RTC is not set 
# CFG_DRIVERS_TPM2 is not set 
# CFG_DRIVERS_TPM2_MMIO is not set 
set(CFG_DT y)
set(CFG_DTB_MAX_SIZE (256 * 1024))
# CFG_DT_DRIVER_EMBEDDED_TEST is not set 
set(CFG_EARLY_TA y)
set(CFG_EARLY_TA_COMPRESS y)
set(CFG_EMBEDDED_TS y)
set(CFG_EMBED_DTB y)
set(CFG_EMBED_DTB_SOURCE_FILE stm32mp135f-dk.dts)
set(CFG_ENABLE_EMBEDDED_TESTS y)
# CFG_ENABLE_SCTLR_Z is not set 
# CFG_EXTERNAL_DT is not set 
# CFG_EXTERNAL_DTB_OVERLAY is not set 
set(CFG_EXT_DTS core/arch/arm/dts/external-dt/optee)
set(CFG_FRAME_BUFFER y)
set(CFG_FTRACE_BUF_WHEN_FULL shift)
# CFG_FTRACE_SUPPORT is not set 
set(CFG_FTRACE_US_MS 10000)
# CFG_GENERATE_DTB_OVERLAY is not set 
set(CFG_GIC y)
set(CFG_GP_SOCKETS y)
set(CFG_HWRNG_PTA y)
set(CFG_HWRNG_QUALITY 1024)
set(CFG_HWRNG_RATE 0)
set(CFG_HWSUPP_MEM_PERM_PXN y)
set(CFG_HWSUPP_MEM_PERM_WXN y)
set(CFG_INIT_CNTVOFF y)
set(CFG_IN_TREE_EARLY_TAS stm32mp_nvmem/1a8342cc-81a5-4512-99fe-9e2b3e37d626)
set(CFG_KERN_LINKER_ARCH arm)
set(CFG_KERN_LINKER_FORMAT elf32-littlearm)
set(CFG_LIBUTILS_WITH_ISOC y)
# CFG_LOCKDEP is not set 
set(CFG_LOCKDEP_RECORD_STACK y)
set(CFG_LPAE_ADDR_SPACE_BITS 32)
# CFG_MAP_EXT_DT_SECURE is not set 
set(CFG_MAX_CACHE_LINE_SHIFT 6)
# CFG_MEMTAG is not set 
set(CFG_MMAP_REGIONS 30)
set(CFG_MSG_LONG_PREFIX_MASK 0x1a)
set(CFG_NUM_THREADS 10)
# CFG_OPTEE_REVISION_EXTRA is not set 
set(CFG_OPTEE_REVISION_MAJOR 3)
set(CFG_OPTEE_REVISION_MINOR 19)
set(CFG_OS_REV_REPORTS_GIT_SHA1 y)
# CFG_PAGED_USER_TA is not set 
set(CFG_PKCS11_TA y)
set(CFG_PKCS11_TA_ALLOW_DIGEST_KEY y)
set(CFG_PKCS11_TA_AUTH_TEE_IDENTITY y)
set(CFG_PKCS11_TA_HEAP_SIZE (32 * 1024))
set(CFG_PKCS11_TA_TOKEN_COUNT 3)
set(CFG_PM y)
set(CFG_PM_ARM32 y)
set(CFG_PM_STUBS y)
set(CFG_PREALLOC_RPC_CACHE y)
set(CFG_PSCI_ARM32 y)
set(CFG_REE_FS y)
# CFG_REE_FS_ALLOW_RESET is not set 
# CFG_REE_FS_INTEGRITY_RPMB is not set 
set(CFG_REE_FS_TA y)
# CFG_REE_FS_TA_BUFFERED is not set 
set(CFG_REGULATOR_DRIVERS y)
set(CFG_REGULATOR_FIXED y)
# CFG_REMOTEPROC_PTA is not set 
set(CFG_REMOTEPROC_TA_HEAP_SIZE (4 * 1024))
set(CFG_RESERVED_VASPACE_SIZE (10 * 1024 * 1024 + 0x01000000))
# CFG_RPMB_FS is not set 
set(CFG_RPMB_FS_CACHE_ENTRIES 0)
# CFG_RPMB_FS_DEBUG_DATA is not set 
set(CFG_RPMB_FS_DEV_ID 0)
set(CFG_RPMB_FS_RD_ENTRIES 8)
# CFG_RPMB_RESET_FAT is not set 
# CFG_RPMB_TESTKEY is not set 
# CFG_RPMB_WRITE_KEY is not set 
# CFG_RTC_PTA is not set 
set(CFG_SCMI_MSG_CLOCK y)
set(CFG_SCMI_MSG_DRIVERS y)
set(CFG_SCMI_MSG_PERF_DOMAIN y)
set(CFG_SCMI_MSG_REGULATOR_CONSUMER y)
set(CFG_SCMI_MSG_RESET_DOMAIN y)
set(CFG_SCMI_MSG_SHM_MSG y)
# CFG_SCMI_MSG_SMT is not set 
# CFG_SCMI_MSG_SMT_FASTCALL_ENTRY is not set 
# CFG_SCMI_MSG_SMT_INTERRUPT_ENTRY is not set 
# CFG_SCMI_MSG_SMT_THREAD_ENTRY is not set 
# CFG_SCMI_MSG_THREAD_ENTRY is not set 
set(CFG_SCMI_MSG_VOLTAGE_DOMAIN y)
set(CFG_SCMI_PTA y)
# CFG_SCMI_SCPFW is not set 
# CFG_SCTLR_ALIGNMENT_CHECK is not set 
# CFG_SECONDARY_INIT_CNTFRQ is not set 
set(CFG_SECSTOR_TA y)
set(CFG_SECSTOR_TA_MGMT_PTA y)
# CFG_SECURE_DATA_PATH is not set 
# CFG_SECURE_PARTITION is not set 
set(CFG_SECURE_TIME_SOURCE_CNTPCT y)
# CFG_SHOW_CONF_ON_BOOT is not set 
set(CFG_SM_NO_CYCLE_COUNTING y)
set(CFG_SM_PLATFORM_HANDLER y)
# CFG_SPMC_TESTS is not set 
set(CFG_SP_INIT_INFO_MAX_SIZE 0x1000)
set(CFG_STACK_THREAD_EXTRA 0)
set(CFG_STACK_TMP_EXTRA 0)
set(CFG_STM32MP13 y)
set(CFG_STM32MP13_CLK y)
set(CFG_STM32MP13_RSTCTRL y)
# CFG_STM32MP15 is not set 
# CFG_STM32MP15_HUK is not set 
# CFG_STM32MP15x_STM32IMAGE is not set 
# CFG_STM32MP1_OPTEE_IN_SYSRAM is not set 
set(CFG_STM32MP1_PM_CONTEXT_VERSION 3)
set(CFG_STM32MP1_REGULATOR_IOD y)
# CFG_STM32MP1_SHARED_RESOURCES is not set 
set(CFG_STM32MP_CLK_CORE y)
set(CFG_STM32MP_OPP_COUNT 2)
set(CFG_STM32MP_PANIC_ON_TZC_PERM_VIOLATION y)
set(CFG_STM32MP_PROFILE secure_and_system_services)
set(CFG_STM32MP_PROVISIONING y)
# CFG_STM32MP_REMOTEPROC is not set 
set(CFG_STM32_ADC y)
set(CFG_STM32_BSEC y)
set(CFG_STM32_BSEC_WRITE y)
set(CFG_STM32_CLKCALIB y)
set(CFG_STM32_CPU_OPP y)
# CFG_STM32_CRYP is not set 
set(CFG_STM32_CRYPTO_DRIVER y)
set(CFG_STM32_EARLY_CONSOLE_UART 4)
set(CFG_STM32_ETZPC y)
set(CFG_STM32_EXTI y)
set(CFG_STM32_FIREWALL y)
set(CFG_STM32_GPIO y)
set(CFG_STM32_HASH y)
set(CFG_STM32_HSE_MONITORING y)
set(CFG_STM32_HUK_FROM_DT y)
set(CFG_STM32_I2C y)
set(CFG_STM32_IWDG y)
set(CFG_STM32_LOWPOWER_SIP y)
set(CFG_STM32_LPTIMER y)
set(CFG_STM32_LTDC y)
set(CFG_STM32_PKA y)
# CFG_STM32_PWR_SIP is not set 
set(CFG_STM32_REGULATOR_GPIO y)
set(CFG_STM32_RNG y)
set(CFG_STM32_RSTCTRL y)
set(CFG_STM32_RTC y)
set(CFG_STM32_SAES y)
set(CFG_STM32_SAES_SW_FALLBACK y)
set(CFG_STM32_SHARED_IO y)
set(CFG_STM32_TAMP y)
set(CFG_STM32_TAMP_NVRAM y)
set(CFG_STM32_TIM y)
set(CFG_STM32_UART y)
set(CFG_STM32_VREFBUF y)
set(CFG_STPMIC1 y)
# CFG_SYSCALL_FTRACE is not set 
# CFG_SYSCALL_WRAPPERS_MCOUNT is not set 
set(CFG_SYSCFG y)
set(CFG_SYSTEM_PTA y)
set(CFG_TA_ASLR y)
set(CFG_TA_ASLR_MAX_OFFSET_PAGES 128)
set(CFG_TA_ASLR_MIN_OFFSET_PAGES 0)
set(CFG_TA_BGET_TEST y)
set(CFG_TA_BIGNUM_MAX_BITS 2048)
# CFG_TA_BTI is not set 
set(CFG_TA_FLOAT_SUPPORT y)
# CFG_TA_GPROF_SUPPORT is not set 
set(CFG_TA_MBEDTLS y)
set(CFG_TA_MBEDTLS_MPI y)
set(CFG_TA_MBEDTLS_SELF_TEST y)
# CFG_TA_PAUTH is not set 
set(CFG_TA_STM32MP_NVMEM y)
set(CFG_TA_STRICT_ANNOTATION_CHECKS y)
set(CFG_TEE_API_VERSION GPD-1.1-dev)
# CFG_TEE_CORE_DEBUG is not set 
set(CFG_TEE_CORE_EMBED_INTERNAL_TESTS y)
set(CFG_TEE_CORE_LOG_LEVEL 2)
# CFG_TEE_CORE_MALLOC_DEBUG is not set 
set(CFG_TEE_CORE_NB_CORE 1)
set(CFG_TEE_CORE_TA_TRACE y)
set(CFG_TEE_FW_IMPL_VERSION FW_IMPL_UNDEF)
set(CFG_TEE_FW_MANUFACTURER FW_MAN_UNDEF)
set(CFG_TEE_IMPL_DESCR OPTEE)
set(CFG_TEE_MANUFACTURER LINARO)
set(CFG_TEE_TA_LOG_LEVEL 1)
# CFG_TEE_TA_MALLOC_DEBUG is not set 
set(CFG_TUI_FRAME_BUFFER_SIZE_MAX 0x01000000)
set(CFG_TZC400 y)
set(CFG_TZDRAM_SIZE 0x02000000)
set(CFG_TZDRAM_START (0xc0000000 + 0x20000000 - 0x02000000))
# CFG_ULIBS_MCOUNT is not set 
# CFG_ULIBS_SHARED is not set 
# CFG_VIRTUALIZATION is not set 
set(CFG_WARN_DECL_AFTER_STATEMENT y)
set(CFG_WARN_INSECURE y)
set(CFG_WDT y)
set(CFG_WDT_SM_HANDLER y)
set(CFG_WERROR y)
set(CFG_WITH_LPAE y)
# CFG_WITH_NSEC_GPIOS is not set 
set(CFG_WITH_NSEC_UARTS y)
# CFG_WITH_PAGER is not set 
# CFG_WITH_SOFTWARE_PRNG is not set 
set(CFG_WITH_STACK_CANARIES y)
set(CFG_WITH_STATS y)
# CFG_WITH_STMM_SP is not set 
set(CFG_WITH_TRNG y)
set(CFG_WITH_TUI y)
set(CFG_WITH_USER_TA y)
set(CFG_WITH_VFP y)
set(CFG_ZLIB y)
set(PLATFORM_FLAVOR_ y)
set(PLATFORM_stm32mp1 y)
set(_CFG_CORE_LTC_ACIPHER y)
set(_CFG_CORE_LTC_AES y)
# _CFG_CORE_LTC_AES_ACCEL is not set 
set(_CFG_CORE_LTC_AES_DESC y)
set(_CFG_CORE_LTC_ASN1 y)
set(_CFG_CORE_LTC_AUTHENC y)
set(_CFG_CORE_LTC_BIGNUM_MAX_BITS 4096)
set(_CFG_CORE_LTC_CBC y)
set(_CFG_CORE_LTC_CBC_MAC y)
set(_CFG_CORE_LTC_CCM y)
# _CFG_CORE_LTC_CE is not set 
set(_CFG_CORE_LTC_CIPHER y)
set(_CFG_CORE_LTC_CMAC y)
set(_CFG_CORE_LTC_CTR y)
set(_CFG_CORE_LTC_CTS y)
set(_CFG_CORE_LTC_DES y)
set(_CFG_CORE_LTC_DH y)
set(_CFG_CORE_LTC_DSA y)
set(_CFG_CORE_LTC_EC25519 y)
set(_CFG_CORE_LTC_ECB y)
set(_CFG_CORE_LTC_ECC y)
set(_CFG_CORE_LTC_ED25519 y)
set(_CFG_CORE_LTC_HASH y)
set(_CFG_CORE_LTC_HMAC y)
# _CFG_CORE_LTC_HWSUPP_PMULL is not set 
set(_CFG_CORE_LTC_MAC y)
set(_CFG_CORE_LTC_MD5 y)
set(_CFG_CORE_LTC_MPI y)
set(_CFG_CORE_LTC_OPTEE_THREAD y)
# _CFG_CORE_LTC_PAGER is not set 
set(_CFG_CORE_LTC_RSA y)
set(_CFG_CORE_LTC_SHA1 y)
# _CFG_CORE_LTC_SHA1_ACCEL is not set 
set(_CFG_CORE_LTC_SHA224 y)
set(_CFG_CORE_LTC_SHA256 y)
# _CFG_CORE_LTC_SHA256_ACCEL is not set 
set(_CFG_CORE_LTC_SHA256_DESC y)
set(_CFG_CORE_LTC_SHA384 y)
set(_CFG_CORE_LTC_SHA384_DESC y)
set(_CFG_CORE_LTC_SHA512 y)
set(_CFG_CORE_LTC_SHA512_256 y)
set(_CFG_CORE_LTC_SHA512_DESC y)
set(_CFG_CORE_LTC_SIZE_OPTIMIZATION y)
set(_CFG_CORE_LTC_SM2_DSA y)
set(_CFG_CORE_LTC_SM2_KEP y)
set(_CFG_CORE_LTC_SM2_PKE y)
set(_CFG_CORE_LTC_VFP y)
set(_CFG_CORE_LTC_X25519 y)
set(_CFG_CORE_LTC_XTS y)
set(_CFG_FTRACE_BUF_WHEN_FULL_shift y)
set(_CFG_SCMI_PTA_MSG_HEADER y)
# _CFG_SCMI_PTA_SMT_HEADER is not set 
# _CFG_USE_DTB_OVERLAY is not set 
set(_CFG_WITH_SECURE_STORAGE y)

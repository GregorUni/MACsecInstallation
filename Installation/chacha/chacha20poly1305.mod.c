#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x2a51cf90, "module_layout" },
	{ 0x85e689d8, "crypto_unregister_templates" },
	{ 0x4107ec63, "crypto_register_templates" },
	{ 0xecc73d1a, "aead_register_instance" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xad9db753, "crypto_drop_spawn" },
	{ 0x90526a1d, "crypto_grab_skcipher" },
	{ 0x38a23d3, "crypto_init_ahash_spawn" },
	{ 0xa188487f, "kmem_cache_alloc_trace" },
	{ 0x53b7741b, "kmalloc_caches" },
	{ 0x95dbfaaa, "crypto_mod_put" },
	{ 0xa7413107, "crypto_find_alg" },
	{ 0xed657804, "crypto_ahash_type" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xafd9f9c7, "crypto_spawn_tfm2" },
	{ 0x2133b6ee, "crypto_destroy_tfm" },
	{ 0x4f46bbf5, "crypto_skcipher_encrypt" },
	{ 0x5f754e5a, "memset" },
	{ 0xa79ce3e1, "crypto_ahash_finup" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0xe70d2c21, "crypto_skcipher_decrypt" },
	{ 0x23b0577a, "scatterwalk_ffwd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9d669763, "memcpy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "16C945A3194C6529E833B17");

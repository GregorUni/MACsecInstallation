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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xdf042dbf, "genl_unregister_family" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xba4fd55d, "rtnl_link_unregister" },
	{ 0x7a1e2e80, "genl_register_family" },
	{ 0xbf638aad, "rtnl_link_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x33726433, "skb_trim" },
	{ 0x762dd7ef, "genlmsg_put" },
	{ 0x79eeb57c, "crypto_aead_decrypt" },
	{ 0x795344c8, "netif_rx" },
	{ 0x4525812d, "skb_clone" },
	{ 0xbee837c1, "__pskb_pull_tail" },
	{ 0xd3972a2f, "skb_split" },
	{ 0x56c5fb95, "__netdev_alloc_skb" },
	{ 0x7fc4c8a9, "crypto_aead_encrypt" },
	{ 0x9e218c46, "skb_to_sgvec" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x2f799233, "skb_cow_data" },
	{ 0x90252b64, "skb_put" },
	{ 0x5f754e5a, "memset" },
	{ 0x32f74751, "skb_push" },
	{ 0xb352c6df, "skb_copy" },
	{ 0xf56c842f, "consume_skb" },
	{ 0x28527fac, "skb_copy_expand" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x9f0ecbc2, "dev_set_mtu" },
	{ 0xf80a70c3, "gro_cells_init" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xaa1c95c7, "netif_carrier_on" },
	{ 0xcaeab1e7, "dev_uc_unsync" },
	{ 0xd2c12849, "dev_mc_unsync" },
	{ 0x6e01f39e, "netif_carrier_off" },
	{ 0xf00913bc, "dev_queue_xmit" },
	{ 0xc8a6ec91, "dev_set_promiscuity" },
	{ 0x55a5f2c7, "dev_set_allmulti" },
	{ 0x3d7a345f, "dev_uc_sync" },
	{ 0xeaa54a9b, "dev_mc_sync" },
	{ 0xbe2f6dcc, "dev_uc_del" },
	{ 0x440b47a1, "dev_uc_add" },
	{ 0x8c3338ce, "ether_setup" },
	{ 0x78bf247f, "netdev_rx_handler_register" },
	{ 0x845a9b41, "linkwatch_fire_event" },
	{ 0x2569431c, "netif_stacked_transfer_operstate" },
	{ 0xe70e91e2, "netdev_upper_dev_link" },
	{ 0x469afbec, "register_netdevice" },
	{ 0xd2962945, "kfree_skb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xadea24b, "gro_cells_receive" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x7a4497db, "kzfree" },
	{ 0x5bde3012, "eth_type_trans" },
	{ 0x9ca7cee6, "___pskb_trim" },
	{ 0x3e629448, "skb_pull" },
	{ 0x99bb8806, "memmove" },
	{ 0xdc62f74, "netdev_rx_handler_unregister" },
	{ 0x6d0fbb35, "netdev_upper_dev_unlink" },
	{ 0x6efbf58a, "unregister_netdevice_queue" },
	{ 0x9d669763, "memcpy" },
	{ 0xa8cd6c47, "nla_put_64bit" },
	{ 0xa5c2e213, "nla_put" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xa188487f, "kmem_cache_alloc_trace" },
	{ 0x53b7741b, "kmalloc_caches" },
	{ 0x8e9c0e0f, "crypto_aead_setauthsize" },
	{ 0x8786ecf, "crypto_aead_setkey" },
	{ 0xef264597, "crypto_alloc_aead" },
	{ 0x2133b6ee, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfdd72e56, "__dev_get_by_index" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xc5850110, "printk" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2B2E6A9D433BDC5D858D2FD");

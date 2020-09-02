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
	{ 0xf51ce5f2, "module_layout" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x4987bca9, "genl_unregister_family" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x5db22f9e, "rtnl_link_unregister" },
	{ 0x4cbb9d52, "genl_register_family" },
	{ 0x8bbabb7b, "rtnl_link_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x465d41ee, "skb_trim" },
	{ 0x31c386a, "genlmsg_put" },
	{ 0xb0aec8b6, "skb_split" },
	{ 0x27bae554, "__netdev_alloc_skb" },
	{ 0x806375bb, "crypto_aead_encrypt" },
	{ 0xbec22de7, "crypto_aead_decrypt" },
	{ 0x918b9090, "skb_to_sgvec" },
	{ 0x50b03c47, "sg_init_table" },
	{ 0x5f754e5a, "memset" },
	{ 0x5c85b187, "skb_put" },
	{ 0x8bb46bb2, "skb_copy_expand" },
	{ 0xba791fa0, "skb_cow_data" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x34bb822e, "skb_push" },
	{ 0x9f2d809e, "netif_rx" },
	{ 0x8d5fe2ad, "skb_clone" },
	{ 0x5830acc3, "consume_skb" },
	{ 0x71629e60, "skb_copy" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x349085b1, "dev_set_mtu" },
	{ 0xca7340fe, "gro_cells_init" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xf10f4884, "netif_carrier_on" },
	{ 0x348a4c16, "dev_uc_unsync" },
	{ 0x3365dd68, "dev_mc_unsync" },
	{ 0xfe90f12a, "netif_carrier_off" },
	{ 0x9d17daf0, "dev_queue_xmit" },
	{ 0xa1765a88, "dev_set_promiscuity" },
	{ 0x42b77f42, "dev_set_allmulti" },
	{ 0x9dce015e, "dev_uc_sync" },
	{ 0xc05dc408, "dev_mc_sync" },
	{ 0x96bbcb36, "dev_uc_del" },
	{ 0xa4242c10, "dev_uc_add" },
	{ 0x88759ff1, "ether_setup" },
	{ 0xd2c0b17e, "netdev_rx_handler_register" },
	{ 0x8d9e4ceb, "linkwatch_fire_event" },
	{ 0xc91fdaf4, "netif_stacked_transfer_operstate" },
	{ 0x88c0e050, "netdev_upper_dev_link" },
	{ 0x99157085, "register_netdevice" },
	{ 0x4040af76, "kfree_skb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdd1d9805, "gro_cells_receive" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x7a4497db, "kzfree" },
	{ 0x3c568fa3, "eth_type_trans" },
	{ 0x1e5715bf, "___pskb_trim" },
	{ 0x9ca2de73, "skb_pull" },
	{ 0x99bb8806, "memmove" },
	{ 0x33d4476a, "__pskb_pull_tail" },
	{ 0xc67e2da9, "netdev_rx_handler_unregister" },
	{ 0xfa2ef6b6, "netdev_upper_dev_unlink" },
	{ 0xe5accc60, "unregister_netdevice_queue" },
	{ 0x9d669763, "memcpy" },
	{ 0xa8cd6c47, "nla_put_64bit" },
	{ 0xa5c2e213, "nla_put" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xf98b2a3e, "kmem_cache_alloc_trace" },
	{ 0x2ccdd063, "kmalloc_caches" },
	{ 0x19d16a38, "crypto_aead_setauthsize" },
	{ 0xaf2979e9, "crypto_aead_setkey" },
	{ 0x5dd31afd, "crypto_alloc_aead" },
	{ 0x3fe3e002, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x38b0c830, "__dev_get_by_index" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xc5850110, "printk" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D62E9ACAF34E2097358F06F");

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
	{ 0xe7cc3b88, "module_layout" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xf54acb6e, "genl_unregister_family" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xb4b49d4e, "rtnl_link_unregister" },
	{ 0xa798c20c, "genl_register_family" },
	{ 0x5198179f, "rtnl_link_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xaa5f1eba, "skb_trim" },
	{ 0xfba7cd0e, "genlmsg_put" },
	{ 0xee75b069, "skb_split" },
	{ 0xa55ecf54, "__netdev_alloc_skb" },
	{ 0xc39b267d, "crypto_aead_encrypt" },
	{ 0x5f754e5a, "memset" },
	{ 0x19ec0cef, "skb_put" },
	{ 0x536b642, "skb_copy_expand" },
	{ 0xce66ab70, "crypto_aead_decrypt" },
	{ 0xbeba38d8, "skb_to_sgvec" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xe6fc83e8, "skb_cow_data" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0xdd655a18, "skb_push" },
	{ 0x92c44d06, "netif_rx" },
	{ 0x507e43bf, "skb_clone" },
	{ 0x283238a2, "__pskb_pull_tail" },
	{ 0x42ca0afc, "consume_skb" },
	{ 0x938cb367, "skb_copy" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xd04777c6, "dev_set_mtu" },
	{ 0x8e6a782b, "gro_cells_init" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x62c8035c, "netif_carrier_on" },
	{ 0x9dd25b3f, "dev_uc_unsync" },
	{ 0xf5d74888, "dev_mc_unsync" },
	{ 0x5147c74c, "netif_carrier_off" },
	{ 0xe25a656f, "dev_queue_xmit" },
	{ 0x9d8fefe6, "dev_set_promiscuity" },
	{ 0x4fe70f9a, "dev_set_allmulti" },
	{ 0x71a188be, "dev_uc_sync" },
	{ 0xdcc58016, "dev_mc_sync" },
	{ 0xf38d1662, "dev_uc_del" },
	{ 0xe3e87359, "dev_uc_add" },
	{ 0x31d95123, "ether_setup" },
	{ 0x5e56690d, "netdev_rx_handler_register" },
	{ 0x9d3443a7, "linkwatch_fire_event" },
	{ 0xeb02711d, "netif_stacked_transfer_operstate" },
	{ 0x48c7a29d, "netdev_upper_dev_link" },
	{ 0xe388caa3, "register_netdevice" },
	{ 0x5684aacc, "kfree_skb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x1f9aa000, "gro_cells_receive" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x7a4497db, "kzfree" },
	{ 0x25fb18f6, "eth_type_trans" },
	{ 0xc4a72bd0, "___pskb_trim" },
	{ 0x967b9bb8, "skb_pull" },
	{ 0x99bb8806, "memmove" },
	{ 0x13f333d, "netdev_rx_handler_unregister" },
	{ 0x7c4e80c2, "netdev_upper_dev_unlink" },
	{ 0x29a135b1, "unregister_netdevice_queue" },
	{ 0x9d669763, "memcpy" },
	{ 0xa8cd6c47, "nla_put_64bit" },
	{ 0xa5c2e213, "nla_put" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xa9a5f9a6, "kmem_cache_alloc_trace" },
	{ 0xcda51ca2, "kmalloc_caches" },
	{ 0xaf7a68ec, "crypto_aead_setauthsize" },
	{ 0x395491fb, "crypto_aead_setkey" },
	{ 0xa09eb8c4, "crypto_alloc_aead" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xbbd2f80f, "__dev_get_by_index" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xc5850110, "printk" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DE10DD5B2B640C6A5D9A3DC");

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
	{ 0xdad1276d, "module_layout" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xb7031f7f, "genl_unregister_family" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x49a27beb, "rtnl_link_unregister" },
	{ 0x9fbb3d82, "genl_register_family" },
	{ 0xdf35ae1, "rtnl_link_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x824bcce6, "skb_trim" },
	{ 0x4a78d5b3, "genlmsg_put" },
	{ 0x62728f68, "skb_split" },
	{ 0x92598fa4, "__netdev_alloc_skb" },
	{ 0xf1ee67be, "crypto_aead_encrypt" },
	{ 0x5f754e5a, "memset" },
	{ 0x71483d76, "skb_put" },
	{ 0xebbb6117, "skb_copy_expand" },
	{ 0xe41f0a53, "crypto_aead_decrypt" },
	{ 0xebf21016, "skb_to_sgvec" },
	{ 0x50b03c47, "sg_init_table" },
	{ 0x9f47759d, "skb_cow_data" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x3ac4dce5, "skb_push" },
	{ 0x68658ed6, "netif_rx" },
	{ 0x7b2d0681, "skb_clone" },
	{ 0x807395f3, "__pskb_pull_tail" },
	{ 0xc9f31519, "consume_skb" },
	{ 0x39dd700f, "skb_copy" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x2d361ddb, "dev_set_mtu" },
	{ 0xbde1722a, "gro_cells_init" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xe331d27b, "netif_carrier_on" },
	{ 0xf0b0356, "dev_uc_unsync" },
	{ 0xaeb6aa, "dev_mc_unsync" },
	{ 0x4ac7f2df, "netif_carrier_off" },
	{ 0x95ac429b, "dev_queue_xmit" },
	{ 0xd7f66897, "dev_set_promiscuity" },
	{ 0xbdda1880, "dev_set_allmulti" },
	{ 0x2be23b90, "dev_uc_sync" },
	{ 0x6d9f19b7, "dev_mc_sync" },
	{ 0x32b83c59, "dev_uc_del" },
	{ 0xfd3f4656, "dev_uc_add" },
	{ 0x7acf5214, "ether_setup" },
	{ 0xcc90921, "netdev_rx_handler_register" },
	{ 0x399dec4c, "linkwatch_fire_event" },
	{ 0x79413f35, "netif_stacked_transfer_operstate" },
	{ 0x88a967b5, "netdev_upper_dev_link" },
	{ 0x68382177, "register_netdevice" },
	{ 0x99744151, "kfree_skb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xae7c51fc, "gro_cells_receive" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x7a4497db, "kzfree" },
	{ 0x39b4dd4b, "eth_type_trans" },
	{ 0x5bada798, "___pskb_trim" },
	{ 0xb8ffcbb, "skb_pull" },
	{ 0x99bb8806, "memmove" },
	{ 0x71e3977d, "netdev_rx_handler_unregister" },
	{ 0xc47215c4, "netdev_upper_dev_unlink" },
	{ 0x57c69a8a, "unregister_netdevice_queue" },
	{ 0x9d669763, "memcpy" },
	{ 0xa8cd6c47, "nla_put_64bit" },
	{ 0xa5c2e213, "nla_put" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xd256e620, "kmem_cache_alloc_trace" },
	{ 0xa307fb1a, "kmalloc_caches" },
	{ 0x9e1225f2, "crypto_aead_setauthsize" },
	{ 0x1dabb2b4, "crypto_aead_setkey" },
	{ 0x66ce8d14, "crypto_alloc_aead" },
	{ 0xab72e3b8, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x622ad57d, "__dev_get_by_index" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xc5850110, "printk" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A3887A20251A9F5C91E896D");

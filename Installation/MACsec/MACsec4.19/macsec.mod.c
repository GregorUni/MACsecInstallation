#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
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
__used
__attribute__((section("__versions"))) = {
	{ 0x1b6b5489, "module_layout" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x719f2d6d, "genl_unregister_family" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa6af8090, "rtnl_link_unregister" },
	{ 0xe3ce6563, "genl_register_family" },
	{ 0x7fc10ce8, "rtnl_link_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x335ae0e3, "gro_cells_receive" },
	{ 0xb743c23b, "netif_rx" },
	{ 0x36ca9e38, "__pskb_pull_tail" },
	{ 0x4c74c959, "skb_clone" },
	{ 0x775ac5b0, "___pskb_trim" },
	{ 0x6007a305, "skb_pull" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x4dbfba95, "dev_set_mtu" },
	{ 0xf0d99ace, "netif_stacked_transfer_operstate" },
	{ 0x5a3a24af, "gro_cells_init" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xd19f6cc8, "netif_carrier_on" },
	{ 0x1a94952b, "dev_uc_unsync" },
	{ 0xf7aed951, "dev_mc_unsync" },
	{ 0x72a40275, "netif_carrier_off" },
	{ 0x4b5331ca, "skb_split" },
	{ 0xf3d0f9a5, "__netdev_alloc_skb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf273e01a, "dev_queue_xmit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x160925b9, "dev_set_promiscuity" },
	{ 0x4812482a, "dev_set_allmulti" },
	{ 0xa8f5b193, "dev_uc_sync" },
	{ 0x6f5bf0c5, "dev_mc_sync" },
	{ 0xd209d61e, "dev_uc_del" },
	{ 0x486df2b8, "dev_uc_add" },
	{ 0xb787e49a, "ether_setup" },
	{ 0xfee7c529, "netdev_rx_handler_register" },
	{ 0xe16506bf, "netdev_upper_dev_link" },
	{ 0xd08a6db2, "dev_get_nest_level" },
	{ 0xd76625a, "register_netdevice" },
	{ 0x81ea9200, "eth_type_trans" },
	{ 0x7a4497db, "kzfree" },
	{ 0xaa68f46d, "skb_to_sgvec" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x8ed538af, "skb_cow_data" },
	{ 0xed2cf522, "skb_put" },
	{ 0x5f754e5a, "memset" },
	{ 0x99bb8806, "memmove" },
	{ 0x6e313b41, "skb_push" },
	{ 0x5d1c0fcc, "skb_copy" },
	{ 0x96eaee77, "kfree_skb" },
	{ 0xd22eb0a9, "consume_skb" },
	{ 0x2dff47b9, "skb_copy_expand" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0xb5ad0439, "netdev_rx_handler_unregister" },
	{ 0x7e77bc0, "netdev_upper_dev_unlink" },
	{ 0x4ca27ab3, "unregister_netdevice_queue" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x7f9c5aff, "skb_trim" },
	{ 0x389a3974, "genlmsg_put" },
	{ 0x9d669763, "memcpy" },
	{ 0x68183b3b, "nla_put" },
	{ 0xee76d1f5, "nla_put_64bit" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xf258e477, "kmem_cache_alloc_trace" },
	{ 0xf8a2d691, "kmalloc_caches" },
	{ 0x5247579b, "crypto_aead_setauthsize" },
	{ 0x4a543587, "crypto_aead_setkey" },
	{ 0xd6c114d6, "crypto_alloc_aead" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x42739051, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x136e1f8d, "__dev_get_by_index" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8C89EA26B9F3AF9DD72846F");

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
	{ 0xd919b17f, "module_layout" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x3745c9d4, "genl_unregister_family" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x38a01d75, "rtnl_link_unregister" },
	{ 0x55e0694d, "genl_register_family" },
	{ 0xa817e938, "rtnl_link_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x218ea05c, "gro_cells_receive" },
	{ 0x11e63fa2, "netif_rx" },
	{ 0x872afe72, "__pskb_pull_tail" },
	{ 0xcfdf343c, "skb_clone" },
	{ 0x1ebc5115, "___pskb_trim" },
	{ 0xf06e07c0, "skb_pull" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xb4ec2737, "dev_set_mtu" },
	{ 0x1ee2f094, "netif_stacked_transfer_operstate" },
	{ 0x636675a5, "gro_cells_init" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xb4d2a7c0, "netif_carrier_on" },
	{ 0x9f37a9c3, "dev_uc_unsync" },
	{ 0x6040f0b8, "dev_mc_unsync" },
	{ 0xcd20b320, "netif_carrier_off" },
	{ 0x9f58735d, "skb_split" },
	{ 0xd82a2bcf, "__netdev_alloc_skb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb87c76fd, "dev_queue_xmit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xff155473, "dev_set_promiscuity" },
	{ 0xcc02a835, "dev_set_allmulti" },
	{ 0x2c196be2, "dev_uc_sync" },
	{ 0x18db10aa, "dev_mc_sync" },
	{ 0xbe677e4d, "dev_uc_del" },
	{ 0x2818918b, "dev_uc_add" },
	{ 0x55f8c8ab, "ether_setup" },
	{ 0x7a9c6234, "netdev_rx_handler_register" },
	{ 0xc633b0b1, "netdev_upper_dev_link" },
	{ 0x97e62b98, "dev_get_nest_level" },
	{ 0xa4ebe7c, "register_netdevice" },
	{ 0xd5240f7a, "eth_type_trans" },
	{ 0x7a4497db, "kzfree" },
	{ 0x7f802340, "skb_to_sgvec" },
	{ 0x50b03c47, "sg_init_table" },
	{ 0x4bf76007, "skb_cow_data" },
	{ 0xa82d2d9f, "skb_put" },
	{ 0x5f754e5a, "memset" },
	{ 0x99bb8806, "memmove" },
	{ 0xc6827d28, "skb_push" },
	{ 0xbd414082, "skb_copy" },
	{ 0x5d3f8ab0, "kfree_skb" },
	{ 0x70f39d52, "consume_skb" },
	{ 0x856d56e7, "skb_copy_expand" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0xc8c32b61, "netdev_rx_handler_unregister" },
	{ 0x5e1e42dd, "netdev_upper_dev_unlink" },
	{ 0x8e575571, "unregister_netdevice_queue" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x544022e5, "skb_trim" },
	{ 0xb1fc7490, "genlmsg_put" },
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
	{ 0x1441b69, "kmem_cache_alloc_trace" },
	{ 0x79788cfd, "kmalloc_caches" },
	{ 0xfafc9b68, "crypto_aead_setauthsize" },
	{ 0xcea1b78b, "crypto_aead_setkey" },
	{ 0xf1fc3e4e, "crypto_alloc_aead" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x4d8dd3f5, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3f400d1b, "__dev_get_by_index" },
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


MODULE_INFO(srcversion, "BFA31E8486639037D3999AB");

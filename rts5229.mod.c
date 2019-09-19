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
	{ 0xcf800f5c, "module_layout" },
	{ 0x91d75ee2, "dma_direct_unmap_sg" },
	{ 0xe10b99d2, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7ba8fce7, "scsi_host_alloc" },
	{ 0xd8937563, "param_ops_int" },
	{ 0x7c4fbc53, "pci_read_config_byte" },
	{ 0x2c7c4069, "scsi_add_host_with_dma" },
	{ 0x679bb4fb, "pci_disable_device" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe85cb419, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x647597e, "pci_release_regions" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xaaeacfd8, "pci_enable_wake" },
	{ 0x999e8297, "vfree" },
	{ 0xefd1820c, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x9f3e735d, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x7d4129e7, "pci_set_master" },
	{ 0xfb578fc5, "memset" },
	{ 0xf10de535, "ioread8" },
	{ 0x4ae026dc, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xedcda2e2, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xe11302b, "pci_read_config_word" },
	{ 0xf160facc, "dma_direct_map_page" },
	{ 0x962bbe96, "scsi_scan_host" },
	{ 0xbd9058e7, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5b9eb0b9, "pci_get_domain_bus_and_slot" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x46ecf69d, "scsi_host_put" },
	{ 0x45e8c41b, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe94f6b97, "dma_direct_unmap_page" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7f7e72a1, "pci_intx" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x1958d868, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2254e62b, "pci_unregister_driver" },
	{ 0xd9c6c3c1, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa1f89a5, "param_ops_byte" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x660b910d, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x2216d273, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf4a2023c, "pci_request_regions" },
	{ 0xc168e5d7, "pci_disable_msi" },
	{ 0xcdb8bf99, "blk_queue_dma_alignment" },
	{ 0xedc03953, "iounmap" },
	{ 0x528cdce1, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x57460680, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0x3371be2f, "pci_choose_state" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x6a939613, "pci_enable_device" },
	{ 0xcaae901e, "param_ops_uint" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x9b516ec2, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2ea1530e, "pci_save_state" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000010ECd00005229sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005227sv*sd*bcFFsc*i*");

MODULE_INFO(srcversion, "9F89C16FA08B704CE5C2B01");

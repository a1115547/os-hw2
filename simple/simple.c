#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("A1115547");
MODULE_DESCRIPTION("A simple Linux driver.");
MODULE_VERSION("0.1");

static int __init simple_init(void) {
    printk(KERN_INFO "Loading Kernel Module A1115547\n");
    return 0;
}

static void __exit simple_exit(void) {
    printk(KERN_INFO "Removing Kernel Module A1115547\n");
}

module_init(simple_init);
module_exit(simple_exit);
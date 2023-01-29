#include <linux/module.h>
#include <linux/kernel.h>

static int __init hello_init(void) {
    printk(KERN_INFO "Hello World\n");
    return 0;
}

static void __exit hello_exit(void) {
    printk(KERN_INFO "Goodbye!\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL"); // By setting the license to GPL, you can keep the warning from being printed.
MODULE_AUTHOR("Sungdo Kim");
MODULE_DESCRIPTION("a kernel module for Linux that prints “Hello World” when you insert the module into the kernel, and prints “Goodbye!” when you remove it.");
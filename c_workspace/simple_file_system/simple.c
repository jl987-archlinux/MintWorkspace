#include <linux/init.h>
#include <linux/module.h>

static int simplefs_init(void)
{
    printk(KERN_ALERT "Hello World\n");
    return 0;
}

static void simplefs_exit(void)
{
    printk(KERN_ALERT "Goodbye World\n");
}

module_init(simplefs_init);
module_exit(simplefs_exit);
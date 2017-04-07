#include <linux/sched.h>
#include <linux/module.h>
#include <linux/init.h>

static struct task_struct nope;

static int __init kill_init(void)
{
  init_task = nope;
  return 0;
}
module_init(kill_init);

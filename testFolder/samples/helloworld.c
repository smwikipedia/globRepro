#include <sys/printk.h>

#define CONFIG_BOARD "reel_board"

void main(void)
{
	printk("Hello World! %s\n", CONFIG_BOARD);
}
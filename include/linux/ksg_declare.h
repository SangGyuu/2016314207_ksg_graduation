#ifndef _LINUX_KSG_DECLARE_H_
#define _LINUX_KSG_DECLARE_H_

/* Declare the extern int variables for sysctl */

extern int zram_to_nbd;
extern int zram_to_nbd_handler (struct ctl_table *table, int write, 
								void __user *buffer, size_t *length, loff_t *ppos);

extern int one_page_swapin;
extern int one_page_swapin_handler (struct ctl_table *table, int write, 
									void __user *buffer, size_t *length, loff_t *ppos);

extern int foreground_uid;

extern int zram_to_nbd_swapout(struct task_struct *task);
extern int background_swapout(void);

extern int bulk_prefetcher;
extern int bulk_prefetcher_handler(struct ctl_table *table, int write,
		void __user *buffer, size_t *length, loff_t *ppos);

#endif

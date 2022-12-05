https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/**
 * @file
 *
 * Contains shell history data structures and retrieval functions.
 */

#ifndef _HISTORY_H_
#define _HISTORY_H_

void hist_init(unsigned int);
void hist_destroy(void);
void hist_add(const char *);
void hist_print(void);
const char *hist_search_prefix(char *);
const char *hist_search_cnum(int);
unsigned int hist_last_cnum(void);

#endif

#ifndef OPTIONS_H__
#define OPTIONS_H__

#include <curses.h>

struct boot_data;

void options_menu_run(WINDOW *menu_window, struct boot_data *boot);

#endif // OPTIONS_H__

/* vim: set ts=8 sts=8 sw=8 noet : */

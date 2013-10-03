/*
 * (C) Copyright 2013
 * Andreas Bießmann <andreas.devel@googlemail.com>
 *
 * This file consolidates all the different hang() functions implemented in
 * u-boot.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include "stdio.h"

/**
 * hang - stop processing by staying in an endless loop
 *
 * The purpose of this function is to stop further execution of code cause
 * something went completely wrong.  To catch this and give some feedback to
 * the user one needs to catch the bootstage_error (see show_boot_progress())
 * in the board code.
 */
void hang(void)
{
	put_str("### ERROR ### Please RESET the board ###\n");

	for (;;)
		;
}

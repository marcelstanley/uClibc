/*
 * Copyright (C) 2000-2006 Erik Andersen <andersen@uclibc.org>
 *
 * Licensed under the LGPL v2.1, see the file COPYING.LIB in this tarball.
 */

#include <dirent.h>
#include <string.h>
#include "dirstream.h"

int alphasort(const struct dirent **a, const struct dirent **b)
{
	return strcmp((*a)->d_name, (*b)->d_name);
}
#if defined __UCLIBC_HAS_LFS__ && __WORDSIZE == 64
strong_alias_untyped(alphasort,alphasort64)
#endif

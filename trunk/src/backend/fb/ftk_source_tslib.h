/*
 * File: ftk_source_tslib.h    
 * Author:  Li XianJing <xianjimli@hotmail.com>
 * Brief:   source to handle tslib events.
 *
 * Copyright (c) 2009  Li XianJing <xianjimli@hotmail.com>
 *
 * Licensed under the Academic Free License version 2.1
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/*
 * History:
 * ================================================================
 * 2009-12-02 Li XianJing <xianjimli@hotmail.com> created
 *
 */
#ifndef FTK_SOURCE_TSLIB_H
#define FTK_SOURCE_TSLIB_H
#include "ftk_event.h"
#include "ftk_source.h"

/*
 * make sure the following evn variables are set properly.
 *	TSLIB_CALIBFILE
 *	TSLIB_PLUGINDIR
 *	TSLIB_CONFFILE
 * 
 * and ts_test works.
 */

#define FTK_TSLIB_FILE "/dev/input/event0"
FtkSource* ftk_source_tslib_create(const char* filename, FtkOnEvent on_event, void* ctx);

#endif/*FTK_SOURCE_TSLIB_H*/


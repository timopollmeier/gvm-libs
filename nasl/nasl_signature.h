/* OpenVAS-LibNASL
 *
 * Authors:
 * Bernhard Herzog <bernhard.herzog@intevation.de>
 *
 * Copyright:
 * Copyright (C) 2009 Greenbone Networks GmbH
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2,
 * or, at your option, any later version as published by the Free
 * Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef NASL_SIGNATURE_H
#define NASL_SIGNATURE_H

#include <glib.h>
#include "../base/gpgme_util.h"

int nasl_verify_signature (const char *filename);
char *nasl_extract_signature_fprs (const char *filename);

#endif

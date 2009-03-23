/**
 * @file cpematch.h
 * \brief Interface to Common Product Enumeration (CPE) matching facilities.
 *
 * See more details at http://nvd.nist.gov/cpe.cfm
 */

/*
 * Copyright 2008 Red Hat Inc., Durham, North Carolina.
 * All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software 
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors:
 *      Lukas Kuklinek <lkuklinek@redhat.com>
 */

#ifndef _CPEMATCH_H_
#define _CPEMATCH_H_

#include <stdlib.h>

#include "cpeuri.h"
#include "cpedict.h"
#include "cpelang.h"

/**
 * Verify wether given CPE is known according to specified dictionary
 * @param cpe CPE to verify
 * @param dict used CPE dictionary
 * @return true if dictionary contains given CPE
 */
bool cpe_name_match_dict(cpe_t * cpe, cpe_dict_t * dict);

/**
 * Verify if CPE given by string is known according to specified dictionary
 * @param cpe CPE to verify
 * @param dict used CPE dictionary
 * @return true if dictionary contains given CPE
 */
bool cpe_name_match_dict_str(const char *cpe, cpe_dict_t * dict);

#endif				/* _CPEMATCH_H_ */

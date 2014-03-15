/*  =========================================================================
    Copyright (c) 2013 Mariusz Ryndzionek - mryndzionek@gmail.com

    This is free software; you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License as published by the
    Free Software Foundation; either version 3 of the License, or (at your
    option) any later version.

    This software is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTA-
    BILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General
    Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program. If not, see http://www.gnu.org/licenses/.
    =========================================================================
 */

#ifndef __NORMALIZER_H_INCLUDED__
#define __NORMALIZER_H_INCLUDED__

#ifdef __cplusplus
extern "C" {
#endif

//  Opaque class structure
typedef struct _normalizer_t normalizer_t;

normalizer_t *
	normalizer_create ();

complex float
	normalizer_normalize(normalizer_t *self, uint16_t index);

void
	normalizer_destroy (normalizer_t **self_p);

#ifdef __cplusplus
}
#endif

#endif /* __NORMALIZER_H_INCLUDED__ */

/*
 * Copyright (C) 2014, 2018  Internet Systems Consortium, Inc. ("ISC")
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND ISC DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS.  IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
 * OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/*! \file */

#ifndef IRS_PLATFORM_H
#define IRS_PLATFORM_H 1

/*****
 ***** Platform-dependent defines.
 *****/

#ifndef IRS_PLATFORM_USEDECLSPEC
#define LIBIRS_EXTERNAL_DATA
#else
#ifdef LIBIRS_EXPORTS
#define LIBIRS_EXTERNAL_DATA __declspec(dllexport)
#else
#define LIBIRS_EXTERNAL_DATA __declspec(dllimport)
#endif
#endif

/*
 * Tell Emacs to use C mode on this file.
 * Local Variables:
 * mode: c
 * End:
 */

#endif /* IRS_PLATFORM_H */

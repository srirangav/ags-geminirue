//=============================================================================
//
// Adventure Game Studio (AGS)
//
// Copyright (C) 1999-2011 Chris Jones and 2011-20xx others
// The full list of copyright holders can be found in the Copyright.txt
// file, which is part of this source code distribution.
//
// The AGS source code is provided under the Artistic License 2.0.
// A copy of this license can be found in the file License.txt and at
// http://www.opensource.org/licenses/artistic-license-2.0.php
//
//=============================================================================

#ifndef __AC_COMMON_H
#define __AC_COMMON_H

#include "ac/common_defines.h"
#include "ac/game_version.h"

// These are the project-dependent functions, they are defined both in Engine.App and AGS.Native.
void quit(const char *);
void update_polled_stuff_if_runtime();
void set_our_eip(int eip);
int  get_our_eip();

// make these const to resolve Xcode warnings - Sriranga Veeraraghavan 10/12/2015
extern const char *croom_h_copyright;
extern const char *game_file_sig;

#endif // __AC_COMMON_H

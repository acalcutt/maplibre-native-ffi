/* GL/wgl.h — minimal shim for builds without an OpenGL SDK installation.
 *
 * The WGL core API (wglMakeCurrent, wglCreateContext, HGLRC, HDC, …) is
 * declared by <wingdi.h>, which <windows.h> already includes.  This file
 * only needs to pull in the WGL extension typedefs (PFNWGL*) that live in
 * the Khronos-generated wglext.h.
 *
 * SPDX-License-Identifier: MIT
 */
#pragma once

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN 1
#endif
#include <windows.h>

#include <GL/wglext.h>

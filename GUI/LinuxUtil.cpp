//////////////////////////////////////////////////////////////////////////////////////////
// File:            GUIUtil.h
//////////////////////////////////////////////////////////////////////////////////////////
// Description:     GUIUtil class
// Project:         GUI Library
// Author(s):       Jason Boettcher
//                  jackal@shplorb.com
//                  www.shplorb.com/~jackal

//////////////////////////////////////////////////////////////////////////////////////////
// Inclusions of header files

#include "GUI.h"
#include <X11/Xlib.h>
#include <X11/Xatom.h>
#include <X11/Xutil.h>
using namespace RTE;

//////////////////////////////////////////////////////////////////////////////////////////
// Method:          GetClipboardText
//////////////////////////////////////////////////////////////////////////////////////////
// Description:     Gets the text from the clipboard.

bool GUIUtil::GetClipboardText(std::string *Text) { return false; }

bool GUIUtil::SetClipboardText(std::string Text) { return false; }
/* Interface for GNU Objective-C binary stream object for use serializing
   Copyright (C) 1996 Free Software Foundation, Inc.
   
   Written by:  R. Andrew McCallum <mccallum@gnu.ai.mit.edu>
   Written: Jan 1996
   
   This file is part of the GNU Objective C Class Library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.
   
   You should have received a copy of the GNU Library General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
   */ 

#ifndef __BinaryCStream_h_OBJECTS_INCLUDE
#define __BinaryCStream_h_OBJECTS_INCLUDE

#include <gnustep/base/prefix.h>
#include <gnustep/base/Stream.h>
#include <gnustep/base/CStream.h>

@interface BinaryCStream : CStream

+ setDebugging: (BOOL)f;

@end

#endif /* __BinaryCStream_h_OBJECTS_INCLUDE */

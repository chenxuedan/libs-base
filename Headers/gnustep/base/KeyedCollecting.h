/* Protocol for Objective-C objects holding (keyElement,contentElement) pairs.
   Copyright (C) 1993, 1994, 1995, 1996 Free Software Foundation, Inc.

   Written by:  R. Andrew McCallum <mccallum@gnu.ai.mit.edu>
   Date: May 1993

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

/* The <KeyedCollecting> protocol inherits from the <Collecting> protocol.

   The <KeyedCollecting> protocol defines the interface to a
   collection of elements that are accessible by a key, where the key is
   some unique element.  Pairs of (key element, content element) may be
   added, removed and replaced.  The keys and contents may be tested,
   enumerated and copied.  
*/

#ifndef __KeyedCollecting_h_OBJECTS_INCLUDE
#define __KeyedCollecting_h_OBJECTS_INCLUDE

#include <gnustep/base/prefix.h>
#include <gnustep/base/Collecting.h>

@protocol ConstantKeyedCollecting <ConstantCollecting>

// INITIALIZING;
- initWithObjects: (id*)objects forKeys: (id*)keys count: (unsigned)c;

// GETTING ELEMENTS AND KEYS;
- objectAtKey: aKey;
- keyOfObject: aContentObject;

// TESTING;
- (BOOL) containsKey: aKey;

// ENUMERATIONS;
- (id <Enumerating>) keyEnumerator;
- withKeyObjectsInvoke: (id <Invoking>)anInvocation;
- withKeyObjectsInvoke: (id <Invoking>)anInvocation
    whileTrue: (BOOL *)flag;

// LOW-LEVEL ENUMERATING;
- nextObjectAndKey: (id*)keyPtr withEnumState: (void**)enumState;

// COPYING;
- shallowCopyValuesAs: (Class)aCollectingClass;
- shallowCopyKeysAs: (Class)aCollectingClass;
- copyValuesAs: (Class)aCollectingClass;
- copyKeysAs: (Class)aCollectingClass;

@end

@protocol KeyedCollecting <ConstantKeyedCollecting, Collecting>

// ADDING;
- (void) putObject: newContentObject atKey: aKey;

// REPLACING AND SWAPPING;
- (void) replaceObjectAtKey: aKey with: newContentObject;
- (void) swapObjectsAtKeys: key1 : key2;

// REMOVING;
- (void) removeObjectAtKey: aKey;

@end

#endif /* __KeyedCollecting_h_OBJECTS_INCLUDE */

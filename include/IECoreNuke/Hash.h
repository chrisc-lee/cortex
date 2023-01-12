//////////////////////////////////////////////////////////////////////////
//
//  Copyright (c) 2007, Image Engine Design Inc. All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are
//  met:
//
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//
//     * Neither the name of Image Engine Design nor the names of any
//       other contributors to this software may be used to endorse or
//       promote products derived from this software without specific prior
//       written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
//  IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
//  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
//  PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
//  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
//  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
//  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
//  PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
//  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
//  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
//  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
//////////////////////////////////////////////////////////////////////////

#ifndef IECORENUKE_HASH_H
#define IECORENUKE_HASH_H

#include "IECore/Export.h"

#include "DDImage/Hash.h"

IECORE_PUSH_DEFAULT_VISIBILITY
#include "OpenEXR/OpenEXRConfig.h"
#if OPENEXR_VERSION_MAJOR < 3
#include "OpenEXR/ImathBox.h"
#include "OpenEXR/ImathColor.h"
#include "OpenEXR/ImathMatrix.h"
#include "OpenEXR/ImathVec.h"
#else
#include "Imath/ImathBox.h"
#include "Imath/ImathColor.h"
#include "Imath/ImathMatrix.h"
#include "Imath/ImathVec.h"
#endif
IECORE_POP_DEFAULT_VISIBILITY

namespace IECoreNuke
{

/// Appends the contents of an Imath::Vec2 to a hash
template<class T>
void append( DD::Image::Hash &hash, const Imath::Vec2<T> &v );

/// Appends the contents of an Imath::Vec3 to a hash
template<class T>
void append( DD::Image::Hash &hash, const Imath::Vec3<T> &v );

/// Appends the contents of an Imath::Color4 to a hash
template<class T>
void append( DD::Image::Hash &hash, const Imath::Color4<T> &c );

/// Appends the contents of an Imath::Box to a hash
template<class T>
void append( DD::Image::Hash &hash, const Imath::Box<T> &b );

/// Appends the contents of an Imath::Matrix33 to a hash
template<class T>
void append( DD::Image::Hash &hash, const Imath::Matrix33<T> &m );

/// Appends the contents of an Imath::Matrix44 to a hash
template<class T>
void append( DD::Image::Hash &hash, const Imath::Matrix44<T> &m );

} // namespace IECoreNuke

#include "IECoreNuke/Hash.inl"

#endif // IECORENUKE_HASH_H

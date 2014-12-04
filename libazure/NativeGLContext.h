/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim: set ts=8 sts=2 et sw=2 tw=80: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef MOZILLA_GFX_NATIVEGLCONTEXT_H_
#define MOZILLA_GFX_NATIVEGLCONTEXT_H_

#include <GL/glx.h>

namespace mozilla {
namespace gfx {

class NativeGLContext {
public:
  NativeGLContext(const NativeGLContext* shareGroup = nullptr);
  ~NativeGLContext();

  bool IsCurrent() const;
  void MakeCurrent() const;

private:
  Display* mDisplay;
  Pixmap mPixmap;
  GLXPixmap mGlxPixmap;
  GLXContext mContext;
};

}
}

#endif /* MOZILLA_GFX_NATIVEGLCONTEXT_H_ */

// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "net/cert/test_root_certs.h"

namespace net {

bool TestRootCerts::AddImpl(X509Certificate* certificate) {
  return true;
}

void TestRootCerts::ClearImpl() {}

TestRootCerts::~TestRootCerts() {}

void TestRootCerts::Init() {}

}  // namespace net

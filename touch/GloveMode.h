/*
 * SPDX-FileCopyrightText: 2025 The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <aidl/vendor/bestrom/touch/BnGloveMode.h>

namespace aidl {
namespace vendor {
namespace bestrom {
namespace touch {

class GloveMode : public BnGloveMode {
  public:
    ndk::ScopedAStatus getEnabled(bool* _aidl_return) override;
    ndk::ScopedAStatus setEnabled(bool enabled) override;
};

}  // namespace touch
}  // namespace bestrom
}  // namespace vendor
}  // namespace aidl

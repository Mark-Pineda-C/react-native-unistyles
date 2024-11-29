#pragma once

#include "HybridUnistylesNavigationBarSpec.hpp"
#include "NativePlatform.h"
#include <optional>

using namespace margelo::nitro::unistyles;

struct HybridNavigationBar: public HybridUnistylesNavigationBarSpec {
    HybridNavigationBar(Unistyles::HybridNativePlatformSpecCxx nativePlatform): HybridObject(TAG), _nativePlatform{nativePlatform} {}

    void setHidden(bool isHidden) override;
    double getWidth() override;
    double getHeight() override;

private:
    Unistyles::HybridNativePlatformSpecCxx _nativePlatform;
};

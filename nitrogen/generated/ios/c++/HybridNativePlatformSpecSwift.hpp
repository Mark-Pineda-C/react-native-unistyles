///
/// HybridNativePlatformSpecSwift.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include "HybridNativePlatformSpec.hpp"

// Forward declaration of `HybridNativePlatformSpecCxx` to properly resolve imports.
namespace Unistyles { class HybridNativePlatformSpecCxx; }

// Forward declaration of `Insets` to properly resolve imports.
namespace margelo::nitro::unistyles { struct Insets; }
// Forward declaration of `ColorScheme` to properly resolve imports.
namespace margelo::nitro::unistyles { enum class ColorScheme; }
// Forward declaration of `Orientation` to properly resolve imports.
namespace margelo::nitro::unistyles { enum class Orientation; }
// Forward declaration of `Dimensions` to properly resolve imports.
namespace margelo::nitro::unistyles { struct Dimensions; }
// Forward declaration of `UnistylesNativeMiniRuntime` to properly resolve imports.
namespace margelo::nitro::unistyles { struct UnistylesNativeMiniRuntime; }
// Forward declaration of `UnistyleDependency` to properly resolve imports.
namespace margelo::nitro::unistyles { enum class UnistyleDependency; }

#include "Insets.hpp"
#include "ColorScheme.hpp"
#include "Orientation.hpp"
#include <string>
#include "Dimensions.hpp"
#include "UnistylesNativeMiniRuntime.hpp"
#include <functional>
#include <vector>
#include "UnistyleDependency.hpp"

#if __has_include(<NitroModules/HybridContext.hpp>)
#include <NitroModules/HybridContext.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

#include "Unistyles-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::unistyles {

  /**
   * The C++ part of HybridNativePlatformSpecCxx.swift.
   *
   * HybridNativePlatformSpecSwift (C++) accesses HybridNativePlatformSpecCxx (Swift), and might
   * contain some additional bridging code for C++ <> Swift interop.
   *
   * Since this obviously introduces an overhead, I hope at some point in
   * the future, HybridNativePlatformSpecCxx can directly inherit from the C++ class HybridNativePlatformSpec
   * to simplify the whole structure and memory management.
   */
  class HybridNativePlatformSpecSwift: public virtual HybridNativePlatformSpec {
  public:
    // Constructor from a Swift instance
    explicit HybridNativePlatformSpecSwift(const Unistyles::HybridNativePlatformSpecCxx& swiftPart):
      HybridObject(HybridNativePlatformSpec::TAG),
      _swiftPart(swiftPart) { }

  public:
    // Get the Swift part
    inline Unistyles::HybridNativePlatformSpecCxx getSwiftPart() noexcept { return _swiftPart; }

  public:
    // Get memory pressure
    inline size_t getExternalMemorySize() noexcept override {
      return _swiftPart.getMemorySize();
    }

  public:
    // Properties
    

  public:
    // Methods
    inline Insets getInsets() override {
      auto __result = _swiftPart.getInsets();
      return __result;
    }
    inline ColorScheme getColorScheme() override {
      auto __result = _swiftPart.getColorScheme();
      return static_cast<ColorScheme>(__result);
    }
    inline double getFontScale() override {
      auto __result = _swiftPart.getFontScale();
      return __result;
    }
    inline double getPixelRatio() override {
      auto __result = _swiftPart.getPixelRatio();
      return __result;
    }
    inline Orientation getOrientation() override {
      auto __result = _swiftPart.getOrientation();
      return static_cast<Orientation>(__result);
    }
    inline std::string getContentSizeCategory() override {
      auto __result = _swiftPart.getContentSizeCategory();
      return __result;
    }
    inline Dimensions getScreenDimensions() override {
      auto __result = _swiftPart.getScreenDimensions();
      return __result;
    }
    inline Dimensions getStatusBarDimensions() override {
      auto __result = _swiftPart.getStatusBarDimensions();
      return __result;
    }
    inline Dimensions getNavigationBarDimensions() override {
      auto __result = _swiftPart.getNavigationBarDimensions();
      return __result;
    }
    inline bool getPrefersRtlDirection() override {
      auto __result = _swiftPart.getPrefersRtlDirection();
      return __result;
    }
    inline void setRootViewBackgroundColor(double color) override {
      _swiftPart.setRootViewBackgroundColor(std::forward<decltype(color)>(color));
    }
    inline void setNavigationBarHidden(bool isHidden) override {
      _swiftPart.setNavigationBarHidden(std::forward<decltype(isHidden)>(isHidden));
    }
    inline void setStatusBarHidden(bool isHidden) override {
      _swiftPart.setStatusBarHidden(std::forward<decltype(isHidden)>(isHidden));
    }
    inline void setImmersiveMode(bool isEnabled) override {
      _swiftPart.setImmersiveMode(std::forward<decltype(isEnabled)>(isEnabled));
    }
    inline UnistylesNativeMiniRuntime getMiniRuntime() override {
      auto __result = _swiftPart.getMiniRuntime();
      return __result;
    }
    inline void registerPlatformListener(const std::function<void(const std::vector<UnistyleDependency>& /* dependencies */, const UnistylesNativeMiniRuntime& /* miniRuntime */)>& callback) override {
      _swiftPart.registerPlatformListener(callback);
    }
    inline void registerImeListener(const std::function<void(const UnistylesNativeMiniRuntime& /* miniRuntime */)>& callback) override {
      _swiftPart.registerImeListener(callback);
    }
    inline void unregisterPlatformListeners() override {
      _swiftPart.unregisterPlatformListeners();
    }

  private:
    Unistyles::HybridNativePlatformSpecCxx _swiftPart;
  };

} // namespace margelo::nitro::unistyles

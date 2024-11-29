///
/// HybridUnistylesRuntimeSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

// Forward declaration of `ColorScheme` to properly resolve imports.
namespace margelo::nitro::unistyles { enum class ColorScheme; }
// Forward declaration of `Dimensions` to properly resolve imports.
namespace margelo::nitro::unistyles { struct Dimensions; }
// Forward declaration of `Insets` to properly resolve imports.
namespace margelo::nitro::unistyles { struct Insets; }
// Forward declaration of `Orientation` to properly resolve imports.
namespace margelo::nitro::unistyles { enum class Orientation; }
// Forward declaration of `UnistylesCxxMiniRuntime` to properly resolve imports.
namespace margelo::nitro::unistyles { struct UnistylesCxxMiniRuntime; }

#include "ColorScheme.hpp"
#include "Dimensions.hpp"
#include <optional>
#include <string>
#include <unordered_map>
#include "Insets.hpp"
#include "Orientation.hpp"
#include "UnistylesCxxMiniRuntime.hpp"

namespace margelo::nitro::unistyles {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `UnistylesRuntime`
   * Inherit this class to create instances of `HybridUnistylesRuntimeSpec` in C++.
   * You must explicitly call `HybridObject`'s constructor yourself, because it is virtual.
   * @example
   * ```cpp
   * class HybridUnistylesRuntime: public HybridUnistylesRuntimeSpec {
   * public:
   *   HybridUnistylesRuntime(...): HybridObject(TAG) { ... }
   *   // ...
   * };
   * ```
   */
  class HybridUnistylesRuntimeSpec: public virtual HybridObject {
    public:
      // Constructor
      explicit HybridUnistylesRuntimeSpec(): HybridObject(TAG) { }

      // Destructor
      virtual ~HybridUnistylesRuntimeSpec() { }

    public:
      // Properties
      virtual ColorScheme getColorScheme() = 0;
      virtual bool getHasAdaptiveThemes() = 0;
      virtual Dimensions getScreen() = 0;
      virtual std::optional<std::string> getThemeName() = 0;
      virtual std::string getContentSizeCategory() = 0;
      virtual std::optional<std::string> getBreakpoint() = 0;
      virtual std::unordered_map<std::string, double> getBreakpoints() = 0;
      virtual Insets getInsets() = 0;
      virtual Orientation getOrientation() = 0;
      virtual double getPixelRatio() = 0;
      virtual double getFontScale() = 0;
      virtual bool getRtl() = 0;
      virtual UnistylesCxxMiniRuntime getMiniRuntime() = 0;

    public:
      // Methods
      virtual void setTheme(const std::string& themeName) = 0;
      virtual void setAdaptiveThemes(bool isEnabled) = 0;
      virtual void setImmersiveMode(bool isEnabled) = 0;
      virtual void setRootViewBackgroundColor(double color) = 0;

    protected:
      // Hybrid Setup
      void loadHybridMethods() override;

    protected:
      // Tag for logging
      static constexpr auto TAG = "UnistylesRuntime";
  };

} // namespace margelo::nitro::unistyles

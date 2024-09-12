///
/// HybridShadowRegistrySpec.hpp
/// Thu Sep 12 2024
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





namespace margelo::nitro::unistyles {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `ShadowRegistry`
   * Inherit this class to create instances of `HybridShadowRegistrySpec` in C++.
   * @example
   * ```cpp
   * class HybridShadowRegistry: public HybridShadowRegistrySpec {
   *   // ...
   * };
   * ```
   */
  class HybridShadowRegistrySpec: public virtual HybridObject {
    public:
      // Constructor
      explicit HybridShadowRegistrySpec(): HybridObject(TAG) { }

      // Destructor
      virtual ~HybridShadowRegistrySpec() { }

    public:
      // Properties
      

    public:
      // Methods
      

    protected:
      // Hybrid Setup
      void loadHybridMethods() override;

    protected:
      // Tag for logging
      static constexpr auto TAG = "ShadowRegistry";
  };

} // namespace margelo::nitro::unistyles

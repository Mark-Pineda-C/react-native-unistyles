///
/// Unistyles-Swift-Cxx-Bridge.hpp
/// Thu Sep 12 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

// Forward declarations of C++ defined types
// Forward declaration of `PlatformEvent` to properly resolve imports.
namespace margelo::nitro::unistyles { enum class PlatformEvent; }

// Include C++ defined types
#include "PlatformEvent.hpp"
#include <functional>
#include <memory>
#include <optional>
#include <string>

/**
 * Contains specialized versions of C++ templated types so they can be accessed from Swift,
 * as well as helper functions to interact with those C++ types from Swift.
 */
namespace margelo::nitro::unistyles::bridge::swift {

  /**
   * Specialized version of `std::optional<double>`.
   */
  using std__optional_double_ = std::optional<double>;
  inline std::optional<double> create_std__optional_double_(const double& value) {
    return std::optional<double>(value);
  }
  
  /**
   * Specialized version of `std::optional<std::string>`.
   */
  using std__optional_std__string_ = std::optional<std::string>;
  inline std::optional<std::string> create_std__optional_std__string_(const std::string& value) {
    return std::optional<std::string>(value);
  }
  
  /**
   * Specialized version of `std::function<void(PlatformEvent / * event * /)>`.
   */
  using Func_void_PlatformEvent = std::function<void(PlatformEvent /* event */)>;
  inline Func_void_PlatformEvent create_Func_void_PlatformEvent(void* closureHolder, void(*call)(void* /* closureHolder */, int), void(*destroy)(void*)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return [sharedClosureHolder, call](PlatformEvent event) -> void {
      call(sharedClosureHolder.get(), static_cast<int>(event));
    };
  }
  inline std::shared_ptr<Func_void_PlatformEvent> share_Func_void_PlatformEvent(const Func_void_PlatformEvent& value) {
    return std::make_shared<Func_void_PlatformEvent>(value);
  }

} // namespace margelo::nitro::unistyles::bridge::swift

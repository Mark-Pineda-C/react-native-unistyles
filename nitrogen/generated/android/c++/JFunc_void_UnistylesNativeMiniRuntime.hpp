///
/// JFunc_void_UnistylesNativeMiniRuntime.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include <functional>

#include <functional>
#include "UnistylesNativeMiniRuntime.hpp"
#include "JUnistylesNativeMiniRuntime.hpp"
#include "ColorScheme.hpp"
#include "JColorScheme.hpp"
#include "Dimensions.hpp"
#include "JDimensions.hpp"
#include <string>
#include "Insets.hpp"
#include "JInsets.hpp"

namespace margelo::nitro::unistyles {

  using namespace facebook;

  /**
   * C++ representation of the callback Func_void_UnistylesNativeMiniRuntime.
   * This is a Kotlin `(miniRuntime: UnistylesNativeMiniRuntime) -> Unit`, backed by a `std::function<...>`.
   */
  struct JFunc_void_UnistylesNativeMiniRuntime final: public jni::HybridClass<JFunc_void_UnistylesNativeMiniRuntime> {
  public:
    static jni::local_ref<JFunc_void_UnistylesNativeMiniRuntime::javaobject> fromCpp(const std::function<void(const UnistylesNativeMiniRuntime& /* miniRuntime */)>& func) {
      return JFunc_void_UnistylesNativeMiniRuntime::newObjectCxxArgs(func);
    }

  public:
    void call(jni::alias_ref<JUnistylesNativeMiniRuntime> miniRuntime) {
      return _func(miniRuntime->toCpp());
    }

  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/unistyles/Func_void_UnistylesNativeMiniRuntime;";
    static void registerNatives() {
      registerHybrid({makeNativeMethod("call", JFunc_void_UnistylesNativeMiniRuntime::call)});
    }

  private:
    explicit JFunc_void_UnistylesNativeMiniRuntime(const std::function<void(const UnistylesNativeMiniRuntime& /* miniRuntime */)>& func): _func(func) { }

  private:
    friend HybridBase;
    std::function<void(const UnistylesNativeMiniRuntime& /* miniRuntime */)> _func;
  };

} // namespace margelo::nitro::unistyles

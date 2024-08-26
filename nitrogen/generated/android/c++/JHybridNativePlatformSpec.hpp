///
/// HybridNativePlatformSpec.hpp
/// Mon Aug 26 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include "HybridNativePlatformSpec.hpp"
#include <fbjni/fbjni.h>

namespace margelo::nitro::unistyles {

  using namespace facebook;

  class JHybridNativePlatformSpec: public jni::HybridClass<JHybridNativePlatformSpec>, public HybridNativePlatformSpec {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/unistyles/HybridNativePlatformSpec;";
    static jni::local_ref<jhybriddata> initHybrid(jni::alias_ref<jhybridobject> jThis);
    static void registerNatives();

  private:
    // C++ constructor (called from Java via `initHybrid()`)
    explicit JHybridNativePlatformSpec(jni::alias_ref<jhybridobject> jThis) : _javaPart(jni::make_global(jThis)) {}

  public:
    size_t getExternalMemorySize() noexcept override;

  public:
    inline jni::global_ref<JHybridNativePlatformSpec::javaobject>& getJavaPart() noexcept { return _javaPart; }

  public:
    // Properties
    

  public:
    // Methods
    Insets getInsets() override;
    ColorScheme getColorScheme() override;
    double getFontScale() override;
    double getPixelRatio() override;
    std::string getContentSizeCategory() override;
    Dimensions getScreenDimensions() override;
    Dimensions getStatusBarDimensions() override;
    Dimensions getNavigationBarDimensions() override;
    bool getPrefersRtlDirection() override;
    void setRootViewBackgroundColor(const std::string& hex, std::optional<double> alpha) override;
    void setNavigationBarBackgroundColor(const std::optional<std::string>& hex, std::optional<double> alpha) override;
    void setNavigationBarHidden(bool isHidden) override;
    void setStatusBarBackgroundColor(const std::optional<std::string>& hex, std::optional<double> alpha) override;
    void setImmersiveMode(bool isEnabled) override;

  private:
    friend HybridBase;
    jni::global_ref<JHybridNativePlatformSpec::javaobject> _javaPart;
  };

} // namespace margelo::nitro::unistyles

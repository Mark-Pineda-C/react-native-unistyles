#pragma once

#include <ReactCommon/BindingsInstallerHolder.h>
#include <react/fabric/JFabricUIManager.h>
#include <react/jni/JRuntimeExecutor.h>
#include <react/renderer/scheduler/Scheduler.h>
#include <fbjni/fbjni.h>
#include <react/fabric/Binding.h>
#include "NativePlatform.h"

namespace margelo::nitro::unistyles {

using namespace facebook;
using namespace facebook::react;

struct UnistylesModule : public jni::HybridClass<UnistylesModule> {
    static constexpr auto kJavaDescriptor = "Lcom/unistyles/UnistylesModule;";

    explicit UnistylesModule(
        jni::alias_ref<jhybridobject> jThis,
        jni::alias_ref<react::JRuntimeExecutor::javaobject> runtimeExecutorHolder,
        jni::alias_ref<JFabricUIManager::javaobject> fabricUIManager,
        jni::alias_ref<JHybridNativePlatformSpec::javaobject> nativePlatform
    );

    static void registerNatives();
    static jni::local_ref<jhybriddata> initHybrid(
        jni::alias_ref<jhybridobject> jThis,
        jni::alias_ref<JRuntimeExecutor::javaobject> runtimeExecutorHolder,
        jni::alias_ref<JFabricUIManager::javaobject>,
        jni::alias_ref<JHybridNativePlatformSpec::javaobject> nativePlatform
    );

    static jni::local_ref<BindingsInstallerHolder::javaobject> getBindingsInstaller(jni::alias_ref<UnistylesModule::javaobject> jThis);

private:
    std::shared_ptr<UIManager> _uiManager;
    RuntimeExecutor _runtimeExecutor;
    Unistyles::HybridNativePlatformSpecCxx* _nativePlatform;
};

}

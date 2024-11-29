///
/// HybridNativePlatformSpecCxx.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * Helper class for converting instances of `HybridNativePlatformSpecCxx` from- and to unsafe pointers.
 * This is useful to pass Swift classes to C++, without having to strongly type the C++ function signature.
 * The actual Swift type can be included in the .cpp file, without having to forward-declare anything in .hpp.
 */
public final class HybridNativePlatformSpecCxxUnsafe {
  /**
   * Casts a `HybridNativePlatformSpecCxx` instance to a retained unsafe raw pointer.
   * This acquires one additional strong reference on the object!
   */
  public static func toUnsafe(_ instance: HybridNativePlatformSpecCxx) -> UnsafeMutableRawPointer {
    return Unmanaged.passRetained(instance).toOpaque()
  }

  /**
   * Casts an unsafe pointer to a `HybridNativePlatformSpecCxx`.
   * The pointer has to be a retained opaque `Unmanaged<HybridNativePlatformSpecCxx>`.
   * This removes one strong reference from the object!
   */
  public static func fromUnsafe(_ pointer: UnsafeMutableRawPointer) -> HybridNativePlatformSpecCxx {
    return Unmanaged<HybridNativePlatformSpecCxx>.fromOpaque(pointer).takeRetainedValue()
  }
}

/**
 * A class implementation that bridges HybridNativePlatformSpec over to C++.
 * In C++, we cannot use Swift protocols - so we need to wrap it in a class to make it strongly defined.
 *
 * Also, some Swift types need to be bridged with special handling:
 * - Enums need to be wrapped in Structs, otherwise they cannot be accessed bi-directionally (Swift bug: https://github.com/swiftlang/swift/issues/75330)
 * - Other HybridObjects need to be wrapped/unwrapped from the Swift TCxx wrapper
 * - Throwing methods need to be wrapped with a Result<T, Error> type, as exceptions cannot be propagated to C++
 */
public class HybridNativePlatformSpecCxx {
  /**
   * The Swift <> C++ bridge's namespace (`margelo::nitro::unistyles::bridge::swift`)
   * from `Unistyles-Swift-Cxx-Bridge.hpp`.
   * This contains specialized C++ templates, and C++ helper functions that can be accessed from Swift.
   */
  public typealias bridge = margelo.nitro.unistyles.bridge.swift

  /**
   * Holds an instance of the `HybridNativePlatformSpec` Swift protocol.
   */
  private var __implementation: any HybridNativePlatformSpec

  /**
   * Create a new `HybridNativePlatformSpecCxx` that wraps the given `HybridNativePlatformSpec`.
   * All properties and methods bridge to C++ types.
   */
  public init(_ implementation: some HybridNativePlatformSpec) {
    self.__implementation = implementation
    /* no base class */
  }

  /**
   * Get the actual `HybridNativePlatformSpec` instance this class wraps.
   */
  @inline(__always)
  public func getHybridNativePlatformSpec() -> any HybridNativePlatformSpec {
    return __implementation
  }

  /**
   * Contains a (weak) reference to the C++ HybridObject to cache it.
   */
  public var hybridContext: margelo.nitro.HybridContext {
    @inline(__always)
    get {
      return self.__implementation.hybridContext
    }
    @inline(__always)
    set {
      self.__implementation.hybridContext = newValue
    }
  }

  /**
   * Get the memory size of the Swift class (plus size of any other allocations)
   * so the JS VM can properly track it and garbage-collect the JS object if needed.
   */
  @inline(__always)
  public var memorySize: Int {
    return self.__implementation.memorySize
  }

  // Properties
  

  // Methods
  @inline(__always)
  public func getInsets() -> Insets {
    do {
      let __result = try self.__implementation.getInsets()
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getColorScheme() -> Int32 {
    do {
      let __result = try self.__implementation.getColorScheme()
      return __result.rawValue
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getFontScale() -> Double {
    do {
      let __result = try self.__implementation.getFontScale()
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getPixelRatio() -> Double {
    do {
      let __result = try self.__implementation.getPixelRatio()
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getOrientation() -> Int32 {
    do {
      let __result = try self.__implementation.getOrientation()
      return __result.rawValue
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getContentSizeCategory() -> std.string {
    do {
      let __result = try self.__implementation.getContentSizeCategory()
      return std.string(__result)
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getScreenDimensions() -> Dimensions {
    do {
      let __result = try self.__implementation.getScreenDimensions()
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getStatusBarDimensions() -> Dimensions {
    do {
      let __result = try self.__implementation.getStatusBarDimensions()
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getNavigationBarDimensions() -> Dimensions {
    do {
      let __result = try self.__implementation.getNavigationBarDimensions()
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getPrefersRtlDirection() -> Bool {
    do {
      let __result = try self.__implementation.getPrefersRtlDirection()
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func setRootViewBackgroundColor(color: Double) -> Void {
    do {
      try self.__implementation.setRootViewBackgroundColor(color: color)
      return 
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func setNavigationBarHidden(isHidden: Bool) -> Void {
    do {
      try self.__implementation.setNavigationBarHidden(isHidden: isHidden)
      return 
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func setStatusBarHidden(isHidden: Bool) -> Void {
    do {
      try self.__implementation.setStatusBarHidden(isHidden: isHidden)
      return 
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func setImmersiveMode(isEnabled: Bool) -> Void {
    do {
      try self.__implementation.setImmersiveMode(isEnabled: isEnabled)
      return 
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func getMiniRuntime() -> UnistylesNativeMiniRuntime {
    do {
      let __result = try self.__implementation.getMiniRuntime()
      return __result
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func registerPlatformListener(callback: bridge.Func_void_std__vector_UnistyleDependency__UnistylesNativeMiniRuntime) -> Void {
    do {
      try self.__implementation.registerPlatformListener(callback: { () -> (([UnistyleDependency], UnistylesNativeMiniRuntime) -> Void) in
        let __sharedClosure = bridge.share_Func_void_std__vector_UnistyleDependency__UnistylesNativeMiniRuntime(callback)
        return { (__dependencies: [UnistyleDependency], __miniRuntime: UnistylesNativeMiniRuntime) -> Void in
          __sharedClosure.pointee.call({ () -> bridge.std__vector_UnistyleDependency_ in
          var __vector = bridge.create_std__vector_UnistyleDependency_(__dependencies.count)
          for __item in __dependencies {
            __vector.push_back(__item)
          }
          return __vector
        }(), __miniRuntime)
        }
      }())
      return 
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func registerImeListener(callback: bridge.Func_void_UnistylesNativeMiniRuntime) -> Void {
    do {
      try self.__implementation.registerImeListener(callback: { () -> ((UnistylesNativeMiniRuntime) -> Void) in
        let __sharedClosure = bridge.share_Func_void_UnistylesNativeMiniRuntime(callback)
        return { (__miniRuntime: UnistylesNativeMiniRuntime) -> Void in
          __sharedClosure.pointee.call(__miniRuntime)
        }
      }())
      return 
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
  
  @inline(__always)
  public func unregisterPlatformListeners() -> Void {
    do {
      try self.__implementation.unregisterPlatformListeners()
      return 
    } catch {
      let __message = "\(error.localizedDescription)"
      fatalError("Swift errors can currently not be propagated to C++! See https://github.com/swiftlang/swift/issues/75290 (Error: \(__message))")
    }
  }
}

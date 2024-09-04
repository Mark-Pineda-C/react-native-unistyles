import type { ColorValue, OpaqueColorValue } from 'react-native'
import type { BreakpointsOrMediaQueries, ToDeepUnistyles } from './stylesheet'
import type { TransformStyles } from './core'
import type { SafeReturnType } from './common'

type ExtractTransformArray<T> = T extends object
    ? { [K in keyof T]: ExtractBreakpoints<T[K]> }
    : never

type ExtractBreakpoints<T> = T extends object
    ? keyof T extends BreakpointsOrMediaQueries
        ? T[keyof T]
        : T extends Array<ToDeepUnistyles<TransformStyles>>
            ? Array<ExtractTransformArray<T[number]>>
            : {
                [K in keyof T]: ExtractBreakpoints<T[K]>
            }
    : T

type ParseNestedObject<T> = T extends (...args: infer A) => infer R
    ? (...args: A) => ParseNestedObject<R>
    : T extends object
        ? T extends { variants: infer R, compoundVariants: infer C }
            ? ParseVariants<FlattenVariants<R>> & FlattenCompoundVariants<C> & ParseNestedObject<Omit<T, 'variants' | 'compoundVariants'>>
            : T extends { variants: infer R }
                ? ParseVariants<FlattenVariants<R>> & ParseNestedObject<Omit<T, 'variants'>>
                : T extends { compoundVariants: object }
                    ? ParseNestedObject<Omit<T, 'compoundVariants'>>
                    : {
                        [K in keyof T as K extends '_web' ? never : K]: T[K] extends object
                            ? T[K] extends OpaqueColorValue
                                ? ColorValue
                                : ExtractBreakpoints<T[K]>
                            : T[K]
                    }
        : T

type FlattenVariants<T> = T extends object
    ? {
        [K in keyof T]: T[K] extends object
            ? {
                [key in keyof T[K]]: T[K][key] extends object
                    ? ParseNestedObject<T[K][key]>
                    : never
            }
            : never
    }
    : never

type FlattenCompoundVariants<T> = T extends Array<infer _>
    ? FlattenCompoundVariants<T[number]>
    : T extends { styles: infer S }
        ? ParseNestedObject<S>
        : never

type ParseVariants<T> = T extends object
    ? T[keyof T] extends object
        ? UnionToIntersection<ParseVariants<T[keyof T]>>
        : T
    : T

type UnionToIntersection<U> =
    (U extends any ? (k: U) => void : never) extends ((k: infer I) => void) ? I : never

type ParseStyleKeys<T> = T extends object
    ? { [K in keyof T]: ParseNestedObject<T[K]> }
    : never

export type ReactNativeStyleSheet<T> = ParseStyleKeys<SafeReturnType<T>>

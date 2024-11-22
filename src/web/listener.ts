import { UnistyleDependency } from '../specs/NativePlatform'
import { UnistylesRuntime } from './runtime'

class UnistylesListenerBuilder {
    private isInitialized = false
    private listeners = Array.from({ length: Object.keys(UnistyleDependency).length / 2 }, () => new Set<VoidFunction>())
    private stylesheetListeners = Array.from({ length: Object.keys(UnistyleDependency).length / 2 }, () => new Set<VoidFunction>())

    emitChange = (dependency: UnistyleDependency) => {
        this.stylesheetListeners[dependency]?.forEach(listener => listener())
        this.listeners[dependency]?.forEach(listener => listener())
    }

    initListeners = () => {
        if (this.isInitialized) {
            return
        }

        this.isInitialized = true

        UnistylesRuntime.darkMedia?.addEventListener('change', event => {
            if (!event.matches) {
                return
            }

            this.emitChange(UnistyleDependency.ColorScheme)

            if (UnistylesRuntime.hasAdaptiveThemes) {
                this.emitChange(UnistyleDependency.Theme)
            }
        })
        UnistylesRuntime.lightMedia?.addEventListener('change', event => {
            if (!event.matches) {
                return
            }

            this.emitChange(UnistyleDependency.ColorScheme)

            if (UnistylesRuntime.hasAdaptiveThemes) {
                this.emitChange(UnistyleDependency.Theme)
            }
        })

        window.addEventListener('orientationchange', () => this.emitChange(UnistyleDependency.Orientation))
        window.addEventListener('resize', () => this.emitChange(UnistyleDependency.Dimensions))
    }

    addListeners = (dependencies: Array<UnistyleDependency>, listener: VoidFunction) => {
        dependencies.forEach(dependency => this.listeners[dependency]?.add(listener))

        return () => {
            dependencies.forEach(dependency => this.listeners[dependency]?.delete(listener))
        }
    }

    addStylesheetListeners = (dependencies: Array<UnistyleDependency>, listener: VoidFunction) => {
        dependencies.forEach(dependency => this.stylesheetListeners[dependency]?.add(listener))

        return () => {
            dependencies.forEach(dependency => this.stylesheetListeners[dependency]?.delete(listener))
        }
    }
}

export const UnistylesListener = new UnistylesListenerBuilder()

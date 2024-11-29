import Foundation

extension UIColor {
    // int is universal way of color representation
    // iOS API expects UIColor, so we need to translate it
    public static func fromInt(_ color: Int) -> UIColor {
        let red = CGFloat((color >> 16) & 0xFF) / 255.0
        let green = CGFloat((color >> 8) & 0xFF) / 255.0
        let blue = CGFloat(color & 0xFF) / 255.0

        return UIColor(red: red, green: green, blue: blue, alpha: 1.0)
    }
}

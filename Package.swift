// swift-tools-version:5.1
import PackageDescription

let package = Package(
    name: "GhostPlus",
    platforms: [.iOS(.v12)],
    products: [
        .library(name: "GhostPlus", targets: ["GhostPlus"])
    ],
    targets: [
        .target(
            name: "GhostPlus",
            path: "Sources"
        )
    ]
)
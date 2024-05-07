// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "GhostPlus",
    platforms: [
        .iOS(.v12),
        .macOS(.v10_14),
        .tvOS(.v12),
        .watchOS(.v5),
        .visionOS(.v1)
    ],
    products: [
        .library(name: "GhostPlus", targets: ["GhostPlus"])
    ],
    targets: [
        .target(
            name: "GhostPlus",
            path: "Sources",
            resources: [.process("PrivacyInfo.xcprivacy")]
        )
    ]
)

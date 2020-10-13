@version = "2.30"
Pod::Spec.new do |s|
  s.name             = 'GhostPlus'
  s.version          = @version
  s.summary          = 'Ghost Plus Framework'
  s.description      = 'Ghost Plus Framework'
  s.homepage         = 'http://www.ghostplus.com'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.authors          = { 'VANSTUDIO' => 'vanstudio@ghost-corps.com' }
  
  s.platform     = :ios, '9.0'
  s.requires_arc = true
  
  s.vendored_frameworks = ['Frameworks/GhostPlus.framework']
  
  #s.source           = { :http => 'http://developer.ghostplus.com/project/ghostplus_ios/GhostPlus-1.00.tar.gz', :flatten => true }
  s.source       = { :git => "https://github.com/vanstudio/GhostPlus-iOS.git", :tag => @version }
  
  s.source_files = []
  s.resources = []
  
  s.preserve_paths = []
  s.header_dir = 'GhostPlus'

  s.frameworks = ['GhostPlus', 'Foundation', 'UIKit', 'AssetsLibrary', 'AVFoundation', 'CoreMotion', 'CoreTelephony', 'MobileCoreServices', 'Security', 'SystemConfiguration', 'ImageIO', 'Photos']
  #s.libraries = ['stdc++', 'z']
  
  #s.xcconfig = { 'FRAMEWORK_SEARCH_PATHS' => '"$(PODS_ROOT)/TestGhostPlus"' }
  
  s.dependency 'AFNetworking', '~> 4.0'
end
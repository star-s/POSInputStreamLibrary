Pod::Spec.new do |s|
  s.name         = 'POSInputStreamLibrary'
  s.version      = '2.3.5'
  s.license      = 'MIT'
  s.summary      = 'NSInputStream implementation for ALAsset and other kinds of data source.'
  s.homepage     = 'https://github.com/pavelosipov/POSInputStreamLibrary'
  s.authors      = { 'Pavel Osipov' => 'posipov84@gmail.com' }
  s.source       = { :git => 'https://github.com/pavelosipov/POSInputStreamLibrary.git', :tag => s.version }
  s.platform     = :ios, '7.0'
  s.requires_arc = true
  s.source_files = 'Source/**/*.{h,m}'
  s.frameworks   = 'Foundation', 'AssetsLibrary', 'UIKit', 'ImageIO'
  s.weak_frameworks = 'Photos'
end

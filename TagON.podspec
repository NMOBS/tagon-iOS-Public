
Pod::Spec.new do |s|

  s.name         = "TagON"
  s.version      = "0.1.0"
  s.summary      = "TagOn IOS SDK is an all-in-one package advertisement management SDK"

  s.description  = "TagOn IOS SDK is an all-in-one package, advertisement management SDK that includes programmatic buying solutions and data integration. The product TagOn iOS SDK provides amazing opportunities to the publishers and some of them are targeting, interaction, various ad models and programmatic technologies in order to increase revenue"

  s.homepage     = "https://github.com/NMOBS/tagon-iOS-Public"
  s.license      = "MIT"
  s.author             = { "onderozcan" => "onder@nativetouch.co.uk" }
  s.social_media_url   = "http://twitter.com/onder"
  s.platform     = :ios, "10.0"
  s.source       = { :git => "https://github.com/NMOBS/tagon-iOS-Public.git", :tag => "#{s.version}" }
  #s.source_files  = "SimpleProjectTagON", "SimpleProjectTagON/**/*.{h,m}"
  s.exclude_files = "Classes/Exclude"
  s.ios.vendored_frameworks = "TagON.framework"
  s.resources = "tagonAssets.bundle"


end

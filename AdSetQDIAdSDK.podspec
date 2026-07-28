Pod::Spec.new do |s|
  s.name         = "AdSetQDIAdSDK"
  s.version      = "6.5.75.2"
  s.summary      = "AdSet广告对接聚合类"
  s.description  = <<-DESC
                    AdSetQDIAdSDK 是一个专业的广告聚合SDK，提供高效的广告展示和收益优化功能。
                    DESC
  s.homepage     = "https://github.com/OSETSDK/AdSetQDIAdSDK"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { 'shenshi' => 'yaohaofei@shenshiads.com' }
  
  # 设置最低支持版本
  s.ios.deployment_target = '13.0'
  
  # 源文件配置
  s.source       = {
    :git => 'https://github.com/OSETSDK/AdSetQDIAdSDK.git',
    :tag => s.version.to_s
  }
  
  # 主框架文件
  # 检查 AdSetQDAAdSDK.podspec 关键字段
  s.vendored_frameworks = 'AdSetQDIAdSDK.xcframework'
  
  # 系统框架依赖
  s.requires_arc = true
  
  s.frameworks = 'CoreHaptics', 'CoreML', 'MobileCoreServices', 'MediaPlayer', 'Accelerate'
  
  s.libraries = 'c++', 'z', 'resolv'
  
  # 资源文件
  s.resources = "AdSetQDIAdSDK.bundle"
    
  # Swift版本设置
  s.swift_version = '5.0'
    
end

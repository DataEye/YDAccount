Pod::Spec.new do |s|
  s.name             = "YDAccount"
  s.version          = "1.0.6"
  s.summary          = "优点账户SDK"
  s.description      = <<-DESC
优点账户系统，具备账号注册、登陆、修改密码、绑定手机、查看用户信息等账号系统基本功能，后续会持续更新并完善。
                       DESC

  s.homepage         = "https://www.dataeye.com"
  s.license          = 'MIT'
  s.author           = { "xqwang" => "wxq491216@163.com" }
  s.source           = { :git => "https://github.com/DataEye/YDAccount.git"}

  s.platform     = :ios, '8.0'
  s.requires_arc = true

  s.source_files = 'YDAccount/*.h'
  s.vendored_libraries = 'YDAccount/*.a'
  s.resource = "YDAccount/YDAccountResource.bundle"
 
  s.libraries  = "z"

  s.dependency 'Masonry'
  s.dependency 'AFNetworking', '~> 3.0'
  s.dependency 'BEMCheckBox'
  s.dependency 'WebViewJavascriptBridge', '~> 5.0' 
end

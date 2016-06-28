Pod::Spec.new do |s|
s.name             = 'DoImagePickerController'
s.version          = '1.6'
s.summary          = 'An image picker controller with single selection and multiple selection. Support to select lots photos with panning gesture'
s.homepage         = 'https://github.com/IdleHandsApps/DoImagePickerController/'
s.description      = <<-DESC
DoImagePickerController  is an image picker controller with single selection and multiple selection. Support to select lots photos with panning gesture
DESC
s.license          = 'MIT'
s.author           = { 'Fraser Scott-Morrison' => 'fraserscottmorrison@me.com' }
s.source           = { :git => 'https://github.com/IdleHandsApps/DoImagePickerController.git', :tag => s.version.to_s }
s.platform     = :ios, '7.0'
s.source_files  = "DoImagePicker", "ImagePicker/DoImagePicker/*.{h,m}"
s.public_header_files = 'ImagePicker/DoImagePicker/*.h'
s.resource_bundles = { 'DoImagePickerController' => ["Resources/Images/*.png","ImagePicker/DoImagePicker/*.xib"] }

s.ios.deployment_target = '7.0'
s.requires_arc = true
end
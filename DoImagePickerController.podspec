Pod::Spec.new do |s|
  s.name         = 'DoImagePickerController'
  s.version      = '0.0.1'
  s.summary      = 'An image picker controller with single selection and multiple selection. Support to select lots photos with panning gesture.'
  s.homepage     = 'https://github.com/donobono/DoImagePickerController'
  s.license      = 'MIT (example)'
  s.author             = { 'donobono' => 'email@address.com' }
  s.source       = { :git => 'https://github.com/ljlin/DoImagePickerController.git', :tag => '0.0.1' }
  s.source_files  = 'DoImagePicker', 'ImagePicker/DoImagePicker/*.{h,m}'
  s.public_header_files = 'ImagePicker/DoImagePicker/*.h'
  s.resources = 'Resources/*'
  s.requires_arc = true
end

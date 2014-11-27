Pod::Spec.new do |s|
    s.name = 'DoImagePicker'
    s.version = '0.0.1'
    s.source_files = 'ImagePicker/DoImagePicker/*.{h,m}'
    s.resources = {'ImagePicker/DoImagePicker/*.xib','Resources/Images/*.png'}
    s.requires_arc = true
end

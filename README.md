DoImagePickerController
=======================

An image picker controller with single selection and multiple selection. Support to select lots photos with panning gesture.

## Preview

### various column count : 2, 3 and 4
![DoImagePickerController Screenshot](https://raw.github.com/donobono/DoImagePickerController/master/p1.png)

### select multiple photos with pan gesture
![DoImagePickerController Screenshot](https://raw.github.com/donobono/DoImagePickerController/master/p2.png)

### select album
![DoImagePickerController Screenshot](https://raw.github.com/donobono/DoImagePickerController/master/p3.png)

### landscape mode
![DoImagePickerController Screenshot](https://raw.github.com/donobono/DoImagePickerController/master/p4.png)


## Requirements
- iOS 7.0 and greater
- ARC



## Examples

- AssetHelper : helper class for asset

**Code:**

```objc

// YES : old photo -> new photo
// NO  : new photo -> old photo
@property (readwrite)           BOOL                    bReverse;


// methods to get asset data
- (void)getGroupList:(void (^)(NSArray *))result;
- (void)getPhotoListOfGroup:(ALAssetsGroup *)alGroup result:(void (^)(NSArray *))result;
- (void)getPhotoListOfGroupByIndex:(NSInteger)nGroupIndex result:(void (^)(NSArray *))result;
- (void)getSavedPhotoList:(void (^)(NSArray *))result error:(void (^)(NSError *))error;


```


- DoImagePickerController

**Code:**

```objc

DoImagePickerController *cont = [[DoImagePickerController alloc] initWithNibName:@"DoImagePickerController" bundle:nil];
cont.delegate = self;
cont.nMaxCount = 4;     // larger than 1
cont.nColumnCount = 3;  // 2, 3, or 4

cont.nResultType = DO_PICKER_RESULT_UIIMAGE; // get UIImage object array : common case
// if you want to get lots photos, you had better use DO_PICKER_RESULT_ASSET.

[self presentViewController:cont animated:YES completion:nil];

```


## Credits

DoImagePickerController was created by Dono Cho.


## License

DoImagePickerController is available under the MIT license. See the LICENSE file for more info.

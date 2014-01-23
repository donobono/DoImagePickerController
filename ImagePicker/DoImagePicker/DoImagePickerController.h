//
//  DoImagePickerController.h
//  ImagePicker
//
//  Created by Seungbo Cho on 2014. 1. 23..
//  Copyright (c) 2014년 Seungbo Cho. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol DoImagePickerControllerDelegate

- (void)didCancelDoImagePickerController;
- (void)didSelectPhotosFromDoImagePickerController:(NSArray *)aSelected;

@end

#define DO_RGB(r, g, b)     [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1]
#define DO_RGBA(r, g, b, a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]

#define DO_MENU_BACK_COLOR          DO_RGBA(57, 185, 238, 0.98)
#define DO_SIDE_BUTTON_COLOR        DO_RGBA(57, 185, 238, 0.98)

#define DO_ALBUM_NAME_TEXT_COLOR    DO_RGB(57, 185, 238)
#define DO_ALBUM_COUNT_TEXT_COLOR   DO_RGB(247, 200, 142)

@interface DoImagePickerController : UIViewController

@property (assign, nonatomic) id            delegate;

@property (readwrite)   NSInteger           nMaxCount;

@property (weak, nonatomic) IBOutlet UICollectionView   *cvPhotoList;
@property (weak, nonatomic) IBOutlet UITableView        *tvAlbumList;

// bottom menu
@property (weak, nonatomic) IBOutlet UIView             *vBottomMenu;
@property (weak, nonatomic) IBOutlet UIButton           *btSelectAlbum;
@property (weak, nonatomic) IBOutlet UIButton           *btOK;
@property (weak, nonatomic) IBOutlet UIImageView        *ivLine1;
@property (weak, nonatomic) IBOutlet UIImageView        *ivLine2;

- (void)initBottomMenu;
- (IBAction)onSelectPhoto:(id)sender;
- (IBAction)onCancel:(id)sender;
- (IBAction)onSelectAlbum:(id)sender;

// side buttons
@property (weak, nonatomic) IBOutlet UIButton           *btUp;
@property (weak, nonatomic) IBOutlet UIButton           *btDown;

- (void)initSideButtons;
- (IBAction)onUp:(id)sender;
- (IBAction)onDown:(id)sender;

// photos
- (void)showPhotosInGroup:(NSInteger)nIndex;

// select photos
@property (strong, nonatomic)   NSMutableDictionary     *dSelect;

@end

//
//  DoImagePickerController.h
//  DoImagePickerController
//
//  Created by Donobono on 2014. 1. 23..
//

#import <UIKit/UIKit.h>

#define DO_PICKER_RESULT_UIIMAGE    0
#define DO_PICKER_RESULT_ASSET      1

#define DO_NO_LIMIT_SELECT          -1


// if you don't want to save selected album, remove this.
#define DO_SAVE_SELECTED_ALBUM

@interface DoImagePickerController : UIViewController

@property (assign, nonatomic) id            delegate;

@property (readwrite)   NSInteger           nMaxCount;      // -1 : no limit
@property (readwrite)   NSInteger           nColumnCount;   // 2, 3, or 4
@property (readwrite)   NSInteger           nResultType;    // default : DO_PICKER_RESULT_UIIMAGE

@property (weak, nonatomic) IBOutlet UICollectionView   *cvPhotoList;
@property (weak, nonatomic) IBOutlet UITableView        *tvAlbumList;
@property (weak, nonatomic) IBOutlet UIView             *vDimmed;


// init
- (void)initControls;
- (void)readAlbumList:(BOOL)bFirst;

// bottom menu
@property (weak, nonatomic) IBOutlet UIView             *vBottomMenu;
@property (weak, nonatomic) IBOutlet UIButton           *btSelectAlbum;
@property (weak, nonatomic) IBOutlet UIButton           *btOK;
@property (weak, nonatomic) IBOutlet UIImageView        *ivLine1;
@property (weak, nonatomic) IBOutlet UIImageView        *ivLine2;
@property (weak, nonatomic) IBOutlet UILabel            *lbSelectCount;
@property (weak, nonatomic) IBOutlet UIImageView        *ivShowMark;

- (void)initBottomMenu;
- (IBAction)onSelectPhoto:(id)sender;
- (IBAction)onCancel:(id)sender;
- (IBAction)onSelectAlbum:(id)sender;
- (void)hideBottomMenu;


// side buttons
@property (weak, nonatomic) IBOutlet UIButton           *btUp;
@property (weak, nonatomic) IBOutlet UIButton           *btDown;

- (IBAction)onUp:(id)sender;
- (IBAction)onDown:(id)sender;


// photos
@property (strong, nonatomic)   UIImageView             *ivPreview;

- (void)showPhotosInGroup:(NSInteger)nIndex;    // nIndex : index in album array
- (void)showPreview:(NSInteger)nIndex;          // nIndex : index in photo array
- (void)hidePreview;


// select photos
@property (strong, nonatomic)   NSMutableDictionary     *dSelected;
@property (strong, nonatomic)	NSIndexPath				*lastAccessed;

// static branding
+ (UIColor *)menuBackColor;
+ (void)setMenuBackColor:(UIColor *)color;
+ (UIColor *)sideButtonColor;
+ (void)setSideButtonColor:(UIColor *)color;
+ (UIColor *)albumNameSelectedTextColor;
+ (void)setAlbumNameSelectedTextColor:(UIColor *)color;
+ (UIColor *)albumNameUnselectedTextColor;
+ (void)setAlbumNameUnselectedTextColor:(UIColor *)color;
+ (UIColor *)albumCountTextColor;
+ (void)setAlbumCountTextColor:(UIColor *)color;
+ (UIColor *)bottomTextColor;
+ (void)setBottomTextColor:(UIColor *)color;

@end

@protocol DoImagePickerControllerDelegate

- (void)didCancelDoImagePickerController;
- (void)didSelectPhotosFromDoImagePickerController:(DoImagePickerController *)picker result:(NSArray *)aSelected;

@end

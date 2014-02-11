//
//  DoImagePickerController.h
//  DoImagePickerController
//
//  Created by Donobono on 2014. 1. 23..
//

#import <UIKit/UIKit.h>

#define DO_RGB(r, g, b)     [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1]
#define DO_RGBA(r, g, b, a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]

#define DO_MENU_BACK_COLOR          DO_RGBA(57, 185, 238, 0.98)
#define DO_SIDE_BUTTON_COLOR        DO_RGBA(57, 185, 238, 0.9)

#define DO_ALBUM_NAME_TEXT_COLOR    DO_RGB(57, 185, 238)
#define DO_ALBUM_COUNT_TEXT_COLOR   DO_RGB(247, 200, 142)
#define DO_BOTTOM_TEXT_COLOR        DO_RGB(255, 255, 255)

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

@end

@protocol DoImagePickerControllerDelegate

- (void)didCancelDoImagePickerController;
- (void)didSelectPhotosFromDoImagePickerController:(DoImagePickerController *)picker result:(NSArray *)aSelected;

@end

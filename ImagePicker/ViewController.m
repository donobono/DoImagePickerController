//
//  ViewController.m
//  ImagePicker
//
//  Created by Seungbo Cho on 2014. 1. 23..
//  Copyright (c) 2014년 Seungbo Cho. All rights reserved.
//

#import "ViewController.h"
#import "AssetHelper.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    _aIVs = @[_iv1, _iv2, _iv3, _iv4];
    _sgColumnCount.selectedSegmentIndex = 1;
    _sgMaxCount.selectedSegmentIndex    = 1;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)onShowImagePicker:(id)sender
{
	for (UIImageView *iv in _aIVs)
		iv.image = nil;
	
    DoImagePickerController *cont = [[DoImagePickerController alloc] initWithNibName:@"DoImagePickerController" bundle:nil];
    cont.delegate = self;
    cont.nResultType = DO_PICKER_RESULT_UIIMAGE;
    if (_sgMaxCount.selectedSegmentIndex == 0)
        cont.nMaxCount = 1;
    else if (_sgMaxCount.selectedSegmentIndex == 1)
        cont.nMaxCount = 4;
    else if (_sgMaxCount.selectedSegmentIndex == 2)
    {
        cont.nMaxCount = DO_NO_LIMIT_SELECT;
        cont.nResultType = DO_PICKER_RESULT_ASSET;  // if you want to get lots photos, you'd better use this mode for memory!!!
    }
    
    cont.nColumnCount = _sgColumnCount.selectedSegmentIndex + 2;
    
    [self presentViewController:cont animated:YES completion:nil];
}

#pragma mark - DoImagePickerControllerDelegate
- (void)didCancelDoImagePickerController
{
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)didSelectPhotosFromDoImagePickerController:(DoImagePickerController *)picker result:(NSArray *)aSelected
{
    [self dismissViewControllerAnimated:YES completion:nil];

    if (picker.nResultType == DO_PICKER_RESULT_UIIMAGE)
    {
        for (int i = 0; i < MIN(4, aSelected.count); i++)
        {
            UIImageView *iv = _aIVs[i];
            iv.image = aSelected[i];
        }
    }
    else if (picker.nResultType == DO_PICKER_RESULT_ASSET)
    {
        for (int i = 0; i < MIN(4, aSelected.count); i++)
        {
            UIImageView *iv = _aIVs[i];
            iv.image = [ASSETHELPER getImageFromAsset:aSelected[i] type:ASSET_PHOTO_SCREEN_SIZE];
        }
        
        [ASSETHELPER clearData];
    }
}

@end

//
//  ViewController.h
//  ImagePicker
//
//  Created by Seungbo Cho on 2014. 1. 23..
//  Copyright (c) 2014년 Seungbo Cho. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DoImagePickerController.h"

@interface ViewController : UIViewController <DoImagePickerControllerDelegate>

@property (weak, nonatomic) IBOutlet UIImageView    *iv1;
@property (weak, nonatomic) IBOutlet UIImageView    *iv2;
@property (weak, nonatomic) IBOutlet UIImageView    *iv3;
@property (weak, nonatomic) IBOutlet UIImageView    *iv4;
@property (strong, nonatomic)   NSArray             *aIVs;

@property (weak, nonatomic) IBOutlet UISegmentedControl     *sgColumnCount;
@property (weak, nonatomic) IBOutlet UISegmentedControl     *sgMaxCount;

- (IBAction)onShowImagePicker:(id)sender;

@end

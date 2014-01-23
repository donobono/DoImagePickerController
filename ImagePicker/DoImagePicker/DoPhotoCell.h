//
//  DoPhotoCell.h
//  ImagePicker
//
//  Created by Seungbo Cho on 2014. 1. 23..
//  Copyright (c) 2014년 Seungbo Cho. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DoPhotoCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UIImageView    *ivPhoto;
@property (weak, nonatomic) IBOutlet UIView         *vSelect;

- (void)setSelectMode:(BOOL)bSelect;

@end

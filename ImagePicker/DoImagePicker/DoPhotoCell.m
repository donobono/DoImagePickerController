//
//  DoPhotoCell.m
//  ImagePicker
//
//  Created by Seungbo Cho on 2014. 1. 23..
//  Copyright (c) 2014년 Seungbo Cho. All rights reserved.
//

#import "DoPhotoCell.h"

@implementation DoPhotoCell

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setSelectMode:(BOOL)bSelect
{
    if (bSelect)
        _ivPhoto.alpha = 0.2;
    else
        _ivPhoto.alpha = 1.0;
}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect
{
    // Drawing code
}
*/

@end

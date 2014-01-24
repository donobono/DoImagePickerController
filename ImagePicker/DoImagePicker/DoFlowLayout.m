//
//  DoFlowLayout.m
//  ImagePicker
//
//  Created by Seungbo Cho on 2014. 1. 24..
//  Copyright (c) 2014년 Seungbo Cho. All rights reserved.
//

#import "DoFlowLayout.h"

@implementation DoFlowLayout

- (id)initWithCoder:(NSCoder *)aDecoder
{
    self = [super initWithCoder:aDecoder];
    
    if (self == nil)
    {
        _animator = [[UIDynamicAnimator alloc] initWithCollectionViewLayout:self];
    }
    
    return self;
}

- (void)prepareLayout
{
    [super prepareLayout];
    
    
}

@end

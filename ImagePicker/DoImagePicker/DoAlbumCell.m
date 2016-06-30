//
//  DoAlbumCell.m
//  DoImagePickerController
//
//  Created by Donobono on 2014. 1. 23..
//

#import "DoAlbumCell.h"
#import "DoImagePickerController.h"

@implementation DoAlbumCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    if (selected)
    {
        _lbAlbumName.textColor  = [UIColor whiteColor];
        _lbCount.textColor      = [UIColor whiteColor];
        
        self.contentView.backgroundColor = DoImagePickerController.albumNameSelectedTextColor;
    }
    else
    {
        _lbAlbumName.textColor  = DoImagePickerController.albumNameUnselectedTextColor;
        _lbCount.textColor      = DoImagePickerController.albumCountTextColor;
        
        self.contentView.backgroundColor = [UIColor whiteColor];
    }
}

@end

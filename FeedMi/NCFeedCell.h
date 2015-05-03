//
//  NCFeedCell.h
//  FeedMi
//
//  Created by Nicolò Ciraci on 17/03/14.
//  Copyright (c) 2014 Nicolò Ciraci. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NCLabel.h"

@interface NCFeedCell : UITableViewCell

@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) NCLabel *descriptionLabel;
@property (nonatomic, strong) UILabel *dateLabel;

@end

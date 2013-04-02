//
//  MessageCell.h
//  Reddit
//
//  Created by Ross Boucher on 3/11/09.
//  Copyright 2009 280 North. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RedditMessage.h"

@interface MessageCell : UITableViewCell 
+ (float)tableView:(UITableView *)aTableView rowHeightForObject:(RedditMessage *)aMessage;

@property (nonatomic,retain) RedditMessage *message;
@property (nonatomic,retain) UILabel *fromLabel;
@property (nonatomic,retain) UILabel *subjectLabel;
@property (nonatomic,retain) UILabel *bodyLabel;
@property (nonatomic,retain) UILabel *dateLabel;

@end

//
//  BADockCell.h
//  酒吧助手
//
//  Created by 叶星龙 on 15/5/22.
//  Copyright (c) 2015年 北京局外者科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BADockCell : UITableViewCell

@property (nonatomic ,weak) NSString *categoryText;
@property (nonatomic ,weak) UILabel *category;
@property (nonatomic ,weak) UIView *viewShow1;
+ (instancetype)cellWithTableView:(UITableView *)tableView;

@end

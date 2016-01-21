//
//  CellForScrollView.h
//  UI25_网易首页
//
//  Created by dllo on 16/1/16.
//  Copyright © 2016年 lanou.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ModelOfData;

@interface CellForScrollView : UITableViewCell

+ (CGFloat)heightForCellScrollView;

- (void)passModel:(ModelOfData *)model;

@end

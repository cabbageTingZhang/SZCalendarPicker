//
//  SZCalendarPicker.h
//  SZCalendarPicker
//
//  Created by Stephen Zhuang on 14/12/1.
//  Copyright (c) 2014年 Stephen Zhuang. All rights reserved.
//
//  https://github.com/cabbageTingZhang   很不要脸的给自己的项目里加上我的github地址

#import <UIKit/UIKit.h>

@interface SZCalendarPicker : UIView<UICollectionViewDelegate , UICollectionViewDataSource>
@property (nonatomic , strong) NSDate *date;
@property (nonatomic , strong) NSDate *today;
@property (nonatomic, copy) void(^calendarBlock)(NSInteger day, NSInteger month, NSInteger year);

+ (instancetype)showOnView:(UIView *)view;
@end

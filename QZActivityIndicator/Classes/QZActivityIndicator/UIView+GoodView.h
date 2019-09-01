//
//  UIView+GoodView.h
//  QZActivityIndicator
//
//  Created by 臧乾坤 on 2017/12/9.
//  Copyright © 2017年 ZangChanQuinn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <objc/runtime.h>

@interface UIView (GoodView)

@property (assign, nonatomic) CGFloat left;
@property (assign, nonatomic) CGFloat top;
@property (assign, nonatomic) CGFloat right;
@property (assign, nonatomic) CGFloat bottom;
@property (assign, nonatomic) CGFloat width;
@property (assign, nonatomic) CGFloat height;
@property (assign, nonatomic) CGFloat centerX;
@property (assign, nonatomic) CGFloat centerY;

/**
 添加阴影
 
 @param offset  偏移量
 @param radius  圆角
 @param color   颜色
 @param opacity 透明度
 */
- (void)dropShadowWithOffset:(CGSize)offset radius:(CGFloat)radius color:(UIColor *)color opacity:(CGFloat)opacity;

@end

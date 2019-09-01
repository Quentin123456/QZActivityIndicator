//
//  QZPublicManager.h
//  QZActivityIndicator
//
//  Created by 臧乾坤 on 2017/12/9.
//  Copyright © 2017年 ZangChanQuinn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface QZPublicManager : NSObject

+ (instancetype)sharedPublicManager;
//动态计算高度
+ (CGSize)workOutSizeWithStr:(NSString *)str andFont:(NSInteger)fontSize value:(NSValue *)value;
///颜色转图片
+ (UIImage *)UIImageWithColor:(UIColor *)color;
//点击颜色
+ (UIColor *)colorFromHex:(NSString *)hexString alpha:(CGFloat)alpha;
///字符串转时间
+ (NSDate *)dateFromString:(NSString *)dateString DateForatter:(NSString *)dateforatter;
///时间转字符串
+ (NSString *)setDate:(NSDate *)date DateForatter:(NSString *)dateforatter;

@end

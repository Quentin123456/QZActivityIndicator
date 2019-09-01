//
//  QZActivityIndicator.h
//  QZActivityIndicator
//
//  Created by 臧乾坤 on 2017/12/9.
//  Copyright © 2017年 ZangChanQuinn. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, QZActivityIndicatorType) {
    
    QZActivityIndicatorLoadingType,//加载中
    QZActivityIndicatorSuccessfulAnimatedType,//加载成功动画
    QZActivityIndicatorErrorAnimatedType,//加载错误动画
    QZActivityIndicatorpromptTextType,//提示文字
    
};

@interface QZActivityIndicator : UIView

@property (strong, nonatomic) NSString *tipText;
@property (strong, nonatomic)  UILabel * showTextLabel;
@property (strong, nonatomic) UIView *toast;
@property (assign, nonatomic) QZActivityIndicatorType type;

- (void)show:(BOOL)animated view:(UIView *)view;

- (void)hide:(BOOL)animated view:(UIView *)view;

- (instancetype)initWithFrame:(CGRect)frame showText:(NSString *)showText HUDType:(QZActivityIndicatorType)type;

///加载类型
+ (instancetype)showHUDShowText:(NSString *)showText;

//加载成功提示
+ (instancetype)showSuccessfulAnimatedText:(NSString *)ShowText;

//错误提示
+ (instancetype)showErrorAnimatedText:(NSString *)ShowText;

//文字提示
+ (instancetype)showDpromptText:(NSString *)showText;

//隐藏
+ (NSUInteger)hideAllHUDAnimated:(BOOL)animated;

@end

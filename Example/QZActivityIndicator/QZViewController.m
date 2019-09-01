//
//  QZViewController.m
//  QZActivityIndicator
//
//  Created by Quentin123456 on 09/01/2019.
//  Copyright (c) 2019 Quentin123456. All rights reserved.
//

#import "QZViewController.h"
#import "QZActivityIndicator.h"

#define SCREEN [UIScreen mainScreen].bounds.size
@interface QZViewController () <UITableViewDelegate,UITableViewDataSource>{
    UITableView * _tableView;
}


@end

@implementation QZViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title=@"QZHUDDemo";
    _tableView = [[UITableView alloc] initWithFrame:CGRectMake(0, 0, SCREEN.width, SCREEN.height) style:UITableViewStyleGrouped];
    _tableView.delegate=self;
    _tableView.dataSource=self;
    [self.view addSubview:_tableView];
    
}
#pragma mark UITableViewDataSource
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return 4;
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    static NSString * identifier = @"identifier";
    UITableViewCell * cell = [tableView dequeueReusableCellWithIdentifier:identifier];
    if (!cell) {
        cell=[[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:identifier];
    }
    if (indexPath.row==0) {
        cell.textLabel.text=@"加载中...";
    } else if (indexPath.row==1) {
        cell.textLabel.text=@"加载中成功";
    } else if (indexPath.row==2) {
        cell.textLabel.text=@"加载中失败";
    } else if (indexPath.row==3) {
        cell.textLabel.text=@"自定义提示语";
    }
    return cell;
}
#pragma mark UITableViewDelegate
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    return 44;
}
- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section {
    return 0.01f;
}
- (CGFloat)tableView:(UITableView *)tableView heightForFooterInSection:(NSInteger)section{
    return 0.01f;
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell * cell = [_tableView.dataSource tableView:tableView cellForRowAtIndexPath:indexPath];
    if ([cell.textLabel.text isEqualToString:@"加载中..."]) {
        [QZActivityIndicator showHUDShowText:cell.textLabel.text];
        [self performSelector:@selector(DelayLoad) withObject:nil afterDelay:3];
    } else if ([cell.textLabel.text isEqualToString:@"加载中成功"]) {
        [QZActivityIndicator showSuccessfulAnimatedText:cell.textLabel.text];
    } else if ([cell.textLabel.text isEqualToString:@"加载中失败"]) {
        [QZActivityIndicator showErrorAnimatedText:cell.textLabel.text];
    } else {
        [QZActivityIndicator showDpromptText:cell.textLabel.text];
    }
}
- (void)DelayLoad {
    
    [QZActivityIndicator hideAllHUDAnimated:YES];
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end


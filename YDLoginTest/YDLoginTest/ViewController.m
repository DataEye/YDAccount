//
//  ViewController.m
//  YDLoginTest
//
//  Created by xqwang on 2016/11/12.
//  Copyright © 2016年 xqwang. All rights reserved.
//

#import "ViewController.h"
#import "YDAccount.h"
#import "YDActionType.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self.view setBackgroundColor:[UIColor grayColor]];
    //优点登陆SDK初始化
    [YDAccount initWithAppId:@"U072B3F7D45BB97B5156E954A7872A1B3"];
    //设置登陆框为对话框形式
    [YDAccount setWindowType:Dialog];
    //设置横坚屏切换时不旋转
    [YDAccount autoRatate:NO];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end

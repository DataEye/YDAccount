//
//  HuiDongLogin.h
//  HuiDongLogin
//
//  Created by xqwang on 2016/11/7.
//  Copyright © 2016年 xqwang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YDAccountModel.h"
#import "YDActionType.h"

@protocol YDAccountDelegate <NSObject>

@optional
-(void)accountLogin:(YDAccountModel*)model;
-(void)accountRegist:(YDAccountModel*)model;

@end

@interface YDAccount : NSObject

+(void)initWithAppId:(NSString*)appId;

+(void)setWindowType:(WindowType)type;

+(void)autoRatate:(BOOL)enable;

+(void)setDelegate:(id<YDAccountDelegate>)delegate;

@end

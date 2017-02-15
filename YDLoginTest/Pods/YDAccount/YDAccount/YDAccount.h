//
//  HuiDongLogin.h
//  HuiDongLogin
//
//  Created by xqwang on 2016/11/7.
//  Copyright © 2016年 xqwang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YDActionType.h"

@interface YDUserAccount : NSObject

//账号ID，账号惟一标识
@property(nonatomic, assign)long long accountId;
//用户名
@property(nonatomic, copy)NSString* accountName;
//用户绑定手机号
@property(nonatomic, copy)NSString* phoneNumber;

@end

@protocol YDAccountDelegate <NSObject>

@optional
-(void)accountLogin:(YDUserAccount*)model;
-(void)accountRegist:(YDUserAccount*)model;

@end

@interface YDAccount : NSObject

+(void)initWithAppId:(NSString*)appId openKey:(NSString*)openKey;

+(void)setWindowType:(WindowType)type;

+(void)autoRatate:(BOOL)enable;

+(void)setDelegate:(id<YDAccountDelegate>)delegate;

+(YDUserAccount*)currentAccount;

@end

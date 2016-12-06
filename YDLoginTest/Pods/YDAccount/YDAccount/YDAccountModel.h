//
//  YDAccount.h
//  HuiDongLogin
//
//  Created by xqwang on 2016/11/11.
//  Copyright © 2016年 xqwang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YDAccountModel : NSObject

//用户名
@property(nonatomic, strong)NSString* accountName;
//用户密码的md5值，用于验证密码正确性
@property(nonatomic, strong)NSString* password;
//用户绑定手机号
@property(nonatomic, strong)NSString* phoneNumber;

-(instancetype)initWithName:(NSString*)name;

-(void)saveAccount;

-(BOOL)updateWithAccount:(YDAccountModel*)account;

+(NSArray*)historyAccounts;

+(void)updateHistoryAccounts:(NSArray*)accounts;

+(BOOL)isValidCharacterForName:(NSString*)character;

+(BOOL)autoLogin;

+(void)saveAutoLogin:(BOOL)autoLogin;

@end

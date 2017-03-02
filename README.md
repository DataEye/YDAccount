# YDAccount
优点账户系统，能够提供用户注册、登陆、绑定手机、查看信息等功能。
## CocoaPods
```
platform :ios, '8.0'
target 'xxxx' do
  pod 'YDAccount'
end
```
## 初始化
```
+(void)initWithAppId:(NSString*)appId openKey:(NSString*)openkey;
```
## 登录配置
```
+(void)setWindowType:(WindowType)type; //设置登陆框类型，Activity表示全屏模式， Dialog表示对话框模式，默认为对话框
+(void)autoRotate:(BOOL)enable;  //对话框模式下是否横坚屏切换，默认为NO
+(void)setChannelId:(NSString*)channelId; //设置应用发布渠道ID
```

## 登陆框展示
```
+(void)showWindow; //用于展示登陆框
```

## 登出
```
+(void)logout; //当前登陆用户使出
```

## 用户操作回调
需要开发者实现YDAccountDelegate协议，示例代码如下

## 示例
```
-(void)someFunction
{
  [YDAccount initWithAppId:@"xxxx"];
  [YDAccount setWindowType:Dialog];
  [YDAccount autoRotate:NO];
  [YDAccount setDeletage:self];
  [YDAccount setChannelId:@"AppStore"];
}

-(void)reLogin
{
  [YDAccount logout];
  [YDAccount showWindow];
}

-(void)accountLogin:(YDAccountModel*)model
{
  ...
}
-(void)accountRegist:(YDAccountModel*)model
{
  ...
}
```

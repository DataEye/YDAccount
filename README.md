# YDAccount
优点账户系统，能够提供用户注册、登陆、绑定手机、查看信息等功能。
## CocoaPods
platform :ios, '8.0'
target 'xxxx' do
  pod 'YDAccount'
end
## 初始化
+(void)initWithAppId:(NSString*)appId;
```
[YDAccount initWithAppId:@"xxxx"];
```
## 登录配置
+(void)setWindowType:(WindowType)type; //设置登陆框类型，Activity表示全屏模式， Dialog表示对话框模式，默认为对话框
+(void)autoRotate:(BOOL)enable;  //对话框模式下是否横坚屏切换，默认为NO
```
[YDA]
```
## 用户操作回调
需要开发者实现YDAccountDelegate协议，示例代码如下
```
-(void)accountLogin:(YDAccountModel*)model
{
  ...
}
-(void)accountRegist:(YDAccountModel*)model
{
  ...
}

-(void)someFunction
{
   [YDAccount setDeletage:self];
}

```

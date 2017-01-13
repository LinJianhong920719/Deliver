
//  App重要参数及配置信息
//  ConfigHeader.h
//  Deliver
//
//  Created by edz on 17/1/12.
//  Copyright © 2017年 edz. All rights reserved.
//

#ifndef ConfigHeader_h
#define ConfigHeader_h


#define kEnvironment 0     // 环境 0.测试 1.正式
#define kVersion     @"1.0"// 接口版本


//============================  程序链接HOST(带版本号)  ============================//
#if                 kEnvironment
#define SERVICE_URL @"http://testDeliver.deliver.com/v" kVersion"/"
#else
#define SERVICE_URL @"http://testDeliver.deliver.com/v" kVersion"/"
#endif


#define SERVICE_TEL            @""                      // 客服电话

#define APPLE_ID               @""                      // 苹果商店id

// 微信是否安装
#define WXAppInstalled         [WXApi isWXAppInstalled]

//==============================   友盟   ==================================//

#define UMENG_APPKEY           @""              // 友盟 AppKey
#define UMENG_CHANNEL_ID       @"App Store"     // 友盟渠道

//==============================   微信   ==================================//
#define WXAppId                @""              // 微信 AppId
#define WXAppSecret            @""              // 微信Secret

//==============================   支付宝   ==================================//
#define AppScheme                @"ruiyuxinshangcheng"              // 用于支付宝支付成功后回跳到app


#endif /* ConfigHeader_h */

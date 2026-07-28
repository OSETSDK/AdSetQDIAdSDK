//
//  AdSetQDISplashAd.h
//  AdSetQDIAdSDK
//
//  Created by xuejingwei on 2025/5/27.
//  Copyright © 2025 AnyThink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AdSetQDIAdSDK/AdSetQDIBaseAd.h>
#import <AdSetQDIAdSDK/AdSetQDIAdFormatDefine.h>
#import <AdSetQDIAdSDK/AdSetQDIPubSplashDelegate.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDISplashAd : AdSetQDIBaseAd

@property (nonatomic, weak, nullable) id<AdSetQDIPubSplashLoadingDelegate> loadDelegate;
@property (nonatomic, weak, nullable) id<AdSetQDIPubSplashDelegate> showDelegate;
@property (nonatomic, weak, nullable) UIView *containerView;
@property (nonatomic, weak) UIWindow *window;
@property (nonatomic, assign) double fetchAdTimeout;

- (void)showAd;

@end

NS_ASSUME_NONNULL_END

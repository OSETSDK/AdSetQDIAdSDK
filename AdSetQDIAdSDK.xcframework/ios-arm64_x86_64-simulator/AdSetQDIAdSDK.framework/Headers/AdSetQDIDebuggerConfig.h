//
//  AdSetQDIDebuggerConfig.h
//  AdSetQDIAdSDK
//
//  Created by GUO PENG on 2022/8/2.
//  Copyright © 2022 AdSetQDIAdSDK. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AdSetQDIAdSDK/AdSetQDIDebuggerConfigDefine.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDIDebuggerConfig : NSObject

@property(nonatomic, assign,readonly) BOOL isDebugger;

@property(nonatomic, strong) NSString *deviceIdfaStr;
@property(nonatomic, assign) AdSetQDIAdNetWorkType netWorkType;

#pragma mark - ADX

@property(nonatomic, assign) AdSetQDIADXSplashAdType adx_splashAdType;

@property(nonatomic, assign) AdSetQDIADXInterstitialAdType adx_interstitialAdType;

@property(nonatomic, assign) AdSetQDIADXRewardVideoAdType adx_rewardVideoAdType;

@property(nonatomic, assign) AdSetQDIADXBannerAdType adx_bannerAdType;

@property(nonatomic, assign) AdSetQDIADXNativeAdType adx_nativeAdType;


#pragma mark - api
- (NSDictionary *)getCurrentNetWorkConfig;




@end

NS_ASSUME_NONNULL_END

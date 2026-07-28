//
//  AdSetQDIDebuggerConfigDefine.h
//  AdSetQDIAdSDK
//
//  Created by GUO PENG on 2022/8/10.
//  Copyright © 2022 AdSetQDIAdSDK. All rights reserved.
//


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
#pragma mark - NetWorkType
typedef NS_ENUM(NSUInteger, AdSetQDIAdNetWorkType) {
    AdSetQDIAdNetWorkAdxType = 66,
};

#pragma mark - ADX
typedef NS_ENUM(NSUInteger, AdSetQDIADXSplashAdType) {
    AdSetQDIADXSplashAdDefaultType = 0
};

typedef NS_ENUM(NSUInteger, AdSetQDIADXInterstitialAdType) {
    AdSetQDIADXInterstitialAdFullScreenType = 1,
    AdSetQDIADXInterstitialAdHalfScreenType = 2,
};

typedef NS_ENUM(NSUInteger, AdSetQDIADXRewardVideoAdType) {
    AdSetQDIADXRewardVideoAdDefaultType = 0,
};

typedef NS_ENUM(NSUInteger, AdSetQDIADXBannerAdType) {
    AdSetQDIADXBannerAdType_320_50 = 1,
    AdSetQDIADXBannerAdType_320_90 = 2,
    AdSetQDIADXBannerAdType_300_250 = 3,
    AdSetQDIADXBannerAdType_728_90 = 4,
};

typedef NS_ENUM(NSUInteger, AdSetQDIADXNativeAdType) {
    AdSetQDIADXNativeAdTypeExpressLeftPicRightText = 1,
    AdSetQDIADXNativeAdTypeExpressLeftTextRightPic = 2,
    AdSetQDIADXNativeAdTypeExpressTopPicBottomText = 3,
    AdSetQDIADXNativeAdTypeExpressTopTextBottomPic = 4,
    AdSetQDIADXNativeAdTypeExpressTextSuperposedLayer = 5,
    AdSetQDIADXNativeAdTypeSelfRender = 6,
};

NS_ASSUME_NONNULL_END

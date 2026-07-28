//
//  AdSetQDIAdFormatDefine.h
//  AdSetQDIAdSDK
//
//  Created by xuejingwei on 2025/11/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kAdSetQDISplashExtraCustomSkipButtonKey; // only supported UIButton

typedef NS_ENUM(NSInteger, AdSetQDIBaseAdInitType) {
    AdSetQDIBaseAdInitTypeMyOffer = 1,
    AdSetQDIBaseAdInitTypeADX,
    AdSetQDIBaseAdInitTypeDirect,
};

typedef NS_ENUM(NSInteger, AdSetQDIAdFormat) {
    AdSetQDIAdFormatNative = 0,
    AdSetQDIAdFormatRewardedVideo = 1,
    AdSetQDIAdFormatBanner = 2,
    AdSetQDIAdFormatInterstitial = 3,
    AdSetQDIAdFormatSplash = 4,
};

typedef NS_ENUM(NSInteger, AdSetQDINativeAdRenderType) {
    AdSetQDINativeAdRenderSelfRender = 1,
    AdSetQDINativeAdRenderExpress = 2,
};

NS_ASSUME_NONNULL_END

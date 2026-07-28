//
//  AdSetQDINativeAd.h
//  AdSetQDIAdSDK
//
//  Created by xuejingwei on 2025/5/27.
//  Copyright © 2025 AnyThink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AdSetQDIAdSDK/AdSetQDIBaseAd.h>
#import <AdSetQDIAdSDK/AdSetQDIPubNativeDelegate.h>
#import <AdSetQDIAdSDK/AdSetQDINativeAdOffer.h>
#import <AdSetQDIAdSDK/AdSetQDIAdRequest.h>
#import <AdSetQDIAdSDK/AdSetQDINativePrepareInfo.h>

NS_ASSUME_NONNULL_BEGIN

@class AdSetQDINativeLayoutParams, AdSetQDIAdRequest;

@interface AdSetQDINativeAd : AdSetQDIBaseAd

@property (nonatomic, weak, nullable) id<AdSetQDIPubNativeDelegate> showDelegate;
@property (nonatomic, strong, readonly, nullable) AdSetQDINativeAdOffer *nativeAdOffer;
@property (nonatomic, strong) AdSetQDIAdRequest *adRequest;

- (void)registerAdView:(nullable UIView *)container
            clickViews:(nullable NSArray<UIView *> *)clickableViews
           prepareInfo:(nullable AdSetQDINativePrepareInfo *)prepareInfo
           configParam:(nullable AdSetQDINativeLayoutParams *)configParam
             closeView:(nullable UIView *)closeView;

- (nullable UIView *)getMediaViewWithDelegate:(id<AdSetQDIPubNativeMediaViewDelegate>)mediaViewDelegate;
- (void)resumeVideo;
- (void)pauseVideo;
- (void)muteEnable:(BOOL)flag;
- (void)updateVoiceHidden:(BOOL)hidden;

- (nullable UIView *)agenerateShakeViewContainer;


@end

NS_ASSUME_NONNULL_END

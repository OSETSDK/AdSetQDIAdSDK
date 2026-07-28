//
//  AdSetQDIPubSplashDelegate.h
//  AdSetQDIAdSDK
//
//  Created by xuejingwei on 2025/6/17.
//  Copyright © 2025 AnyThink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AdSetQDIAdSDK/AdSetQDIPublicLoadingDelegate.h>
NS_ASSUME_NONNULL_BEGIN

#pragma mark - Splash
@class AdSetQDISplashAd;

@protocol AdSetQDIPubSplashDelegate <NSObject>
/// Splash ad displayed successfully
- (void)onAdShow:(AdSetQDISplashAd *)item;

/// Splash ad click
- (void)onAdClick:(AdSetQDISplashAd *)item extra:(nullable NSDictionary *)extra;

/// Splash ad closed
- (void)onAdClose:(AdSetQDISplashAd *)item extra:(nullable NSDictionary *)extra;

@optional
///  Whether the click jump of Splash ad is in the form of Deeplink
- (void)onDeeplinkCallback:(AdSetQDISplashAd *)item
                    result:(BOOL)success;
/// Splash ad show fail with error
- (void)onAdShowFail:(AdSetQDISplashAd *)item
               error:(NSError *)error;

@end

@protocol AdSetQDIPubSplashLoadingDelegate <AdSetQDIPublicLoadingDelegate>

/// Callback when the splash ad is loaded successfully
/// @param isTimeout whether timeout
- (void)onAdLoaded:(AdSetQDISplashAd *)item isTimeout:(BOOL)isTimeout;

/// Splash ad loading timeout callback
- (void)onAdLoadTimeout:(AdSetQDISplashAd *)item;

@end

NS_ASSUME_NONNULL_END

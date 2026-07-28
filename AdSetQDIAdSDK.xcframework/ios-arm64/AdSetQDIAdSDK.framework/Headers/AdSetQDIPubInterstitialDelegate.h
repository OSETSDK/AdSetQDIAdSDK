//
//  AdSetQDIPubInterstitialDelegate.h
//  AdSetQDIAdSDK
//
//  Created by xuejingwei on 2025/6/17.
//  Copyright © 2025 AnyThink. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class AdSetQDIInterstitialAd;

@protocol AdSetQDIPubInterstitialDelegate <NSObject>

#pragma mark - InterstitialAd
/// Interstitial ad displayed successfully
- (void)onAdShow:(AdSetQDIInterstitialAd *)item;

/// Interstitial ad clicked
- (void)onAdClick:(AdSetQDIInterstitialAd *)item extra:(nullable NSDictionary *)extra;

/// Interstitial ad closed
- (void)onAdClose:(AdSetQDIInterstitialAd *)item extra:(nullable NSDictionary *)extra;

@optional

/// Interstitial ad display failed
- (void)onAdShowFail:(AdSetQDIInterstitialAd *)item
               error:(NSError *)error;

/// Interstitial video ad playback start
- (void)onAdVideoStart:(AdSetQDIInterstitialAd *)item;

/// Interstitial playback end
- (void)onAdVideoEnd:(AdSetQDIInterstitialAd *)item;

/// Whether the click jump on the interstitial advertisement is in the form of Deeplink
- (void)onDeeplinkCallback:(AdSetQDIInterstitialAd *)item
                    result:(BOOL)success;

@end

NS_ASSUME_NONNULL_END

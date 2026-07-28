//
//  AdSetQDIPubRewardedVideoDelegate.h
//  AdSetQDIAdSDK
//
//  Created by xuejingwei on 2025/6/17.
//  Copyright © 2025 AnyThink. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class AdSetQDIRewardedVideoAd;

@protocol AdSetQDIPubRewardedVideoDelegate <NSObject>

#pragma mark - RewardVideo
/// Rewarded video ad play starts
- (void)onAdPlayStart:(AdSetQDIRewardedVideoAd *)item;


/// Rewarded video ad play ends
- (void)onAdPlayEnd:(AdSetQDIRewardedVideoAd *)item;

/// Rewarded video ad clicks
- (void)onAdClick:(AdSetQDIRewardedVideoAd *)item extra:(nullable NSDictionary *)extra;

/// Rewarded video ad closed
- (void)onAdClose:(AdSetQDIRewardedVideoAd *)item
         rewarded:(BOOL)rewarded;

@optional

/// Rewarded video ad reward distribution
- (void)onAdReward:(AdSetQDIRewardedVideoAd *)item __attribute__((deprecated("Use onAdReward:trackDict: instead")));

/// Rewarded video ad reward distribution
- (void)onAdReward:(AdSetQDIRewardedVideoAd *)item trackDict:(nullable NSDictionary *)trackDict;

/// Rewarded video ad play failed
- (void)onAdPlayFailed:(AdSetQDIRewardedVideoAd *)item
                 error:(NSError *)error;

/// Whether the click jump of rewarded video ad is in the form of Deeplink
- (void)onDeeplinkCallback:(AdSetQDIRewardedVideoAd *)item
                    result:(BOOL)success;

@end

NS_ASSUME_NONNULL_END

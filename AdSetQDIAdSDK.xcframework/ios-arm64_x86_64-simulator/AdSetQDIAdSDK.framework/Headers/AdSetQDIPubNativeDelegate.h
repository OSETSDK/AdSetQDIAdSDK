//
//  AdSetQDIPubNativeDelegate.h
//  AdSetQDIAdSDK
//
//  Created by xuejingwei on 2025/6/20.
//  Copyright © 2025 AnyThink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AdSetQDIAdSDK/AdSetQDIPublicLoadingDelegate.h>

@class UIView, AdSetQDINativeAd;
NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDIPubNativeMediaViewDelegate <NSObject>

- (void)onVideoAdStartPlay:(AdSetQDINativeAd *)item duration:(double)duration;

- (void)onVideoAdComplete:(AdSetQDINativeAd *)item;

- (void)onVideoError:(AdSetQDINativeAd *)item error:(NSError *)error;

- (void)onProgressUpdate:(AdSetQDINativeAd *)item current:(double)current duration:(double)duration;

@end

@protocol AdSetQDIPubNativeDelegate <NSObject>

/// Native ads displayed successfully
- (void)onAdShow:(AdSetQDINativeAd *)item;

/// Native ad click
- (void)onAdClick:(AdSetQDINativeAd *)item extra:(nullable NSDictionary *)extra;

@optional

/// Native ad close button cliecked
- (void)onAdClosed:(AdSetQDINativeAd *)item extra:(nullable NSDictionary *)extra;

/// Whether the click jump of Native ads is in the form of Deeplink
- (void)onDeeplinkCallback:(AdSetQDINativeAd *)item
                    result:(BOOL)success;

@end

NS_ASSUME_NONNULL_END

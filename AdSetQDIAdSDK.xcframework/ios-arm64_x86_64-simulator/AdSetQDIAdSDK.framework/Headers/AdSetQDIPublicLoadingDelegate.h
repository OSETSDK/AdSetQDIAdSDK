//
//  AdSetQDIPublicLoadingDelegate.h
//  AdSetQDIAdSDK
//
//  Created by xuejingwei on 2025/6/1.
//  Copyright © 2025 AdSetQDIAdSDK. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AdSetQDIBaseAd;
NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDIPublicLoadingDelegate <NSObject>

/// Callback when the successful loading of the ad
- (void)onAdLoaded:(AdSetQDIBaseAd *)item;

/// Callback of ad loading failure
- (void)onAdLoadFail:(AdSetQDIBaseAd *)item
               error:(NSError *)error;

@end

NS_ASSUME_NONNULL_END

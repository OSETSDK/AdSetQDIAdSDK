//
//  AdSetQDIRewardedVideoAd.h
//  AdSetQDIAdSDK
//
//  Created by xuejingwei on 2025/5/27.
//  Copyright © 2025 AnyThink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AdSetQDIAdSDK/AdSetQDIBaseAd.h>
#import <AdSetQDIAdSDK/AdSetQDIPublicLoadingDelegate.h>
#import <AdSetQDIAdSDK/AdSetQDIPubRewardedVideoDelegate.h>
#import <AdSetQDIAdSDK/AdSetQDIPubRewardedEventDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDIRewardedVideoAd : AdSetQDIBaseAd
@property (nonatomic, weak, nullable) id<AdSetQDIPubRewardedVideoDelegate> showDelegate;
@property (nonatomic, weak, nullable) id<AdSetQDIPubRewardedEventDelegate> deepRewardDelegate;

- (void)showAd;

@end

NS_ASSUME_NONNULL_END

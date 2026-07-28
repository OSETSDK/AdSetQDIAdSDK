//
//  AdSetQDIInterstitialAd.h
//  AdSetQDIAdSDK
//
//  Created by xuejingwei on 2025/5/27.
//  Copyright © 2025 AnyThink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AdSetQDIAdSDK/AdSetQDIBaseAd.h>
#import <AdSetQDIAdSDK/AdSetQDIPubInterstitialDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDIInterstitialAd : AdSetQDIBaseAd

@property (nonatomic, weak, nullable) id<AdSetQDIPubInterstitialDelegate> showDelegate;

- (void)showAd;

@end

NS_ASSUME_NONNULL_END

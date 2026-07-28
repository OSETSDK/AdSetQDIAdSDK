//
//  AdSetQDIBannerView.h
//  AnyThinkSDK
//
//  Created by xuejingwei on 2025/6/18.
//  Copyright © 2025 AnyThink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AdSetQDIAdSDK/AdSetQDIAdRequest.h>
#import <AdSetQDIAdSDK/AdSetQDIWinInfo.h>
#import <AdSetQDIAdSDK/AdSetQDILossInfo.h>
#import <AdSetQDIAdSDK/AdSetQDIAd.h>

NS_ASSUME_NONNULL_BEGIN

@class AdSetQDIBannerView;

@protocol AdSetQDIBannerViewDelegate <NSObject>

- (void)onAdLoaded:(AdSetQDIBannerView *)bannerView;

- (void)onAdLoadFail:(AdSetQDIBannerView *)bannerView error:(NSError *)error;

- (void)onAdShow:(AdSetQDIBannerView *)bannerView;

- (void)onAdClick:(AdSetQDIBannerView *)bannerView extra:(nullable NSDictionary *)extra;

- (void)onAdClose:(AdSetQDIBannerView *)bannerView extra:(nullable NSDictionary *)extra;

- (void)onDeeplinkCallback:(AdSetQDIBannerView *)bannerView result:(BOOL)success;

@end

/// creating && using in the main thread
@interface AdSetQDIBannerView : UIView

@property (nonatomic, copy) NSString *placementId;
@property (nonatomic, weak, nullable) id<AdSetQDIBannerViewDelegate> delegate;

- (void)load;
- (void)loadWithAdRequest:(nullable AdSetQDIAdRequest *)adRequest;
- (BOOL)isAdReady;
- (void)sendImpressionTracking;
- (void)destroy;
/// send win
- (void)notifyWin:(AdSetQDIWinInfo *)winInfo;
/// send loss
- (void)notifyLoss:(AdSetQDILossInfo *)lossInfo;

- (nullable AdSetQDIAd *)getAdSetQDIAd;


- (instancetype)initAdWithPlacementId:(nonnull NSString *)placementId extra:(nullable NSDictionary *)extra;
- (void)loadAdWithExtraDic:(nonnull NSDictionary *)ExtraDic;
- (BOOL)readyFilledWithExtraDic:(NSDictionary *)extraDic;
@end

NS_ASSUME_NONNULL_END

//
//  AdSetQDIBaseAd.h
//  AdSetQDIAdSDK
//
//  Created by xuejingwei on 2025/8/5.
//

#import <Foundation/Foundation.h>
#import <AdSetQDIAdSDK/AdSetQDIPublicLoadingDelegate.h>
#import <AdSetQDIAdSDK/AdSetQDIAdFormatDefine.h>
#import <AdSetQDIAdSDK/AdSetQDIAdRequest.h>
#import <AdSetQDIAdSDK/AdSetQDIAd.h>
#import <AdSetQDIAdSDK/AdSetQDIWinInfo.h>
#import <AdSetQDIAdSDK/AdSetQDILossInfo.h>

NS_ASSUME_NONNULL_BEGIN

@class UIViewController;

@interface AdSetQDIBaseAd : NSObject

@property (nonatomic, copy, nullable) NSString *placementId;
@property (nonatomic, strong, nullable) NSDictionary *extra;
@property (nonatomic, weak, nullable) id<AdSetQDIPublicLoadingDelegate> loadDelegate;
@property (nonatomic, weak, nullable) UIViewController *showViewController;
@property (nonatomic, strong, nullable) NSDictionary *adSourceExtra;

@property (nonatomic, strong, nullable) AdSetQDIAdRequest *adRequest;

/// generate params for adx
+ (void)generateHBParamWithExtraDic:(nullable NSDictionary *)extraDic
                             format:(AdSetQDIAdFormat)format
                           complete:(nonnull void(^)(NSDictionary *headerBiddingParams))complete;

+ (void)forceCloseAdIfNeeded;

- (instancetype)initAdWithPlacementId:(nonnull NSString *)placementId;

- (instancetype)initAdWithPlacementId:(nonnull NSString *)placementId extra:(nullable NSDictionary *)extra;

- (void)load;

- (void)loadAdWithExtraDic:(nonnull NSDictionary *)ExtraDic;

/// check ads is ready
- (BOOL)isReady;
/// send win
- (void)notifyWin:(AdSetQDIWinInfo *)winInfo;
/// send loss
- (void)notifyLoss:(AdSetQDILossInfo *)lossInfo;
/// destroy show info
- (void)destroy;
/// ads expired time
- (nullable NSDate *)getExpirationTimestamp;

- (nullable AdSetQDIAd *)getAdSetQDIAd;

- (BOOL)readyFilledWithExtraDic:(NSDictionary *)extraDic;

@end

NS_ASSUME_NONNULL_END

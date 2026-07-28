//
//  AdSetQDINative.h
//  AdSetQDIAdSDK
//
//  Created by xuejingwei on 2025/8/24.
//

#import <Foundation/Foundation.h>
#import <AdSetQDIAdSDK/AdSetQDINativeAd.h>
#import <AdSetQDIAdSDK/AdSetQDIAdRequest.h>
NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDINativeLoadDelegate <NSObject>

- (void)onAdLoaded:(AdSetQDINativeAd *)nativeAd;
- (void)onAdLoadFail:(NSError *)error;

@end

@interface AdSetQDINative : NSObject

@property (nonatomic, weak) id<AdSetQDINativeLoadDelegate> delegate;
@property (nonatomic, copy) NSString *placementId;
@property (nonatomic, strong) AdSetQDIAdRequest *adRequest;

- (instancetype)initAdWithPlacementId:(NSString *)placementId;
- (void)load;

@end

NS_ASSUME_NONNULL_END

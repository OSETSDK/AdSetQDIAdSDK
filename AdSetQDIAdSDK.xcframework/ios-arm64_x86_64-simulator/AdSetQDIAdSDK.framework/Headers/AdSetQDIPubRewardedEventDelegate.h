//
//  AdSetQDIPubRewardedEventDelegate.h
//  AdSetQDIAdSDK
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class AdSetQDIRewardedVideoAd;

@protocol AdSetQDIPubRewardedEventDelegate <NSObject>

@optional

- (void)onRewardedSuccess:(AdSetQDIRewardedVideoAd *)item trackDict:(nullable NSDictionary *)trackDict;

@end

NS_ASSUME_NONNULL_END

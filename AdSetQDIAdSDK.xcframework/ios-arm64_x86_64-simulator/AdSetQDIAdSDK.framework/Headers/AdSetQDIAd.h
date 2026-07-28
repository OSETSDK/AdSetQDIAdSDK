//
//  AdSetQDIAd.h
//  AdSetQDIAdSDK
//
//  Created by xuejingwei on 2025/8/21.
//  Ads Info

#import <Foundation/Foundation.h>
#import <AdSetQDIAdSDK/AdSetQDIAdEcpmInfo.h>
#import <AdSetQDIAdSDK/AdSetQDIAdPlaceInfo.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDIAd : NSObject

@property (nonatomic, strong, readonly) AdSetQDIAdEcpmInfo *ecpmInfo;
@property (nonatomic, strong, readonly) AdSetQDIAdPlaceInfo *placementInfo;
@property (nonatomic, copy, readonly) NSDictionary *extraInfo;

@end

NS_ASSUME_NONNULL_END

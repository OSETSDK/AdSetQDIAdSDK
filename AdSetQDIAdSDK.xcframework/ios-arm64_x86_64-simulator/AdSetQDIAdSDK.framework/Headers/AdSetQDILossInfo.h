//
//  AdSetQDILossInfo.h
//  AdSetQDIAdSDK
//
//  Created by xuejingwei on 2025/8/26.
//

#import <Foundation/Foundation.h>
#import <AdSetQDIAdSDK/AdSetQDIAdEcpmInfo.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, AdSetQDILossReason) {
    AdSetQDILossToHigherBid = 0,
    AdSetQDILossToNormal,
    AdSetQDILossToAuctionFloor,
    AdSetQDILossToExpire,
};

@interface AdSetQDILossInfo : NSObject

@property (nonatomic, assign) AdSetQDILossReason reason;
@property (nonatomic, assign) double winPrice;
@property (nonatomic, copy) NSString *networkName;
@property (nonatomic, copy) NSDictionary *extraInfo;
@property (nonatomic, assign) AdSetQDIAdCurrencyType currencyType;

@end

NS_ASSUME_NONNULL_END

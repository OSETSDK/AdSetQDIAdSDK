//
//  AdSetQDIAdEcpmInfo.h
//  AdSetQDIAdSDK
//
//  Created by xuejingwei on 2025/8/21.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, AdSetQDIAdCurrencyType) {
    AdSetQDIAdCurrencyTypeUSD,
    AdSetQDIAdCurrencyTypeCNY,
    AdSetQDIAdCurrencyTypeCNYCents,
};

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDIAdEcpmInfo : NSObject
/// get ecpm with currency type
- (double)currentEcpm:(AdSetQDIAdCurrencyType)type;
- (NSDecimalNumber *)currentDecimalEcpm:(AdSetQDIAdCurrencyType)type;
/// get revenue with currency type
- (double)currentRevenueEcpm:(AdSetQDIAdCurrencyType)type;
- (NSDecimalNumber *)currentDecimalRevenueEcpm:(AdSetQDIAdCurrencyType)type;

@end

NS_ASSUME_NONNULL_END

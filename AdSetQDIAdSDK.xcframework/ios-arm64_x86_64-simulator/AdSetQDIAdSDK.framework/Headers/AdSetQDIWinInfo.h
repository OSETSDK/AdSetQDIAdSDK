//
//  AdSetQDIWinInfo.h
//  AdSetQDIAdSDK
//
//  Created by xuejingwei on 2025/8/26.
//

#import <Foundation/Foundation.h>
#import <AdSetQDIAdSDK/AdSetQDIAdEcpmInfo.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDIWinInfo : NSObject

@property (nonatomic, assign) double secondPrice;
@property (nonatomic, copy) NSString *networkName;
@property (nonatomic, copy) NSDictionary *extraInfo;
@property (nonatomic, assign) AdSetQDIAdCurrencyType currencyType;

@end

NS_ASSUME_NONNULL_END

//
//  AdSetQDIAdPlaceInfo.h
//  AdSetQDIAdSDK
//
//  Created by xuejingwei on 2025/8/21.
//

#import <Foundation/Foundation.h>
#import <AdSetQDIAdSDK/AdSetQDIAdFormatDefine.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDIAdPlaceInfo : NSObject

@property (nonatomic, copy, readonly) NSString *placementId;
@property (nonatomic, copy, readonly) NSString *requestId;
@property (nonatomic, assign, readonly) AdSetQDIAdFormat format;

@end

NS_ASSUME_NONNULL_END

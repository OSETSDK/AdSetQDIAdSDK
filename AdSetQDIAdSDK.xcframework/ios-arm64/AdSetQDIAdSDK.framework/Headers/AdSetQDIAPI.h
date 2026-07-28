//
//  AdSetQDIAPI.h
//  AdSetQDIAdSDK
//
//  Created by Plutus on 09/04/2018.
//  Copyright © 2018 Plutus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AdSetQDIAdSDK/AdSetQDIDebuggerConfig.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kAdSetQDIADDelegateExtraNetworkFirmIdKey;
extern NSString *const kAdSetQDIADDelegateExtraAdSourceIdKey;
extern NSString *const kAdSetQDIADDelegateExtraIsHeaderBiddingKey;
extern NSString *const kAdSetQDIADDelegateExtraBidModeKey;
extern NSString *const kAdSetQDIADDelegateExtraAdSourcePriceKey;
extern NSString *const kAdSetQDIADDelegateExtraPriorityKey;
extern NSString *const kAdSetQDIADDelegateExtraBidFloorKey;
extern NSString *const kAdSetQDIADDelegateExtraRequestIDKey;
extern NSString *const kAdSetQDIADDelegateExtraCustomExtKey;
extern NSString *const kAdSetQDIADDelegateExtraECPMLevelKey; // the eCPM level of the ad source
extern NSString *const kAdSetQDIADDelegateExtraSegmentIDKey; //segment ID
extern NSString *const kAdSetQDIADDelegateExtraCustomRuleKey; // Json string of the Placement + App dimension custom rule
extern NSString *const kAdSetQDIADDelegateExtraIDKey; // a unique ID generated for each impression
extern NSString *const kAdSetQDIADDelegateExtraAdunitIDKey; // adsetqdiadsdk placement ID
extern NSString *const kAdSetQDIADDelegateExtraPublisherRevenueKey; // impression revenue
extern NSString *const kAdSetQDIADDelegateExtraCurrencyKey; // currency unit, for example: "USD"
extern NSString *const kAdSetQDIADDelegateExtraCountryKey; // country code, for example: "CN"
extern NSString *const kAdSetQDIADDelegateExtraFormatKey; // ad source types
extern NSString *const kAdSetQDIADDelegateExtraPrecisionKey; // eCPM precision
extern NSString *const kAdSetQDIADDelegateExtraNetworkTypeKey; // Network Type
extern NSString *const kAdSetQDIADDelegateExtraNetworkPlacementIDKey; // the ad placement ID of a third-party Ads Network
extern NSString *const kAdSetQDIADDelegateExtraPlacementRewardNameKey;
extern NSString *const kAdSetQDIADDelegateExtraPlacementRewardNumberKey;
extern NSString *const kAdSetQDIADDelegateExtraExtInfoKey; // additional information of AdSetQDIAdSDK Adx & OnlineAPI Offer,output as Json string
extern NSString *const kAdSetQDIADDelegateExtraOfferIDKey;
extern NSString *const kAdSetQDIADDelegateExtraCreativeIDKey;
extern NSString *const kAdSetQDIADDelegateExtraIsDeeplinkKey;
extern NSString *const kAdSetQDIADDelegateExtraUserCustomData;
extern NSString *const kAdSetQDIADDelegateExtraPlacementTypeKey;
extern NSString *const kAdSetQDIADDelegateExtraNetworkNameKey;
extern NSString *const kAdSetQDIADDelegateExtraTpBidIDKey;
extern NSString *const kAdSetQDIADDelegateExtraABTestIDKey;
extern NSString *const kAdSetQDIADDelegateExtraDismissTypeKey;
extern NSString *const kAdSetQDIADDebuggerKey;
extern NSString *const kAdSetQDIADDelegateExtraServerKeyIdKey;
extern NSString *const kAdSetQDIADDelegateExtraClientSideEcpmKey;
extern NSString *const kAdSetQDIADDelegateExtraUsdExchangeRmbRateKey;
extern NSString *const kAdSetQDIADDelegateExtraRmbExchangeUsdRateKey;
extern NSString *const kAdSetQDIADDelegateExtraADSourceTypeKey;

extern NSString *const kAdSetQDICustomDataUserIDKey;//string
extern NSString *const kAdSetQDICustomDataAgeKey;//Integer
extern NSString *const kAdSetQDICustomDataGenderKey;//Integer
extern NSString *const kAdSetQDICustomDataNumberOfIAPKey;//Integer
extern NSString *const kAdSetQDICustomDataIAPAmountKey;//Double
extern NSString *const kAdSetQDICustomDataIAPCurrencyKey;//string
extern NSString *const kAdSetQDICustomDataChannelKey;//string
extern NSString *const kAdSetQDICustomDataSubchannelKey;//string
extern NSString *const kAdSetQDICustomDataSegmentIDKey;//int

typedef NS_ENUM(NSInteger, AdSetQDIUserLocation) {
    AdSetQDIUserLocationUnknown = 0,
    AdSetQDIUserLocationInEU = 1,
    AdSetQDIUserLocationOutOfEU = 2
};

typedef NS_ENUM(NSInteger, AdSetQDIDataConsentSet) {
    //Let it default to forbidden if not set
    AdSetQDIDataConsentSetUnknown = 0,
    AdSetQDIDataConsentSetPersonalized = 1,
    AdSetQDIDataConsentSetNonpersonalized = 2
};

typedef NS_ENUM(NSInteger, AdSetQDIBUAdLoadType) {
    AdSetQDIBUAdLoadTypeUnknown = -1, // Unknown
    AdSetQDIBUAdLoadTypePreload = 1, // Preload resources
    AdSetQDIBUAdLoadTypeLoad = 3, // Load resources in real time
};

typedef NS_ENUM(NSInteger, AdSetQDIPersonalizedAdState) {
    AdSetQDIPersonalizedAdStateType = 1,
    AdSetQDINonpersonalizedAdStateType = 2
};

typedef NS_OPTIONS(NSInteger, AdSetQDILogType) {
    AdSetQDILogTypeNone = 0,
    AdSetQDILogTypeInternal = 1 << 0,
    AdSetQDILogTypeExternal = 1 << 1,
    AdSetQDILogTypeTemporary = 1 << 2,
    AdSetQDILogTypeProcess = 1 << 3,
    AdSetQDILogTypeSave = 1 << 4
};

// Position of the logo icon in the containing ad.
typedef NS_ENUM(NSInteger, AdSetQDIAdLogoPosition) {
    AdSetQDIAdLogoPositionBottomRightCorner = 0,  ///< Bottom right corner.
    AdSetQDIAdLogoPositionBottomLeftCorner,   ///< Bottom Left Corner.
    AdSetQDIAdLogoPositionTopRightCorner,     ///< Top right corner.
    AdSetQDIAdLogoPositionTopLeftCorner,      ///< Top left corner.
};

@interface AdSetQDIAPI : NSObject

@property (nonatomic, readonly) AdSetQDIDataConsentSet dataConsentSet;
@property (nonatomic, readonly) NSString *appID;
@property (nonatomic, readonly) NSString *appKey;

/// singleton object
+ (instancetype)sharedInstance;

/// Log enabled
/// @param logEnabled - log status
+ (void)setLogEnabled:(BOOL)logEnabled;

/// Log enabled
/// @param cacheEnabled log localCache status
+ (void)logLocalCacheEnabled:(BOOL)cacheEnabled;

/// print test info log
/// include idfa,idfv
+ (void)testModeInfo;

/// get SDK version
+ (NSString *)version;

+ (void)preStartWithExtra:(nullable NSDictionary *)extra;

/// Initialize SDK
/// @param appID - appid string
/// @param appKey appkey string
/// @param error - see what's the matter.
- (BOOL)startWithAppID:(NSString *)appID
                appKey:(NSString *)appKey
                 error:(NSError **)error;

/// get ps id
- (nullable NSString *)psID;

- (void)setAdDataConsentSet:(AdSetQDIDataConsentSet)dataConsentSet;

/// set personalized recommendation state
/// @param state - 1 is to close personalized recommendation, other values or not set to open
- (void)setPersonalizedAdState:(AdSetQDIPersonalizedAdState)state;

/// get personalized recommendation state
- (AdSetQDIPersonalizedAdState)getPersonalizedAdState;

NS_ASSUME_NONNULL_END
@end



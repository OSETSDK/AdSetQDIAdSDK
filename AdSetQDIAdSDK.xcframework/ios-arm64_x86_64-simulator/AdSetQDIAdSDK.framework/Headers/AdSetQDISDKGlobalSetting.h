//
//  AdSetQDISDKGlobalSetting.h
//  AdSetQDIAdSDK
//
//  Created by AdSetQDIAdSDK on 8/23/23.
//  Copyright © 2023 AdSetQDIAdSDK. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AdSetQDIAdSDK/AdSetQDIAdFormatDefine.h>
#import <AdSetQDIAdSDK/AdSetQDIDebuggerConfig.h>

NS_ASSUME_NONNULL_BEGIN
@class AdSetQDIAntiBrushConfig, AdSetQDIRiskControlModel, AdSetQDIAdCustomFilter;
extern NSString *const kAdSetQDIDeviceDataInfoOSVersionNameKey; //System version name
extern NSString *const kAdSetQDIDeviceDataInfoOSVersionCodeKey; //System version code
extern NSString *const kAdSetQDIDeviceDataInfoPackageNameKey; //Application package name
extern NSString *const kAdSetQDIDeviceDataInfoAppVersionNameKey; //Application version name
extern NSString *const kAdSetQDIDeviceDataInfoAppVersionCodeKey; //Application version code
extern NSString *const kAdSetQDIDeviceDataInfoBrandKey; //Phone brands
extern NSString *const kAdSetQDIDeviceDataInfoCPUKey; //Phone cpu
extern NSString *const kAdSetQDIDeviceDataInfoModelKey; //Phone model
extern NSString *const kAdSetQDIDeviceDataInfoScreenKey; //Screen Resolution
extern NSString *const kAdSetQDIDeviceDataInfoNetworkTypeKey; //Network Type
extern NSString *const kAdSetQDIDeviceDataInfoMNCKey; //Mobile Network Code
extern NSString *const kAdSetQDIDeviceDataInfoMCCKey; //Mobile Country Code
extern NSString *const kAdSetQDIDeviceDataInfoLanguageKey; //Language
extern NSString *const kAdSetQDIDeviceDataInfoTimeZoneKey; //Time zone
extern NSString *const kAdSetQDIDeviceDataInfoUserAgentKey; //User Agent
extern NSString *const kAdSetQDIDeviceDataInfoOrientKey; //Screen orientation
extern NSString *const kAdSetQDIDeviceDataInfoIDFAKey; //idfa
extern NSString *const kAdSetQDIDeviceDataInfoIDFVKey; //idfv
extern NSString *const kAdSetQDIDeviceDataInfoSIMCardStateKey; //sim card status
extern NSString *const kAdSetQDIDeviceDataInfoBatteryKey; //sim card status
extern NSString *const kAdSetQDIDeviceDataInfoSensorDeny; // shake event
extern NSString *const kAdSetQDIDeviceDataInfoGyroscopeDeny; // twist event


typedef NS_ENUM(NSUInteger, AdSetQDISplashAdClickResultType) {
    AdSetQDISplashAdClickResultTypeDidCloseAd         = 1,  // After clicking on the jump button, close the splash ad
    AdSetQDISplashAdClickResultTypePauseCountdown     = 2,  // Pause the countdown after clicking the jump button, and continue the countdown when the splash ad is visible
};

typedef NS_ENUM(NSInteger, AdSetQDISystemPlatformType) {
    AdSetQDISystemPlatformTypeUnknown = 0,
    AdSetQDISystemPlatformTypeIOS = 1,
    AdSetQDISystemPlatformTypeUnity = 2,
    AdSetQDISystemPlatformTypeCocos2dx = 3,
    AdSetQDISystemPlatformTypeCocosCreator = 4,
    AdSetQDISystemPlatformTypeReactNative = 5,
    AdSetQDISystemPlatformTypeFlutter = 6,
    AdSetQDISystemPlatformTypeAdobeAir = 7
};

typedef NS_ENUM(NSUInteger, AdSetQDIDomainServiceType) {
    AdSetQDIDomainServiceTypeDefault = 0,
    AdSetQDIDomainServiceTypeKuying = 1,
    AdSetQDIDomainServiceTypeOnPro = 2,
};

@interface AdSetQDISDKGlobalSetting : NSObject

+ (instancetype)sharedManager;

@property (nonatomic, strong) NSDictionary *customData;
/// Splash Shake Text String, Only for DirectlyAd
@property (nonatomic, strong) NSString *directlySplashAdShakeTextString;
/// Splash CTA Button BackgroundColor, Only for DirectlyAd
@property (nonatomic, strong) UIColor *directlySplashAdCTAButtonBackgroundColor;
/// Splash Shake Custom View, Only for DirectlyAd
@property (nonatomic, strong) UIView *directlySplashAdCustomShakeView;
/// Splash CTA Custom View, Only for DirectlyAd
@property (nonatomic, strong) UIView *directlySplashAdCustomCTAView;
/// Splash Video Mute Icon hidden, Not hidden by default,  Only for DirectlyAd
@property (nonatomic, assign) BOOL directlySplashAdVideoMuteIconHidden;
/// Whether to pause the countdown after clicking on the  Splash ad to jump, the default is NO, Only for adsetqdiadsdk ADX、DirectlyAd and Cross Promotion
@property (nonatomic, assign) AdSetQDISplashAdClickResultType splashAdClickResultType;
/// Whether deep reward is enabled (new templates such as task card); default is YES. If set to NO, task card template is disabled and falls back to legacy rendering.
@property (nonatomic, assign) BOOL deepRewardEnabled;

/// set header bidding test mode,only support incoming device idfa.
/// setLogEnabled must be turned on before use
@property (nonatomic, strong) NSString *headerBiddingTestModeDeviceID;
/// system platform Information
@property (nonatomic, assign) AdSetQDISystemPlatformType systemPlatformType;
/// Optional domain service; set before SDK init. Used by AdSetQDIAdSDKDomainSwitchAdapter when linked.
@property (nonatomic, assign) AdSetQDIDomainServiceType domainServiceType;
/// set whether WX is installed
@property (nonatomic, assign) BOOL isInstallWX;
/// for setLocationLongitude:dimension:
@property (nonatomic, readonly) NSDictionary *locationDictionary;

/// set custom data for the ad placement
/// @param customData - custom data
/// @param placementID - placement id
- (void)setCustomData:(NSDictionary *)customData forPlacementID:(NSString *)placementID;

/// get custom data
- (nullable NSDictionary *)customDataForPlacementID:(NSString *)placementID;

/// set Wechat appID and universalLink, for register WechatOpenSDK
/// @param appID - Wechat appID
/// @param universalLink - Wechat universalLink
- (void)setWeChatAppID:(NSString *)appID universalLink:(NSString *)universalLink;

/// set exlude appleid list for sdk to filter offers
- (void)setExludeAppleIdArray:(NSArray *)appleIdArray;

/// get exlude appleid list
- (NSArray *)exludeAppleIdArray;

/// set denied Upload Info list for sdk to Control report
- (void)setDeniedUploadInfoArray:(NSArray *)uploadInfoArray;

/// get denied Upload Info list
- (NSArray *)deniedUploadInfoArray;

/// Determine whether the Denied key is included
/// @param key - key string
- (BOOL)isContainsForDeniedUploadInfoArray:(NSString *)key;

/// - Parameter isPermit: default YES
- (void)setAbnormalCollect:(BOOL)isPermit;

#pragma mark - Sensor
- (BOOL)isDenySensor;
- (BOOL)isDenySensorWithExtra:(NSDictionary *)extra;
- (void)setDenySensor:(BOOL)isShakeEnabled;
- (void)setDenySensor:(BOOL)isShakeEnabled extra:(NSDictionary *)extra;

#pragma mark - DeviceInfo
/// set location longitude
- (void)setLocationLongitude:(double)longitude dimension:(double)dimension;
- (void)setDebuggerConfig:(void(^_Nullable)(AdSetQDIDebuggerConfig * _Nullable debuggerConfig))debuggerConfigBlock;

@end

NS_ASSUME_NONNULL_END

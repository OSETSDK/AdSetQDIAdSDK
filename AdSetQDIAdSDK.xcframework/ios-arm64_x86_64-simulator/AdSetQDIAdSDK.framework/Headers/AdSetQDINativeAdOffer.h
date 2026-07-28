//
//  AdSetQDINativeAdOffer.h
//  AdSetQDIAdSDK
//
//  Created by xuejingwei on 2025/8/13.
//

#import <Foundation/Foundation.h>
#import <AdSetQDIAdSDK/AdSetQDIAdFormatDefine.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM (NSInteger, AdSetQDINativeAdInteractionType) {
    AdSetQDINativeAdInteractionTypeUnknown        = 0,
    AdSetQDINativeAdInteractionTypeNone           = 1,  // pure ad display
    AdSetQDINativeAdInteractionTypeURL            = 2,  // open the webpage using a browser
    AdSetQDINativeAdInteractionTypePage           = 3,  // open the webpage within the app
    AdSetQDINativeAdInteractionTypeDownload       = 4,  // download the app
    AdSetQDINativeAdInteractionTypePhone          = 5,  // make a call
    AdSetQDINativeAdInteractionTypeMessage        = 6,  // send messages
    AdSetQDINativeAdInteractionTypeEmail          = 7,  // send email
    AdSetQDINativeAdInteractionTypeVideoAdDetail  = 8,  // video ad details page
    AdSetQDINativeAdInteractionTypeWechat         = 9,  // open wechat
    AdSetQDINativeAdInteractionTypeOthers         = 100 // types returned by other ad sdk
};

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDINativeAdOffer : NSObject

@property (nonatomic, assign, readonly) AdSetQDINativeAdRenderType nativeAdRenderType;
/// network template ad view
@property (nonatomic, strong, readonly, nullable) UIView *templateView;
/// is video type
@property (nonatomic, assign, readonly) BOOL isVideoContents;
/// ad title
@property (nonatomic, copy, readonly, nullable) NSString *title;
/// Ad details
@property (nonatomic, copy, readonly, nullable) NSString *mainText;
/// CTA Button text such as 'download/install'
@property (nonatomic, copy, readonly, nullable) NSString *ctaText;
/// app icon url
@property (nonatomic, copy, readonly, nullable) NSString *iconUrl;
/// main image url
@property (nonatomic, copy, readonly, nullable) NSString *imageUrl;
/// ad logo url
@property (nonatomic, copy, readonly, nullable) NSString *logoUrl;
/// mediaView
@property (nonatomic, strong, readonly, nullable) UIView *mediaView;
/// video aspect ratio (width/height), if no value or exception returns 0
@property (nonatomic, assign, readonly) CGFloat videoAspectRatio;
/// video duration, in second, if there is no value, return 0
@property (nonatomic, assign, readonly) CGFloat videoDuration;
/// main image width
@property (nonatomic, assign, readonly) CGFloat mainImageWidth;
/// main image height
@property (nonatomic, assign, readonly) CGFloat mainImageHeight;
/// TemplateView Type
@property (nonatomic, assign, readonly) NSInteger expressType;
/// Ad-supported jump types
@property (nonatomic, assign, readonly) AdSetQDINativeAdInteractionType interactionType;

@end

NS_ASSUME_NONNULL_END

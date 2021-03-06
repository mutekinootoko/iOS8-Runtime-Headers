/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class NSString, NSURL, NSDate, UIImage;

@interface AAUIFamilyCreditCard : NSObject  {
    NSDate *_expirationDate;
    NSString *_lastFourDigits;
    NSString *_type;
    NSString *_usageNotice;
    NSString *_providerDescription;
    NSURL *_imageURL;
    UIImage *_image;
}

@property(copy) NSDate * expirationDate;
@property(copy) NSString * lastFourDigits;
@property(copy) NSString * type;
@property(copy) NSString * usageNotice;
@property(copy) NSString * providerDescription;
@property(copy) NSURL * imageURL;
@property(retain) UIImage * image;


- (void)setImageURL:(id)arg1;
- (void)setProviderDescription:(id)arg1;
- (id)providerDescription;
- (void)setUsageNotice:(id)arg1;
- (id)usageNotice;
- (void)setLastFourDigits:(id)arg1;
- (id)lastFourDigits;
- (id)imageURL;
- (void)setExpirationDate:(id)arg1;
- (id)expirationDate;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setType:(id)arg1;
- (id)type;
- (void).cxx_destruct;

@end

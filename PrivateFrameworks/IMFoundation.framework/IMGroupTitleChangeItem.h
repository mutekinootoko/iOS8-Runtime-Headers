/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSString;

@interface IMGroupTitleChangeItem : IMItem <NSCoding, NSCopying, IMRemoteObjectCoding> {
    NSString *_title;
    NSString *_otherCountryCode;
    NSString *_otherHandle;
    NSString *_otherUnformattedID;
}

@property(retain) NSString * title;
@property(retain) NSString * otherHandle;
@property(retain) NSString * otherUnformattedID;
@property(retain) NSString * otherCountryCode;


- (id)copyDictionaryRepresentation;
- (void)setOtherCountryCode:(id)arg1;
- (id)otherCountryCode;
- (void)setOtherHandle:(id)arg1;
- (id)otherHandle;
- (void)setOtherUnformattedID:(id)arg1;
- (id)otherUnformattedID;
- (id)initWithDictionary:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)_newChatItems;

@end

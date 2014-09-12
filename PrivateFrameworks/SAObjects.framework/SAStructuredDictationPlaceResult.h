/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSData;

@interface SAStructuredDictationPlaceResult : AceObject <SAAceSerializable> {
}

@property(copy) NSString * placeResultType;
@property(copy) NSData * resultData;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)structuredDictationPlaceResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)structuredDictationPlaceResult;

- (void)setResultData:(id)arg1;
- (void)setPlaceResultType:(id)arg1;
- (id)encodedClassName;
- (id)placeResultType;
- (id)resultData;
- (id)groupIdentifier;

@end
/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDictionary, NSString;

@interface SAEndpoint : AceObject <SAAceSerializable> {
}

@property(copy) NSDictionary * operations;
@property(copy) NSString * providerId;
@property bool supportsAuthentication;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)endpointWithDictionary:(id)arg1 context:(id)arg2;
+ (id)endpoint;

- (id)encodedClassName;
- (id)providerId;
- (void)setProviderId:(id)arg1;
- (id)operations;
- (void)setSupportsAuthentication:(bool)arg1;
- (bool)supportsAuthentication;
- (id)groupIdentifier;
- (void)setOperations:(id)arg1;

@end

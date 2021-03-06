/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSNumber;

@interface SAStartRequest : SABaseCommand <SAServerBoundCommand> {
}

@property bool clearContext;
@property bool eyesFree;
@property bool handsFree;
@property(copy) NSString * motionActivity;
@property(copy) NSNumber * motionConfidence;
@property(copy) NSString * origin;
@property bool talkOnly;
@property(copy) NSString * utterance;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)startRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startRequest;

- (void)setTalkOnly:(bool)arg1;
- (bool)talkOnly;
- (void)setHandsFree:(bool)arg1;
- (bool)handsFree;
- (void)setEyesFree:(bool)arg1;
- (bool)eyesFree;
- (void)setUtterance:(id)arg1;
- (id)utterance;
- (void)setMotionConfidence:(id)arg1;
- (id)motionConfidence;
- (void)setMotionActivity:(id)arg1;
- (id)motionActivity;
- (void)setClearContext:(bool)arg1;
- (id)encodedClassName;
- (bool)clearContext;
- (id)groupIdentifier;
- (void)setOrigin:(id)arg1;
- (id)origin;

@end

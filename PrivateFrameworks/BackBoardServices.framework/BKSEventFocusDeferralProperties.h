/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSString;

@interface BKSEventFocusDeferralProperties : NSObject <NSSecureCoding> {
    int _pid;
    unsigned int _contextID;
    NSString *_clientID;
    NSString *_displayUUID;
}

@property(readonly) NSString * clientID;
@property(readonly) int pid;
@property(readonly) NSString * displayUUID;
@property(readonly) unsigned int contextID;

+ (id)propertiesWithClientID:(id)arg1 displayUUID:(id)arg2 contextID:(unsigned int)arg3;
+ (id)propertiesWithMainDisplayAndClientID:(id)arg1 contextID:(unsigned int)arg2;
+ (id)propertiesWithClientID:(id)arg1 pid:(int)arg2 displayUUID:(id)arg3 contextID:(unsigned int)arg4;
+ (id)propertiesWithMainDisplayAndClientID:(id)arg1 pid:(int)arg2 contextID:(unsigned int)arg3;
+ (bool)supportsSecureCoding;

- (int)pid;
- (id)propertiesOneLevelMoreGeneric;
- (void)setPid:(int)arg1;
- (bool)isEqualNotIncludingClientIDAndPid:(id)arg1;
- (unsigned int)contextID;
- (id)displayUUID;
- (id)clientID;
- (id)initWithClientID:(id)arg1 pid:(int)arg2 displayUUID:(id)arg3 contextID:(unsigned int)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;

@end

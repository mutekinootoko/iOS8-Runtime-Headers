/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class <CLIntersiloServiceProtocol>, CLSilo;

@interface CLServiceVendorHeartbeatRecord : NSObject  {
    int _synCount;
    int _ackCount;
    CLSilo *_silo;
    <CLIntersiloServiceProtocol> *_service;
}

@property(readonly) CLSilo * silo;
@property(readonly) <CLIntersiloServiceProtocol> * service;
@property(readonly) int synCount;
@property(readonly) int ackCount;


- (int)ackCount;
- (int)synCount;
- (void)ack;
- (void)syn;
- (id)initTrackingService:(id)arg1;
- (id)silo;
- (id)service;
- (void).cxx_destruct;

@end

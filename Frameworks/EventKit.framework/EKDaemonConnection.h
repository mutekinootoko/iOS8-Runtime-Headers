/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, <CADInterface>, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface EKDaemonConnection : NSObject <CADClientInterface> {
    unsigned int _options;
    NSString *_dbPath;
    id _delegate;
    NSObject<OS_dispatch_queue> *_connectionLock;
    <CADInterface> *_remoteOperationProxy;
    NSObject<OS_dispatch_queue> *_replyHandlerLock;
    NSMutableDictionary *_cancellableOperations;
    unsigned int _nextCancellationToken;
    bool_registeredForStartNote;
    int _connectionIdentifier;
    NSXPCConnection *_xpcConnection;
}

@property(retain,readonly) NSXPCConnection * xpcConnection;
@property(retain,readonly) <CADInterface> * CADOperationProxy;
@property id delegate;
@property int connectionIdentifier;

+ (void)waitOnSemaphoreWithBlock:(id)arg1;

- (int)connectionIdentifier;
- (unsigned int)addCancellableRemoteOperation:(id)arg1;
- (void)_daemonRestarted;
- (void)setConnectionIdentifier:(int)arg1;
- (void)removeCancellableRemoteOperation:(unsigned int)arg1;
- (void)_finishAllRepliesOnServerDeath;
- (bool)_connectToServer;
- (void)cancelRemoteOperation:(unsigned int)arg1;
- (id)CADOperationProxy;
- (id)initWithOptions:(unsigned int)arg1 path:(id)arg2;
- (void)CADClientReceiveOccurrenceCacheSearchResults:(id)arg1 forSearchToken:(unsigned int)arg2 finished:(bool)arg3;
- (id)xpcConnection;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)disconnect;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSString, <BBRemoteDataProvider>, <BBRemoteDataProviderServerProxy>, NSObject<OS_dispatch_queue>, BBDataProviderIdentity;

@interface BBDataProviderProxy : NSObject <BBRemoteDataProviderClientProxy> {
    <BBRemoteDataProvider> *_dataProvider;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    BBDataProviderIdentity *_identity;
    bool_dataProviderDidLoad;
    NSObject<OS_dispatch_queue> *_proxyQueue;
    <BBRemoteDataProviderServerProxy> *_serverProxy;
    bool_connected;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) BBDataProviderIdentity * identity;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)updateSectionInfoWithHandler:(id)arg1;
- (void)updateClearedInfoWithHandler:(id)arg1;
- (void)reloadDefaultSectionInfo;
- (void)reloadSectionParameters;
- (void)addBulletin:(id)arg1 interrupt:(bool)arg2;
- (void)updateSectionInfoWithHandler:(id)arg1 completion:(id)arg2;
- (void)updateSectionInfoInCategory:(long long)arg1 withHandler:(id)arg2 completion:(id)arg3;
- (void)_makeServerRequest:(id)arg1;
- (void)_makeClientRequest:(id)arg1;
- (id)initWithDataProvider:(id)arg1 clientReplyQueue:(id)arg2;
- (void)updateIdentity:(id)arg1;
- (void)setServerProxy:(id)arg1;
- (void)withdrawBulletinWithPublisherBulletinID:(id)arg1;
- (void)withdrawBulletinsWithRecordID:(id)arg1;
- (void)modifyBulletin:(id)arg1;
- (void)addBulletin:(id)arg1 forDestinations:(unsigned long long)arg2;
- (void)invalidateBulletins;
- (void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)noteSectionInfoDidChange:(id)arg1;
- (void)attachmentAspectRatioForRecordID:(id)arg1 completion:(id)arg2;
- (void)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 completion:(id)arg3;
- (void)deliverBulletinActionResponse:(id)arg1;
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3;
- (void)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(id)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3;
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(id)arg3;
- (void)dataProviderDidLoad;
- (void)setIdentity:(id)arg1;
- (id)identity;
- (void)dealloc;
- (id)description;

@end

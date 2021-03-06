/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@class NSString, CallDBManager, CallDBProperties, NSManagedObjectContext;

@interface CallHistoryDBHandle : CHLogger  {
    NSManagedObjectContext *fCallRecordContext;
    NSManagedObjectContext *fCallDBPropertiesContext;
    CallDBProperties *fCallDBProperties;
    CallDBManager *callDBManager;
    NSString *objectId;
    id _observerCallRecordRef;
    id _observerCallDBPropRef;
}

@property(readonly) NSString * objectId;
@property(readonly) CallDBManager * callDBManager;

+ (id)createWithDBManager:(id)arg1;
+ (id)create;

- (id)callDBManager;
- (id)objectId;
- (id)timerLastReset;
- (id)fetchWithCallTypes:(unsigned int)arg1;
- (id)createCallRecord;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (void)registerForNotifications:(id)arg1;
- (id)callRecordContext;
- (void)handleCallRecordMergeConflicts:(id)arg1;
- (void)updateCallDBProperties;
- (id)getArrayForCallTypeMask:(unsigned int)arg1;
- (id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2 withLimit:(bool)arg3;
- (void)postTimersChangedNotification;
- (void)handleCallDBPropContextDidSaveNotification:(id)arg1;
- (void)handleCallRecordContextDidSaveNotification:(id)arg1;
- (id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2;
- (void)setCallDBProperties;
- (id)fetchAllNoLimit;
- (id)fetchObjectsWithUniqueIds:(id)arg1;
- (void)deleteObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithPredicate:(id)arg1;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchAll;
- (id)initWithDBManager:(id)arg1;
- (void)resetTimers;
- (id)timerLifetime;
- (id)timerOutgoing;
- (id)timerIncoming;
- (void)deleteObjectsWithUniqueIds:(id)arg1;
- (void)unRegisterForNotifications;
- (void)deleteAll;
- (bool)save:(id*)arg1;
- (void)dealloc;
- (void).cxx_destruct;

@end

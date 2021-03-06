/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSDictionary, NSMutableDictionary, NSOperation;

@interface CKDPublishAssetsOperation : CKDDatabaseOperation  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _assetPublishedBlock;

    NSArray *_recordIDs;
    NSDictionary *_fileNamesByAssetFieldNames;
    unsigned long long _requestedTTL;
    unsigned long long _URLOptions;
    NSOperation *_fetchRecordsOperation;
    NSMutableDictionary *_fetchedRecordsByID;
}

@property(copy) id assetPublishedBlock;
@property(retain) NSArray * recordIDs;
@property(retain) NSDictionary * fileNamesByAssetFieldNames;
@property unsigned long long requestedTTL;
@property unsigned long long URLOptions;
@property(retain) NSOperation * fetchRecordsOperation;
@property(retain) NSMutableDictionary * fetchedRecordsByID;


- (void)setFetchedRecordsByID:(id)arg1;
- (id)fetchRecordsOperation;
- (void)setFetchRecordsOperation:(id)arg1;
- (void)_dispatchAssetURLsForRecord:(id)arg1 recordID:(id)arg2 pcs:(struct _OpaquePCSShareProtection { }*)arg3 error:(id)arg4;
- (id)fetchedRecordsByID;
- (id)_expandTemplateURL:(id)arg1 fieldValues:(id)arg2;
- (void)_fetchPCSForRecords;
- (void)_fetchRecords;
- (bool)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)setAssetPublishedBlock:(id)arg1;
- (id)assetPublishedBlock;
- (void)setURLOptions:(unsigned long long)arg1;
- (unsigned long long)URLOptions;
- (void)setRequestedTTL:(unsigned long long)arg1;
- (unsigned long long)requestedTTL;
- (void)setFileNamesByAssetFieldNames:(id)arg1;
- (id)fileNamesByAssetFieldNames;
- (void)setRecordIDs:(id)arg1;
- (id)recordIDs;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)cancel;
- (void).cxx_destruct;

@end

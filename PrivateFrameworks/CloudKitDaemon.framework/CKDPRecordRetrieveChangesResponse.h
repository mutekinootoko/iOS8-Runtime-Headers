/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData, NSMutableArray;

@interface CKDPRecordRetrieveChangesResponse : PBCodable <NSCopying> {
    NSMutableArray *_changedRecords;
    NSData *_clientChangeToken;
    int _status;
    NSData *_syncContinuationToken;
    struct { 
        unsigned int status : 1; 
    } _has;
}

@property(retain) NSMutableArray * changedRecords;
@property(readonly) bool hasSyncContinuationToken;
@property(retain) NSData * syncContinuationToken;
@property(readonly) bool hasClientChangeToken;
@property(retain) NSData * clientChangeToken;
@property bool hasStatus;
@property int status;


- (id)syncContinuationToken;
- (void)setChangedRecords:(id)arg1;
- (id)changedRecords;
- (bool)hasSyncContinuationToken;
- (void)setSyncContinuationToken:(id)arg1;
- (id)changedRecordAtIndex:(unsigned long long)arg1;
- (void)clearChangedRecords;
- (unsigned long long)changedRecordsCount;
- (void)addChangedRecord:(id)arg1;
- (bool)hasStatus;
- (id)clientChangeToken;
- (bool)hasClientChangeToken;
- (void)setClientChangeToken:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end

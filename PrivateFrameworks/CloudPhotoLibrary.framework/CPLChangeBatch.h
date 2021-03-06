/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CPLChangeBatch : NSObject <NSSecureCoding, NSFastEnumeration> {
    NSMutableArray *_records;
    NSMutableDictionary *_localResources;
}

@property(readonly) NSArray * records;

+ (bool)supportsSecureCoding;

- (id)_initWithRecords:(id)arg1;
- (id)initWithRecords:(id)arg1;
- (id)summaryDescription;
- (void)appendLocalResources:(id)arg1 forItemWithCloudIdentifier:(id)arg2;
- (id)localResourceOfType:(unsigned long long)arg1 forItemWithCloudIdentifier:(id)arg2;
- (void)extractInitialDownloadBatch:(id*)arg1 shouldConsiderRecordFilter:(id)arg2;
- (void)sortBatch;
- (void)_setRecords:(id)arg1;
- (void)_addChange:(id)arg1 resultBatch:(id)arg2 changesPerIdentifier:(id)arg3 changesPerClass:(id)arg4;
- (void)addRecordsFromBatch:(id)arg1;
- (id)cplFullDescription;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)init;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)count;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)addRecord:(id)arg1;
- (id)records;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLPhotoLibrary;

@interface PLAssetToAlbumOrderingManager : NSObject  {
    PLPhotoLibrary *_photoLibrary;
}

+ (void)logAlbum:(id)arg1;
+ (void)logAssetsToOrder:(id)arg1;
+ (id)sharedManager;

- (void)updateAlbumAssetsUsingTransientOrdersByAlbumOID:(id)arg1 inLibrary:(id)arg2;
- (bool)hasValidOrderKey:(id)arg1;
- (void)_updateOrderOfChildrenInParent:(id)arg1 usingTransientOrders:(id)arg2;
- (long long)compareOrderKeyObject:(id)arg1 withObject:(id)arg2;
- (void)_updateOrderKeysForParent:(id)arg1 childToOrderKeyMap:(id)arg2;
- (void)fixupOrderKeys:(id)arg1 withSpacing:(long long)arg2;
- (long long)defaultOrderKeySpacing;
- (void)ensureValidOrderKey:(id)arg1;
- (void)updateOrderValuesForAlbums:(id)arg1 managedObjectContext:(id)arg2;
- (void)updateAlbumCounts:(id)arg1 inLibrary:(id)arg2 completionHandler:(id)arg3;
- (void)updateOrderValuesForAlbumOIDs:(id)arg1 inLibrary:(id)arg2 completionHandler:(id)arg3;
- (void)updateChildCollectionsUsingTransientOrdersByFolderOID:(id)arg1 inLibrary:(id)arg2;
- (id)photoLibrary;
- (id)init;
- (void)dealloc;

@end

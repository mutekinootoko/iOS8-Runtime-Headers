/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIArtworkList, NSString;

@interface SKUIRedeemItem : SKUIItem  {
    SKUIArtworkList *artworks;
    long long itemIdentifier;
    NSString *title;
    long long itemKind;
}

@property(retain) NSString * title;
@property long long itemIdentifier;
@property(retain) SKUIArtworkList * artworks;
@property long long itemKind;


- (void)setItemKind:(long long)arg1;
- (void)setArtworks:(id)arg1;
- (id)largestArtworkURL;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ageBandRange;
- (id)artworks;
- (id)artworkURLForSize:(long long)arg1;
- (long long)itemKind;
- (void)setItemIdentifier:(long long)arg1;
- (long long)itemIdentifier;
- (void)setTitle:(id)arg1;
- (id)title;
- (void).cxx_destruct;

@end

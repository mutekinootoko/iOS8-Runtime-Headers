/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class TKTonePickerViewController;

@interface ABTonePickerViewController : ABPickerViewController  {
    TKTonePickerViewController *_tonePickerViewController;
}

@property(retain,readonly) TKTonePickerViewController * tonePickerViewController;


- (void)ringtoneSaveButtonClicked:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (id)tonePickerViewController;
- (id)initWithAlertType:(int)arg1;
- (double)ab_heightToFitForViewInPopoverView;
- (void)setStyleProvider:(id)arg1;
- (id)init;
- (void)_getRotationContentSettings:(struct { boolx1; boolx2; boolx3; boolx4; double x5; int x6; }*)arg1;
- (void)loadView;

@end

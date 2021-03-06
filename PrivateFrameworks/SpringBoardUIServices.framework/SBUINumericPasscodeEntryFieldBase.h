/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class NSMutableCharacterSet;

@interface SBUINumericPasscodeEntryFieldBase : SBUIPasscodeEntryField  {
    NSMutableCharacterSet *_numericTrimmingSet;
    unsigned long long _maxNumbersAllowed;
    bool_allowsNewlineAcceptance;
    bool_autoAcceptWhenMaxNumbersMet;
}

@property unsigned long long maxNumbersAllowed;
@property bool allowsNewlineAcceptance;
@property bool autoAcceptWhenMaxNumbersMet;


- (bool)autoAcceptWhenMaxNumbersMet;
- (unsigned long long)maxNumbersAllowed;
- (bool)allowsNewlineAcceptance;
- (void)_reallyAppendString:(id)arg1;
- (bool)_hasMaxDigitsSpecified;
- (bool)shouldInsertPasscodeText:(id)arg1;
- (void)setAutoAcceptWhenMaxNumbersMet:(bool)arg1;
- (void)setAllowsNewlineAcceptance:(bool)arg1;
- (void)_deleteLastCharacter;
- (void)_appendString:(id)arg1;
- (void)setMaxNumbersAllowed:(unsigned long long)arg1;
- (id)initWithDefaultSizeAndLightStyle:(bool)arg1;
- (bool)resignFirstResponder;
- (void)dealloc;

@end

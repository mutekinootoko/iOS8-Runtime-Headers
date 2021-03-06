/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableArray, MSVSystemDialogOptions;

@interface MSVSystemDialog : NSObject  {
    NSMutableArray *_textFields;
    struct __CFUserNotification { } *_presentedUserNotification;
    struct __CFRunLoopSource { } *_activeRunLoopSource;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _pendingCompletion;

    MSVSystemDialogOptions *_options;
}

@property(readonly) MSVSystemDialogOptions * options;
@property(readonly) NSArray * textFields;
@property struct __CFUserNotification { }* presentedUserNotification;
@property struct __CFRunLoopSource { }* activeRunLoopSource;
@property(copy) id pendingCompletion;

+ (id)passwordAlertWithOptions:(id)arg1;
+ (id)systemDialogWithOptions:(id)arg1;

- (void)presentWithCompletion:(id)arg1;
- (void)clearTextFields;
- (void)addTextFieldWithTitle:(id)arg1 secure:(bool)arg2;
- (id)pendingCompletion;
- (struct __CFRunLoopSource { }*)activeRunLoopSource;
- (struct __CFUserNotification { }*)presentedUserNotification;
- (void)setActiveRunLoopSource:(struct __CFRunLoopSource { }*)arg1;
- (void)setPendingCompletion:(id)arg1;
- (void)setPresentedUserNotification:(struct __CFUserNotification { }*)arg1;
- (void)addTextField:(id)arg1;
- (id)options;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithOptions:(id)arg1;
- (id)textFields;

@end

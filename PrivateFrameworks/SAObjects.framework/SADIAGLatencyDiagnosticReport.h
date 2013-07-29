/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SADIAGLatencyDiagnosticReport : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * diagnosticReports;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)latencyDiagnosticReportWithDictionary:(id)arg1 context:(id)arg2;
+ (id)latencyDiagnosticReport;

- (void)setDiagnosticReports:(id)arg1;
- (id)diagnosticReports;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
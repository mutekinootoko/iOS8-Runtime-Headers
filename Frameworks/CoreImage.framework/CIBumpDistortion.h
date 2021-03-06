/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CIBumpDistortion : CIFilter  {
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputScale;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputCenter;
@property(retain) NSNumber * inputRadius;
@property(retain) NSNumber * inputScale;

+ (id)customAttributes;

- (id)inputCenter;
- (void)setInputCenter:(id)arg1;
- (id)_kernel;
- (id)inputRadius;
- (void)setInputRadius:(id)arg1;
- (id)inputScale;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setInputScale:(id)arg1;

@end

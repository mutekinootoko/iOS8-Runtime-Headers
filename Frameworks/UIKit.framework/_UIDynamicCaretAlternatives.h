/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIView;

@interface _UIDynamicCaretAlternatives : UIView  {
    UIView *_verticalDivider;
    UIView *_horizontalDivider;
    NSArray *_alternativesButtons;
}

@property(retain) UIView * verticalDivider;
@property(retain) UIView * horizontalDivider;
@property(retain) NSArray * alternativesButtons;


- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)highlightButtonAtIndex:(long long)arg1;
- (long long)indexOfButtonForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setButtonLabels:(id)arg1;
- (id)alternativesButtons;
- (void)setAlternativesButtons:(id)arg1;
- (id)horizontalDivider;
- (void)setHorizontalDivider:(id)arg1;
- (id)verticalDivider;
- (void)setVerticalDivider:(id)arg1;
- (void)layoutSubviews;

@end

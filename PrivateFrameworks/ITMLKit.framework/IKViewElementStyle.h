/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class UIColor, NSString, NSMutableDictionary, NSURL, NSNumber;

@interface IKViewElementStyle : NSObject  {
    NSString *_classSelector;
    NSMutableDictionary *_styleDict;
}

@property(retain) NSString * classSelector;
@property(readonly) UIColor * color;
@property(readonly) UIColor * backgroundColor;
@property(readonly) UIColor * borderColor;
@property(readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } borderWidths;
@property(readonly) double fontSize;
@property(readonly) NSString * fontWeight;
@property(readonly) long long maxTextLines;
@property(readonly) unsigned long long textAlignment;
@property(readonly) unsigned long long elementAlignment;
@property(readonly) unsigned long long elementPosition;
@property(readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } elementPadding;
@property(readonly) long long columnCount;
@property(readonly) NSString * columnType;
@property(readonly) NSString * columnItemType;
@property(readonly) NSString * rowHeight;
@property(readonly) NSString * itemWidth;
@property(readonly) NSString * itemHeight;
@property(readonly) NSURL * imagePlaceholderURL;
@property(readonly) long long reflectImage;
@property(readonly) long long fillImage;
@property(readonly) unsigned long long imagePosition;
@property(readonly) NSString * imageTreatment;
@property(readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property(readonly) NSString * transition;
@property(readonly) NSNumber * transitionInterval;
@property(readonly) NSString * labelsState;
@property(readonly) unsigned long long ordinalMaxLength;
@property(readonly) NSString * lockupType;
@property(readonly) NSString * visibility;
@property(retain) NSMutableDictionary * styleDict;

+ (id)elementStyleWithSelector:(id)arg1 inlineStyle:(id)arg2 aggregatingStyles:(id)arg3;
+ (id)elementStylesFromString:(id)arg1;
+ (unsigned long long)transitionFromString:(id)arg1;
+ (unsigned long long)positionFromString:(id)arg1;
+ (unsigned long long)alignmentFromString:(id)arg1;
+ (void)registerStyle:(id)arg1 withType:(unsigned long long)arg2;
+ (void)initialize;

- (void)setStyleDict:(id)arg1;
- (void)setClassSelector:(id)arg1;
- (id)classSelector;
- (unsigned long long)ordinalMaxLength;
- (id)labelsState;
- (id)transitionInterval;
- (id)itemHeight;
- (id)columnItemType;
- (id)columnType;
- (long long)maxTextLines;
- (id)valueForStyle:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsFromString:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformFromString:(id)arg1;
- (id)_urlFromString:(id)arg1;
- (id)_newColorFromString:(id)arg1;
- (id)_fontSizeFromString:(id)arg1;
- (id)_doubleFromString:(id)arg1;
- (id)_numberFromString:(id)arg1;
- (id)styleDict;
- (void)_parse:(id)arg1;
- (void)_addElementStyle:(id)arg1;
- (id)initWithClassSelector:(id)arg1;
- (id)initWithString:(id)arg1 classSelector:(id)arg2;
- (long long)reflectImage;
- (unsigned long long)imagePosition;
- (id)imagePlaceholderURL;
- (unsigned long long)elementAlignment;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })elementPadding;
- (id)lockupType;
- (id)imageTreatment;
- (unsigned long long)elementPosition;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })borderWidths;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (id)visibility;
- (id)fontWeight;
- (double)fontSize;
- (id)borderColor;
- (id)backgroundColor;
- (id)color;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (void).cxx_destruct;
- (id)description;
- (long long)fillImage;
- (long long)columnCount;
- (id)itemWidth;
- (id)transition;
- (unsigned long long)textAlignment;
- (id)rowHeight;

@end
/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class UIColor, NSArray, NSAttributedString, NSMutableArray;

@interface IKTextElement : IKViewElement  {
    NSAttributedString *_text;
    unsigned long long _textStyle;
    NSMutableArray *_textBadges;
}

@property(retain,readonly) NSAttributedString * text;
@property(readonly) NSArray * badges;
@property(readonly) unsigned long long textStyle;
@property(readonly) long long maxLines;
@property(readonly) unsigned long long alignment;
@property(readonly) UIColor * color;
@property(retain) NSMutableArray * textBadges;

+ (bool)shouldParseChildDOMElements;

- (void)setTextBadges:(id)arg1;
- (id)attributedStringWithFont:(id)arg1;
- (id)badges;
- (long long)maxLines;
- (id)_stringFromNumberElement:(id)arg1;
- (id)_stringFromDurationElement:(id)arg1;
- (id)_stringFromDateElement:(id)arg1;
- (id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3;
- (id)accessibilityText;
- (id)textBadges;
- (unsigned long long)_styleForTagName:(id)arg1;
- (id)_attributedStringFromNode:(id)arg1 elementFactory:(id)arg2;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)text;
- (unsigned long long)alignment;
- (id)color;
- (unsigned long long)textStyle;
- (void).cxx_destruct;

@end

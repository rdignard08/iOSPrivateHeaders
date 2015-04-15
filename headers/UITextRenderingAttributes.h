
@protocol NSCopying;
@interface UITextRenderingAttributes : NSObject <NSCopying> {

    @"UIFont" _font;
    d _minimumFontSize;
    d _actualFontSize;
    d _lineSpacing;
    q _lineBreakMode;
    q _baselineAdjustment;
    d _trackingAdjustment;
    d _minimumTrackingAdjustment;
    d _actualTrackingAdjustment;
    q _alignment;
    BOOL _includeEmoji;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _truncationRect;
    BOOL _drawUnderline;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) init;


@end


@protocol NSCopying;
@interface UITextRenderingAttributes : NSObject <NSCopying> {

    UIFont _font;
    double _minimumFontSize;
    double _actualFontSize;
    double _lineSpacing;
    long long _lineBreakMode;
    long long _baselineAdjustment;
    double _trackingAdjustment;
    double _minimumTrackingAdjustment;
    double _actualTrackingAdjustment;
    long long _alignment;
    BOOL _includeEmoji;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _truncationRect;
    BOOL _drawUnderline;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) init;


@end

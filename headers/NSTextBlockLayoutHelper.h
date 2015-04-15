
@interface NSTextBlockLayoutHelper : NSObject {

    NSTextTableBlock* _block;
    {_NSRange="location"Q"length"Q} _charRange;
    {_NSRange="location"Q"length"Q} _glyphRange;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _layoutRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _boundsRect;
    double _lMargin;
    double _lBorder;
    double _lPadding;
    double _tMargin;
    double _tBorder;
    double _tPadding;
    double _width;
    double _height;
    double _rPadding;
    double _rBorder;
    double _rMargin;
    double _bPadding;
    double _bBorder;
    double _bMargin;
}
@property (atomic, assign, readonly) NSTextTableBlock* block;

 - (id) block;
 - (id) description;
 - (void) dealloc;
 - (id) initWithTextBlock:(id)acharRange:({_NSRange=QQ})bglyphRange:({_NSRange=QQ})clayoutRect:({CGRect={CGPoint=dd}{CGSize=dd}})dboundsRect:({CGRect={CGPoint=dd}{CGSize=dd}})econtainerWidth:(double)fallowMargins:(BOOL)gcollapseBorders:(BOOL)hallowPadding:(BOOL)i;
 - (id) initWithTextBlock:(id)acharRange:({_NSRange=QQ})btext:(id)clayoutManager:(id)dcontainerWidth:(double)ecollapseBorders:(BOOL)f;
 - (id) initWithTextBlock:(id)acharIndex:(unsigned long long)btext:(id)clayoutManager:(id)dcontainerWidth:(double)ecollapseBorders:(BOOL)f;
 - (id) initWithTextTable:(id)acharIndex:(unsigned long long)btext:(id)clayoutManager:(id)dcontainerWidth:(double)ecollapseBorders:(BOOL)f;


@end

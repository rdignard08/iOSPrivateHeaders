
@interface NSTextBlockLayoutHelper : NSObject {

    @"NSTextTableBlock" _block;
    {_NSRange="location"Q"length"Q} _charRange;
    {_NSRange="location"Q"length"Q} _glyphRange;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _layoutRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _boundsRect;
    d _lMargin;
    d _lBorder;
    d _lPadding;
    d _tMargin;
    d _tBorder;
    d _tPadding;
    d _width;
    d _height;
    d _rPadding;
    d _rBorder;
    d _rMargin;
    d _bPadding;
    d _bBorder;
    d _bMargin;
}
@property (atomic, assign, readonly) NSTextTableBlock* block;

 - (id) block;
 - (id) description;
 - (void) dealloc;
 - (id) initWithTextBlock:(id)acharRange:({_NSRange=QQ})bglyphRange:({_NSRange=QQ})clayoutRect:({CGRect={CGPoint=dd}{CGSize=dd}})dboundsRect:({CGRect={CGPoint=dd}{CGSize=dd}})econtainerWidth:(d)fallowMargins:(BOOL)gcollapseBorders:(BOOL)hallowPadding:(BOOL)i;
 - (id) initWithTextBlock:(id)acharRange:({_NSRange=QQ})btext:(id)clayoutManager:(id)dcontainerWidth:(d)ecollapseBorders:(BOOL)f;
 - (id) initWithTextBlock:(id)acharIndex:(Q)btext:(id)clayoutManager:(id)dcontainerWidth:(d)ecollapseBorders:(BOOL)f;
 - (id) initWithTextTable:(id)acharIndex:(Q)btext:(id)clayoutManager:(id)dcontainerWidth:(d)ecollapseBorders:(BOOL)f;


@end

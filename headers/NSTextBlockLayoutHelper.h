
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
 - (id) initWithTextBlock:(id)a charRange:({_NSRange=QQ})b glyphRange:({_NSRange=QQ})c layoutRect:({CGRect={CGPoint=dd}{CGSize=dd}})d boundsRect:({CGRect={CGPoint=dd}{CGSize=dd}})e containerWidth:(double)f allowMargins:(BOOL)g collapseBorders:(BOOL)h allowPadding:(BOOL)i ;
 - (id) initWithTextBlock:(id)a charRange:({_NSRange=QQ})b text:(id)c layoutManager:(id)d containerWidth:(double)e collapseBorders:(BOOL)f ;
 - (id) initWithTextBlock:(id)a charIndex:(unsigned long long)b text:(id)c layoutManager:(id)d containerWidth:(double)e collapseBorders:(BOOL)f ;
 - (id) initWithTextTable:(id)a charIndex:(unsigned long long)b text:(id)c layoutManager:(id)d containerWidth:(double)e collapseBorders:(BOOL)f ;


@end

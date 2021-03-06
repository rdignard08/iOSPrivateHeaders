
@interface NSLineFragmentRenderingContext : NSObject {

    ^v _runs;
    long long _numRuns;
    ^S _glyphs;
    ^{CGSize=dd} _advancements;
    double _leftSideDelta;
    double _lineWidth;
    double _leftControlWidth;
    double _rightControlWidth;
    double _elasticWidth;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _imageBounds;
    {?="_isRTL"b1"_vAdvance"b1"_flipped"b1"_usesSimpleTextEffects"b1"_reserved"b28} _flags;
    CUICatalog* _catalog;
    CUIStyleEffectConfiguration* _styleEffects;
}
@property (nonatomic, retain, readwrite) CUICatalog* cuiCatalog;
@property (nonatomic, retain, readwrite) CUIStyleEffectConfiguration* cuiStyleEffects;
@property (nonatomic, assign, readwrite, getter=_usesSimpleTextEffects, setter=_setUsesSimpleTextEffects:) NSNumber* usesSimpleTextEffects;
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (Vv) release;
 - (void) dealloc;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (id) cuiCatalog;
 - (id) cuiStyleEffects;
 - (BOOL) _usesSimpleTextEffects;
 - (id) initWithRuns:(^{__CFArray=})a glyphOrigin:(double)b lineFragmentWidth:(double)c elasticWidth:(double)d usesScreenFonts:(BOOL)e isRTL:(BOOL)f ;
 - (void) _setUsesSimpleTextEffects:(BOOL)a ;
 - (void) drawAtPoint:({CGPoint=dd})a inContext:(^{CGContext=})b ;
 - ({CGSize=dd}) sizeWithBehavior:(long long)a usesFontLeading:(BOOL)b baselineDelta:(^d)c ;
 - (void) getMaximumAscender:(^d)a minimumDescender:(^d)b ;
 - (double) lineFragmentWidth;
 - (double) elasticWidth;
 - (BOOL) isRTL;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) imageBounds;
 - (void) setCuiCatalog:(id)a ;
 - (void) setCuiStyleEffects:(id)a ;


@end

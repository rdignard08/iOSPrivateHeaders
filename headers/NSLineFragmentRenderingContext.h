
@interface NSLineFragmentRenderingContext : NSObject {

    ^v _runs;
    q _numRuns;
    ^S _glyphs;
    ^{CGSize=dd} _advancements;
    d _leftSideDelta;
    d _lineWidth;
    d _leftControlWidth;
    d _rightControlWidth;
    d _elasticWidth;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _imageBounds;
    {?="_isRTL"b1"_vAdvance"b1"_flipped"b1"_usesSimpleTextEffects"b1"_reserved"b28} _flags;
    @"CUICatalog" _catalog;
    @"CUIStyleEffectConfiguration" _styleEffects;
}
@property (nonatomic, retain, readwrite) CUICatalog* cuiCatalog;
@property (nonatomic, retain, readwrite) CUIStyleEffectConfiguration* cuiStyleEffects;
@property (nonatomic, assign, readwrite, _usesSimpleTextEffects, _setUsesSimpleTextEffects:) NSNumber* usesSimpleTextEffects;
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
 - (id) initWithRuns:(^{__CFArray=})aglyphOrigin:(d)blineFragmentWidth:(d)celasticWidth:(d)dusesScreenFonts:(BOOL)eisRTL:(BOOL)f;
 - (void) _setUsesSimpleTextEffects:(BOOL)a;
 - (void) drawAtPoint:({CGPoint=dd})ainContext:(^{CGContext=})b;
 - ({CGSize=dd}) sizeWithBehavior:(q)ausesFontLeading:(BOOL)bbaselineDelta:(^d)c;
 - (void) getMaximumAscender:(^d)aminimumDescender:(^d)b;
 - (d) lineFragmentWidth;
 - (d) elasticWidth;
 - (BOOL) isRTL;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) imageBounds;
 - (void) setCuiCatalog:(id)a;
 - (void) setCuiStyleEffects:(id)a;


@end

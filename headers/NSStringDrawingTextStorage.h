
@protocol NSLayoutManagerDelegate;
@interface NSStringDrawingTextStorage : NSTextStorage <NSLayoutManagerDelegate> {

    @"NSConcreteNotifyingMutableAttributedString" _contents;
    @"NSLayoutManager" _layoutManager;
    @"NSTextContainer" _textContainer;
    double _baselineDelta;
    {?="_typesetterBehavior"b4"_needToFlushCache"b1"_baselineMode"b1"_forceWordWrapping"b1"_usesSimpleTextEffects"b1"_reserved"b24} _sdflags;
    @"CUICatalog" _catalog;
    @"CUIStyleEffectConfiguration" _styleEffects;
    double _defaultTighteningFactor;
}
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (void) _setHasCustomSettings:(BOOL)a;
 + (BOOL) _hasCustomSettings;
 + (id) stringDrawingTextStorage;

 - (Vv) release;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (id) string;
 - (id) attributesAtIndex:(unsigned long long)aeffectiveRange:(^{_NSRange=QQ})b;
 - (id) attribute:(id)aatIndex:(unsigned long long)beffectiveRange:(^{_NSRange=QQ})c;
 - (id) attribute:(id)aatIndex:(unsigned long long)blongestEffectiveRange:(^{_NSRange=QQ})cinRange:({_NSRange=QQ})d;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithString:(id)b;
 - (void) setAttributes:(id)arange:({_NSRange=QQ})b;
 - (void) addAttribute:(id)avalue:(id)brange:({_NSRange=QQ})c;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithAttributedString:(id)b;
 - (id) textContainer;
 - (unsigned long long) length;
 - (id) init;
 - (id) cuiCatalog;
 - (id) cuiStyleEffects;
 - (BOOL) _usesSimpleTextEffects;
 - (id) layoutManager;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) usedRectForTextContainer:(id)a;
 - (BOOL) _isStringDrawingTextStorage;
 - (long long) typesetterBehavior;
 - (void) _setBaselineDelta:(double)a;
 - (BOOL) _baselineMode;
 - (BOOL) _forceWordWrapping;
 - (void) _setForceWordWrapping:(BOOL)a;
 - (double) defaultTighteningFactor;
 - (void) setDefaultTighteningFactor:(double)a;
 - (void) _setUsesSimpleTextEffects:(BOOL)a;
 - (void) setCuiCatalog:(id)a;
 - (void) setCuiStyleEffects:(id)a;
 - (BOOL) _shouldSetOriginalFontAttribute;
 - (id) textContainerForAttributedString:(id)acontainerSize:({CGSize=dd})blineFragmentPadding:(double)c;
 - (void) _setBaselineMode:(BOOL)a;
 - (void) drawTextContainer:(id)awithRect:({CGRect={CGPoint=dd}{CGSize=dd}})bgraphicsContext:(^{CGContext=})cbaselineMode:(BOOL)dscrollable:(BOOL)epadding:(double)f;
 - (double) _baselineDelta;
 - ({CGPoint=dd}) defaultTextContainerOriginForRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) textContainerForAttributedString:(id)a;
 - (void) fontSetChanged;
 - (void) processEditing;


@end

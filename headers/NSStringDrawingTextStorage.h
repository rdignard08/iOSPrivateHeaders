
@protocol NSLayoutManagerDelegate;
@interface NSStringDrawingTextStorage : NSTextStorage <NSLayoutManagerDelegate> {

    @"NSConcreteNotifyingMutableAttributedString" _contents;
    @"NSLayoutManager" _layoutManager;
    @"NSTextContainer" _textContainer;
    d _baselineDelta;
    {?="_typesetterBehavior"b4"_needToFlushCache"b1"_baselineMode"b1"_forceWordWrapping"b1"_usesSimpleTextEffects"b1"_reserved"b24} _sdflags;
    @"CUICatalog" _catalog;
    @"CUIStyleEffectConfiguration" _styleEffects;
    d _defaultTighteningFactor;
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
 - (id) attributesAtIndex:(Q)aeffectiveRange:(^{_NSRange=QQ})b;
 - (id) attribute:(id)aatIndex:(Q)beffectiveRange:(^{_NSRange=QQ})c;
 - (id) attribute:(id)aatIndex:(Q)blongestEffectiveRange:(^{_NSRange=QQ})cinRange:({_NSRange=QQ})d;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithString:(id)b;
 - (void) setAttributes:(id)arange:({_NSRange=QQ})b;
 - (void) addAttribute:(id)avalue:(id)brange:({_NSRange=QQ})c;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithAttributedString:(id)b;
 - (id) textContainer;
 - (Q) length;
 - (id) init;
 - (id) cuiCatalog;
 - (id) cuiStyleEffects;
 - (BOOL) _usesSimpleTextEffects;
 - (id) layoutManager;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) usedRectForTextContainer:(id)a;
 - (BOOL) _isStringDrawingTextStorage;
 - (q) typesetterBehavior;
 - (void) _setBaselineDelta:(d)a;
 - (BOOL) _baselineMode;
 - (BOOL) _forceWordWrapping;
 - (void) _setForceWordWrapping:(BOOL)a;
 - (d) defaultTighteningFactor;
 - (void) setDefaultTighteningFactor:(d)a;
 - (void) _setUsesSimpleTextEffects:(BOOL)a;
 - (void) setCuiCatalog:(id)a;
 - (void) setCuiStyleEffects:(id)a;
 - (BOOL) _shouldSetOriginalFontAttribute;
 - (id) textContainerForAttributedString:(id)acontainerSize:({CGSize=dd})blineFragmentPadding:(d)c;
 - (void) _setBaselineMode:(BOOL)a;
 - (void) drawTextContainer:(id)awithRect:({CGRect={CGPoint=dd}{CGSize=dd}})bgraphicsContext:(^{CGContext=})cbaselineMode:(BOOL)dscrollable:(BOOL)epadding:(d)f;
 - (d) _baselineDelta;
 - ({CGPoint=dd}) defaultTextContainerOriginForRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) textContainerForAttributedString:(id)a;
 - (void) fontSetChanged;
 - (void) processEditing;


@end

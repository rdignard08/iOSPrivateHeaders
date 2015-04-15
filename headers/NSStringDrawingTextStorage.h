
@protocol NSLayoutManagerDelegate;
@interface NSStringDrawingTextStorage : NSTextStorage <NSLayoutManagerDelegate> {

    NSConcreteNotifyingMutableAttributedString* _contents;
    NSLayoutManager* _layoutManager;
    NSTextContainer* _textContainer;
    double _baselineDelta;
    {?="_typesetterBehavior"b4"_needToFlushCache"b1"_baselineMode"b1"_forceWordWrapping"b1"_usesSimpleTextEffects"b1"_reserved"b24} _sdflags;
    CUICatalog* _catalog;
    CUIStyleEffectConfiguration* _styleEffects;
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
 - (id) attributesAtIndex:(unsigned long long)a effectiveRange:(^{_NSRange=QQ})b ;
 - (id) attribute:(id)a atIndex:(unsigned long long)b effectiveRange:(^{_NSRange=QQ})c ;
 - (id) attribute:(id)a atIndex:(unsigned long long)b longestEffectiveRange:(^{_NSRange=QQ})c inRange:({_NSRange=QQ})d ;
 - (void) replaceCharactersInRange:({_NSRange=QQ})a withString:(id)b ;
 - (void) setAttributes:(id)a range:({_NSRange=QQ})b ;
 - (void) addAttribute:(id)a value:(id)b range:({_NSRange=QQ})c ;
 - (void) replaceCharactersInRange:({_NSRange=QQ})a withAttributedString:(id)b ;
 - (id) textContainer;
 - (unsigned long long) length;
 - (id) init;
 - (id) cuiCatalog;
 - (id) cuiStyleEffects;
 - (BOOL) _usesSimpleTextEffects;
 - (id) layoutManager;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) usedRectForTextContainer:(id)a ;
 - (BOOL) _isStringDrawingTextStorage;
 - (long long) typesetterBehavior;
 - (void) _setBaselineDelta:(double)a ;
 - (BOOL) _baselineMode;
 - (BOOL) _forceWordWrapping;
 - (void) _setForceWordWrapping:(BOOL)a ;
 - (double) defaultTighteningFactor;
 - (void) setDefaultTighteningFactor:(double)a ;
 - (void) _setUsesSimpleTextEffects:(BOOL)a ;
 - (void) setCuiCatalog:(id)a ;
 - (void) setCuiStyleEffects:(id)a ;
 - (BOOL) _shouldSetOriginalFontAttribute;
 - (id) textContainerForAttributedString:(id)a containerSize:({CGSize=dd})b lineFragmentPadding:(double)c ;
 - (void) _setBaselineMode:(BOOL)a ;
 - (void) drawTextContainer:(id)a withRect:({CGRect={CGPoint=dd}{CGSize=dd}})b graphicsContext:(^{CGContext=})c baselineMode:(BOOL)d scrollable:(BOOL)e padding:(double)f ;
 - (double) _baselineDelta;
 - ({CGPoint=dd}) defaultTextContainerOriginForRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) textContainerForAttributedString:(id)a ;
 - (void) fontSetChanged;
 - (void) processEditing;


@end

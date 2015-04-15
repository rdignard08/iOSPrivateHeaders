
@interface _UICascadingTextStorage : NSConcreteTextStorage {

    NSMutableDictionary* _defaultAttributes;
}
 + (id) defaultFont;

 - (void) dealloc;
 - (id) attributesAtIndex:(unsigned long long)a effectiveRange:(^{_NSRange=QQ})b ;
 - (id) attribute:(id)a atIndex:(unsigned long long)b effectiveRange:(^{_NSRange=QQ})c ;
 - (id) attributesAtIndex:(unsigned long long)a longestEffectiveRange:(^{_NSRange=QQ})b inRange:({_NSRange=QQ})c ;
 - (id) attribute:(id)a atIndex:(unsigned long long)b longestEffectiveRange:(^{_NSRange=QQ})c inRange:({_NSRange=QQ})d ;
 - (void) setTextAlignment:(long long)a ;
 - (void) setTextColor:(id)a ;
 - (void) setFont:(id)a ;
 - (id) textColor;
 - (void) setDefaultAttributes:(id)a ;
 - (long long) textAlignment;
 - (id) defaultAttributes;
 - (long long) _ui_resolvedTextAlignment;
 - (id) _defaultAttributes;
 - (id) _shadow;
 - (void) _setShadow:(id)a ;
 - (void) setShadowBlur:(double)a ;
 - (double) shadowBlur;
 - (void) _restoreOriginalFontAttribute;
 - (void) setShadowOffset:({CGSize=dd})a ;
 - (void) setShadowColor:(id)a ;
 - (BOOL) _shouldSetOriginalFontAttribute;
 - ({CGSize=dd}) shadowOffset;
 - (id) shadowColor;
 - (id) font;
 - (long long) lineBreakMode;
 - (void) setLineBreakMode:(long long)a ;


@end

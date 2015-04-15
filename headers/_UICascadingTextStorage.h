
@interface _UICascadingTextStorage : NSConcreteTextStorage {

    NSMutableDictionary _defaultAttributes;
}
 + (id) defaultFont;

 - (void) dealloc;
 - (id) attributesAtIndex:(unsigned long long)aeffectiveRange:(^{_NSRange=QQ})b;
 - (id) attribute:(id)aatIndex:(unsigned long long)beffectiveRange:(^{_NSRange=QQ})c;
 - (id) attributesAtIndex:(unsigned long long)alongestEffectiveRange:(^{_NSRange=QQ})binRange:({_NSRange=QQ})c;
 - (id) attribute:(id)aatIndex:(unsigned long long)blongestEffectiveRange:(^{_NSRange=QQ})cinRange:({_NSRange=QQ})d;
 - (void) setTextAlignment:(long long)a;
 - (void) setTextColor:(id)a;
 - (void) setFont:(id)a;
 - (id) textColor;
 - (void) setDefaultAttributes:(id)a;
 - (long long) textAlignment;
 - (id) defaultAttributes;
 - (long long) _ui_resolvedTextAlignment;
 - (id) _defaultAttributes;
 - (id) _shadow;
 - (void) _setShadow:(id)a;
 - (void) setShadowBlur:(double)a;
 - (double) shadowBlur;
 - (void) _restoreOriginalFontAttribute;
 - (void) setShadowOffset:({CGSize=dd})a;
 - (void) setShadowColor:(id)a;
 - (BOOL) _shouldSetOriginalFontAttribute;
 - ({CGSize=dd}) shadowOffset;
 - (id) shadowColor;
 - (id) font;
 - (long long) lineBreakMode;
 - (void) setLineBreakMode:(long long)a;


@end

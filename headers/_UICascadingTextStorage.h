
@interface _UICascadingTextStorage : NSConcreteTextStorage {

    @"NSMutableDictionary" _defaultAttributes;
}
 + (id) defaultFont;

 - (void) dealloc;
 - (id) attributesAtIndex:(Q)aeffectiveRange:(^{_NSRange=QQ})b;
 - (id) attribute:(id)aatIndex:(Q)beffectiveRange:(^{_NSRange=QQ})c;
 - (id) attributesAtIndex:(Q)alongestEffectiveRange:(^{_NSRange=QQ})binRange:({_NSRange=QQ})c;
 - (id) attribute:(id)aatIndex:(Q)blongestEffectiveRange:(^{_NSRange=QQ})cinRange:({_NSRange=QQ})d;
 - (void) setTextAlignment:(q)a;
 - (void) setTextColor:(id)a;
 - (void) setFont:(id)a;
 - (id) textColor;
 - (void) setDefaultAttributes:(id)a;
 - (q) textAlignment;
 - (id) defaultAttributes;
 - (q) _ui_resolvedTextAlignment;
 - (id) _defaultAttributes;
 - (id) _shadow;
 - (void) _setShadow:(id)a;
 - (void) setShadowBlur:(d)a;
 - (d) shadowBlur;
 - (void) _restoreOriginalFontAttribute;
 - (void) setShadowOffset:({CGSize=dd})a;
 - (void) setShadowColor:(id)a;
 - (BOOL) _shouldSetOriginalFontAttribute;
 - ({CGSize=dd}) shadowOffset;
 - (id) shadowColor;
 - (id) font;
 - (q) lineBreakMode;
 - (void) setLineBreakMode:(q)a;


@end

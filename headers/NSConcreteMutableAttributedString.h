
@interface NSConcreteMutableAttributedString : NSMutableAttributedString {

    @"NSMutableString" mutableString;
    @"NSMutableRLEArray" mutableAttributes;
    {?="attributeFixingDisabled"b8""b24} fields;
}
 + (BOOL) supportsSecureCoding;
 + (Class) _mutableStringClass;

 - (Class) classForCoder;
 - (id) initWithString:(id)aattributes:(id)b;
 - (id) initWithAttributedString:(id)a;
 - (id) _runArrayHoldingAttributes;
 - (void) edited:(Q)arange:({_NSRange=QQ})bchangeInLength:(q)c;
 - (void) dealloc;
 - (void) finalize;
 - (id) string;
 - (id) attributesAtIndex:(Q)aeffectiveRange:(^{_NSRange=QQ})b;
 - (id) attribute:(id)aatIndex:(Q)beffectiveRange:(^{_NSRange=QQ})c;
 - (id) attribute:(id)aatIndex:(Q)blongestEffectiveRange:(^{_NSRange=QQ})cinRange:({_NSRange=QQ})d;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithString:(id)b;
 - (void) setAttributes:(id)arange:({_NSRange=QQ})b;
 - (void) addAttribute:(id)avalue:(id)brange:({_NSRange=QQ})c;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithAttributedString:(id)b;
 - (id) initWithString:(id)a;
 - (Q) length;
 - (id) init;
 - (id) initWithCoder:(id)a;


@end

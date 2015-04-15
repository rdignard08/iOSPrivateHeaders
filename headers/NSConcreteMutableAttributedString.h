
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
 - (void) edited:(unsigned long long)arange:({_NSRange=QQ})bchangeInLength:(long long)c;
 - (void) dealloc;
 - (void) finalize;
 - (id) string;
 - (id) attributesAtIndex:(unsigned long long)aeffectiveRange:(^{_NSRange=QQ})b;
 - (id) attribute:(id)aatIndex:(unsigned long long)beffectiveRange:(^{_NSRange=QQ})c;
 - (id) attribute:(id)aatIndex:(unsigned long long)blongestEffectiveRange:(^{_NSRange=QQ})cinRange:({_NSRange=QQ})d;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithString:(id)b;
 - (void) setAttributes:(id)arange:({_NSRange=QQ})b;
 - (void) addAttribute:(id)avalue:(id)brange:({_NSRange=QQ})c;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithAttributedString:(id)b;
 - (id) initWithString:(id)a;
 - (unsigned long long) length;
 - (id) init;
 - (id) initWithCoder:(id)a;


@end

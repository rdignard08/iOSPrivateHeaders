
@interface NSConcreteMutableAttributedString : NSMutableAttributedString {

    NSMutableString* mutableString;
    NSMutableRLEArray* mutableAttributes;
    {?="attributeFixingDisabled"b8""b24} fields;
}
 + (BOOL) supportsSecureCoding;
 + (Class) _mutableStringClass;

 - (Class) classForCoder;
 - (id) initWithString:(id)a attributes:(id)b ;
 - (id) initWithAttributedString:(id)a ;
 - (id) _runArrayHoldingAttributes;
 - (void) edited:(unsigned long long)a range:({_NSRange=QQ})b changeInLength:(long long)c ;
 - (void) dealloc;
 - (void) finalize;
 - (id) string;
 - (id) attributesAtIndex:(unsigned long long)a effectiveRange:(^{_NSRange=QQ})b ;
 - (id) attribute:(id)a atIndex:(unsigned long long)b effectiveRange:(^{_NSRange=QQ})c ;
 - (id) attribute:(id)a atIndex:(unsigned long long)b longestEffectiveRange:(^{_NSRange=QQ})c inRange:({_NSRange=QQ})d ;
 - (void) replaceCharactersInRange:({_NSRange=QQ})a withString:(id)b ;
 - (void) setAttributes:(id)a range:({_NSRange=QQ})b ;
 - (void) addAttribute:(id)a value:(id)b range:({_NSRange=QQ})c ;
 - (void) replaceCharactersInRange:({_NSRange=QQ})a withAttributedString:(id)b ;
 - (id) initWithString:(id)a ;
 - (unsigned long long) length;
 - (id) init;
 - (id) initWithCoder:(id)a ;


@end

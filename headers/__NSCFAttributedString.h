
@interface __NSCFAttributedString : NSMutableAttributedString {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;

 - (Class) classForCoder;
 - (id) attributedSubstringFromRange:({_NSRange=QQ})a ;
 - (void) appendAttributedString:(id)a ;
 - (BOOL) isEqualToAttributedString:(id)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (id) string;
 - (id) attributesAtIndex:(unsigned long long)a effectiveRange:(^{_NSRange=QQ})b ;
 - (id) attribute:(id)a atIndex:(unsigned long long)b effectiveRange:(^{_NSRange=QQ})c ;
 - (id) attributesAtIndex:(unsigned long long)a longestEffectiveRange:(^{_NSRange=QQ})b inRange:({_NSRange=QQ})c ;
 - (id) attribute:(id)a atIndex:(unsigned long long)b longestEffectiveRange:(^{_NSRange=QQ})c inRange:({_NSRange=QQ})d ;
 - (void) replaceCharactersInRange:({_NSRange=QQ})a withString:(id)b ;
 - (void) setAttributes:(id)a range:({_NSRange=QQ})b ;
 - (void) addAttributes:(id)a range:({_NSRange=QQ})b ;
 - (void) addAttribute:(id)a value:(id)b range:({_NSRange=QQ})c ;
 - (void) removeAttribute:(id)a range:({_NSRange=QQ})b ;
 - (void) replaceCharactersInRange:({_NSRange=QQ})a withAttributedString:(id)b ;
 - (BOOL) isEqual:(id)a ;
 - (void) deleteCharactersInRange:({_NSRange=QQ})a ;
 - (void) insertAttributedString:(id)a atIndex:(unsigned long long)b ;
 - (unsigned long long) length;
 - (void) setAttributedString:(id)a ;


@end

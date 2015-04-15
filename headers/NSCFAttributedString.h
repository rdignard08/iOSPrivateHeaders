
@interface NSCFAttributedString : NSMutableAttributedString {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;

 - (Class) classForCoder;
 - (id) attributedSubstringFromRange:({_NSRange=QQ})a;
 - (void) appendAttributedString:(id)a;
 - (BOOL) isEqualToAttributedString:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (id) string;
 - (id) attributesAtIndex:(unsigned long long)aeffectiveRange:(^{_NSRange=QQ})b;
 - (id) attribute:(id)aatIndex:(unsigned long long)beffectiveRange:(^{_NSRange=QQ})c;
 - (id) attributesAtIndex:(unsigned long long)alongestEffectiveRange:(^{_NSRange=QQ})binRange:({_NSRange=QQ})c;
 - (id) attribute:(id)aatIndex:(unsigned long long)blongestEffectiveRange:(^{_NSRange=QQ})cinRange:({_NSRange=QQ})d;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithString:(id)b;
 - (void) setAttributes:(id)arange:({_NSRange=QQ})b;
 - (void) addAttributes:(id)arange:({_NSRange=QQ})b;
 - (void) addAttribute:(id)avalue:(id)brange:({_NSRange=QQ})c;
 - (void) removeAttribute:(id)arange:({_NSRange=QQ})b;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithAttributedString:(id)b;
 - (BOOL) isEqual:(id)a;
 - (void) deleteCharactersInRange:({_NSRange=QQ})a;
 - (void) insertAttributedString:(id)aatIndex:(unsigned long long)b;
 - (unsigned long long) length;
 - (void) setAttributedString:(id)a;


@end

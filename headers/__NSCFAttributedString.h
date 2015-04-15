
@interface __NSCFAttributedString : NSMutableAttributedString {

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
 - (Q) retainCount;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (id) string;
 - (id) attributesAtIndex:(Q)aeffectiveRange:(^{_NSRange=QQ})b;
 - (id) attribute:(id)aatIndex:(Q)beffectiveRange:(^{_NSRange=QQ})c;
 - (id) attributesAtIndex:(Q)alongestEffectiveRange:(^{_NSRange=QQ})binRange:({_NSRange=QQ})c;
 - (id) attribute:(id)aatIndex:(Q)blongestEffectiveRange:(^{_NSRange=QQ})cinRange:({_NSRange=QQ})d;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithString:(id)b;
 - (void) setAttributes:(id)arange:({_NSRange=QQ})b;
 - (void) addAttributes:(id)arange:({_NSRange=QQ})b;
 - (void) addAttribute:(id)avalue:(id)brange:({_NSRange=QQ})c;
 - (void) removeAttribute:(id)arange:({_NSRange=QQ})b;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithAttributedString:(id)b;
 - (BOOL) isEqual:(id)a;
 - (void) deleteCharactersInRange:({_NSRange=QQ})a;
 - (void) insertAttributedString:(id)aatIndex:(Q)b;
 - (Q) length;
 - (void) setAttributedString:(id)a;


@end

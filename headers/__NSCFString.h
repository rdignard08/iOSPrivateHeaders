
@interface __NSCFString : NSMutableString {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;

 - (BOOL) _isCString;
 - (id) _newSubstringWithRange:({_NSRange=QQ})azone:(^{_NSZone=})b;
 - (Class) classForCoder;
 - (BOOL) hasPrefix:(id)a;
 - (Q) fastestEncoding;
 - (Q) smallestEncoding;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithString:(id)b;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (r*) cString;
 - (r*) UTF8String;
 - (Q) cStringLength;
 - (r*) cStringUsingEncoding:(Q)a;
 - (BOOL) isNSString__;
 - (Q) replaceOccurrencesOfString:(id)awithString:(id)boptions:(Q)crange:({_NSRange=QQ})d;
 - (S) characterAtIndex:(Q)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (r^S) _fastCharacterContents;
 - (r*) _fastCStringContents:(BOOL)a;
 - (BOOL) getCString:(*)amaxLength:(Q)bencoding:(Q)c;
 - (BOOL) isEqualToString:(id)a;
 - (BOOL) hasSuffix:(id)a;
 - (void) getLineStart:(^Q)aend:(^Q)bcontentsEnd:(^Q)cforRange:({_NSRange=QQ})d;
 - (void) insertString:(id)aatIndex:(Q)b;
 - (void) appendString:(id)a;
 - (void) deleteCharactersInRange:({_NSRange=QQ})a;
 - (void) appendFormat:(id)a;
 - (void) setString:(id)a;
 - (void) appendCharacters:(r^S)alength:(Q)b;
 - (Q) length;
 - (id) substringWithRange:({_NSRange=QQ})a;


@end

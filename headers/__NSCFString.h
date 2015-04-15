
@interface __NSCFString : NSMutableString {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;

 - (BOOL) _isCString;
 - (id) _newSubstringWithRange:({_NSRange=QQ})azone:(^{_NSZone=})b;
 - (Class) classForCoder;
 - (BOOL) hasPrefix:(id)a;
 - (unsigned long long) fastestEncoding;
 - (unsigned long long) smallestEncoding;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithString:(id)b;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (r*) cString;
 - (r*) UTF8String;
 - (unsigned long long) cStringLength;
 - (r*) cStringUsingEncoding:(unsigned long long)a;
 - (BOOL) isNSString__;
 - (unsigned long long) replaceOccurrencesOfString:(id)awithString:(id)boptions:(unsigned long long)crange:({_NSRange=QQ})d;
 - (unsigned short) characterAtIndex:(unsigned long long)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (r^S) _fastCharacterContents;
 - (r*) _fastCStringContents:(BOOL)a;
 - (BOOL) getCString:(char*)amaxLength:(unsigned long long)bencoding:(unsigned long long)c;
 - (BOOL) isEqualToString:(id)a;
 - (BOOL) hasSuffix:(id)a;
 - (void) getLineStart:(^Q)aend:(^Q)bcontentsEnd:(^Q)cforRange:({_NSRange=QQ})d;
 - (void) insertString:(id)aatIndex:(unsigned long long)b;
 - (void) appendString:(id)a;
 - (void) deleteCharactersInRange:({_NSRange=QQ})a;
 - (void) appendFormat:(id)a;
 - (void) setString:(id)a;
 - (void) appendCharacters:(r^S)alength:(unsigned long long)b;
 - (unsigned long long) length;
 - (id) substringWithRange:({_NSRange=QQ})a;


@end

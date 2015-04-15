
@interface __NSCFString : NSMutableString {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;

 - (BOOL) _isCString;
 - (id) _newSubstringWithRange:({_NSRange=QQ})a zone:(^{_NSZone=})b ;
 - (Class) classForCoder;
 - (BOOL) hasPrefix:(id)a ;
 - (unsigned long long) fastestEncoding;
 - (unsigned long long) smallestEncoding;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (void) replaceCharactersInRange:({_NSRange=QQ})a withString:(id)b ;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (r*) cString;
 - (r*) UTF8String;
 - (unsigned long long) cStringLength;
 - (r*) cStringUsingEncoding:(unsigned long long)a ;
 - (BOOL) isNSString__;
 - (unsigned long long) replaceOccurrencesOfString:(id)a withString:(id)b options:(unsigned long long)c range:({_NSRange=QQ})d ;
 - (unsigned short) characterAtIndex:(unsigned long long)a ;
 - (void) getCharacters:(^S)a range:({_NSRange=QQ})b ;
 - (r^S) _fastCharacterContents;
 - (r*) _fastCStringContents:(BOOL)a ;
 - (BOOL) getCString:(char*)a maxLength:(unsigned long long)b encoding:(unsigned long long)c ;
 - (BOOL) isEqualToString:(id)a ;
 - (BOOL) hasSuffix:(id)a ;
 - (void) getLineStart:(^Q)a end:(^Q)b contentsEnd:(^Q)c forRange:({_NSRange=QQ})d ;
 - (void) insertString:(id)a atIndex:(unsigned long long)b ;
 - (void) appendString:(id)a ;
 - (void) deleteCharactersInRange:({_NSRange=QQ})a ;
 - (void) appendFormat:(id)a ;
 - (void) setString:(id)a ;
 - (void) appendCharacters:(r^S)a length:(unsigned long long)b ;
 - (unsigned long long) length;
 - (id) substringWithRange:({_NSRange=QQ})a ;


@end

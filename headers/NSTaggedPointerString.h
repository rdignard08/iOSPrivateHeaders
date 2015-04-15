
@interface NSTaggedPointerString : NSObject {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (void) _setAsTaggedStringClass;

 - (BOOL) _isCString;
 - (unsigned long long) fastestEncoding;
 - (unsigned long long) smallestEncoding;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) retain;
 - (Vv) release;
 - (id) autorelease;
 - (unsigned long long) retainCount;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (r*) UTF8String;
 - (r*) cStringUsingEncoding:(unsigned long long)a ;
 - (BOOL) isNSString__;
 - (unsigned short) characterAtIndex:(unsigned long long)a ;
 - (void) getCharacters:(^S)a range:({_NSRange=QQ})b ;
 - (r^S) _fastCharacterContents;
 - (r*) _fastCStringContents:(BOOL)a ;
 - (BOOL) isEqualToString:(id)a ;
 - (BOOL) _getCString:(char*)a maxLength:(unsigned long long)b encoding:(unsigned int)c ;
 - (long long) compare:(id)a options:(unsigned long long)b range:({_NSRange=QQ})c locale:(id)d ;
 - (unsigned long long) length;
 - (BOOL) getBytes:(^v)a maxLength:(unsigned long long)b usedLength:(^Q)c encoding:(unsigned long long)d options:(unsigned long long)e range:({_NSRange=QQ})f remainingRange:(^{_NSRange=QQ})g ;
 - (id) substringWithRange:({_NSRange=QQ})a ;


@end


@interface NSTaggedPointerString : NSObject {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (void) _setAsTaggedStringClass;

 - (BOOL) _isCString;
 - (unsigned long long) fastestEncoding;
 - (unsigned long long) smallestEncoding;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) retain;
 - (Vv) release;
 - (id) autorelease;
 - (unsigned long long) retainCount;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (r*) UTF8String;
 - (r*) cStringUsingEncoding:(unsigned long long)a;
 - (BOOL) isNSString__;
 - (unsigned short) characterAtIndex:(unsigned long long)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (r^S) _fastCharacterContents;
 - (r*) _fastCStringContents:(BOOL)a;
 - (BOOL) isEqualToString:(id)a;
 - (BOOL) _getCString:(char*)amaxLength:(unsigned long long)bencoding:(unsigned int)c;
 - (long long) compare:(id)aoptions:(unsigned long long)brange:({_NSRange=QQ})clocale:(id)d;
 - (unsigned long long) length;
 - (BOOL) getBytes:(^v)amaxLength:(unsigned long long)busedLength:(^Q)cencoding:(unsigned long long)doptions:(unsigned long long)erange:({_NSRange=QQ})fremainingRange:(^{_NSRange=QQ})g;
 - (id) substringWithRange:({_NSRange=QQ})a;


@end

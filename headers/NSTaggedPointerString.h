
@interface NSTaggedPointerString : NSObject {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (void) _setAsTaggedStringClass;

 - (BOOL) _isCString;
 - (Q) fastestEncoding;
 - (Q) smallestEncoding;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) retain;
 - (Vv) release;
 - (id) autorelease;
 - (Q) retainCount;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (r*) UTF8String;
 - (r*) cStringUsingEncoding:(Q)a;
 - (BOOL) isNSString__;
 - (S) characterAtIndex:(Q)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (r^S) _fastCharacterContents;
 - (r*) _fastCStringContents:(BOOL)a;
 - (BOOL) isEqualToString:(id)a;
 - (BOOL) _getCString:(*)amaxLength:(Q)bencoding:(I)c;
 - (q) compare:(id)aoptions:(Q)brange:({_NSRange=QQ})clocale:(id)d;
 - (Q) length;
 - (BOOL) getBytes:(^v)amaxLength:(Q)busedLength:(^Q)cencoding:(Q)doptions:(Q)erange:({_NSRange=QQ})fremainingRange:(^{_NSRange=QQ})g;
 - (id) substringWithRange:({_NSRange=QQ})a;


@end

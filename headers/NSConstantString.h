
@interface NSConstantString : NSSimpleCString {

}

 - (long long) compare:(id)aoptions:(unsigned long long)brange:({_NSRange=QQ})c;
 - (unsigned long long) fastestEncoding;
 - (unsigned long long) smallestEncoding;
 - (BOOL) canBeConvertedToEncoding:(unsigned long long)a;
 - (id) initWithCharactersNoCopy:(^S)alength:(unsigned long long)b;
 - (r*) lossyCString;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) retain;
 - (Vv) release;
 - (id) autorelease;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (id) copy;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (r*) cString;
 - (unsigned long long) cStringLength;
 - (unsigned short) characterAtIndex:(unsigned long long)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (r*) _fastCStringContents:(BOOL)a;
 - (BOOL) isEqualToString:(id)a;
 - (unsigned long long) length;


@end

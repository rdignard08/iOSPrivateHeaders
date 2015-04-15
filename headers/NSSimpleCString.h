
@interface NSSimpleCString : NSString {

    char* bytes;
    int numBytes;
    int _unused;
}
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) _newSubstringWithRange:({_NSRange=QQ})azone:(^{_NSZone=})b;
 - (BOOL) hasPrefix:(id)a;
 - (long long) compare:(id)aoptions:(unsigned long long)brange:({_NSRange=QQ})c;
 - (unsigned long long) fastestEncoding;
 - (unsigned long long) smallestEncoding;
 - (BOOL) canBeConvertedToEncoding:(unsigned long long)a;
 - (id) initWithCStringNoCopy:(char*)alength:(unsigned long long)b;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (unsigned long long) cStringLength;
 - (unsigned short) characterAtIndex:(unsigned long long)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (r*) _fastCStringContents:(BOOL)a;
 - (BOOL) isEqualToString:(id)a;
 - (BOOL) hasSuffix:(id)a;
 - (unsigned long long) length;
 - (BOOL) getBytes:(^v)amaxLength:(unsigned long long)busedLength:(^Q)cencoding:(unsigned long long)doptions:(unsigned long long)erange:({_NSRange=QQ})fremainingRange:(^{_NSRange=QQ})g;
 - (id) stringByAppendingString:(id)a;


@end

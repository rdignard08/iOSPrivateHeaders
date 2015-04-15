
@interface NSSimpleCString : NSString {

    char* bytes;
    int numBytes;
    int _unused;
}
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) _newSubstringWithRange:({_NSRange=QQ})a zone:(^{_NSZone=})b ;
 - (BOOL) hasPrefix:(id)a ;
 - (long long) compare:(id)a options:(unsigned long long)b range:({_NSRange=QQ})c ;
 - (unsigned long long) fastestEncoding;
 - (unsigned long long) smallestEncoding;
 - (BOOL) canBeConvertedToEncoding:(unsigned long long)a ;
 - (id) initWithCStringNoCopy:(char*)a length:(unsigned long long)b ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (unsigned long long) cStringLength;
 - (unsigned short) characterAtIndex:(unsigned long long)a ;
 - (void) getCharacters:(^S)a range:({_NSRange=QQ})b ;
 - (r*) _fastCStringContents:(BOOL)a ;
 - (BOOL) isEqualToString:(id)a ;
 - (BOOL) hasSuffix:(id)a ;
 - (unsigned long long) length;
 - (BOOL) getBytes:(^v)a maxLength:(unsigned long long)b usedLength:(^Q)c encoding:(unsigned long long)d options:(unsigned long long)e range:({_NSRange=QQ})f remainingRange:(^{_NSRange=QQ})g ;
 - (id) stringByAppendingString:(id)a ;


@end

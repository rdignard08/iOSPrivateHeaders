
@interface NSCheapMutableString : NSMutableString {

    (?="fat"^S"thin"*) contents;
    {?="isFat"b1"freeWhenDone"b1"refs"b30} flags;
    unsigned long long numCharacters;
    ^v _reserved;
}

 - (unsigned long long) fastestEncoding;
 - (r*) lossyCString;
 - (void) setContentsNoCopy:(^v)a length:(unsigned long long)b freeWhenDone:(BOOL)c isUnicode:(BOOL)d ;
 - (void) dealloc;
 - (void) finalize;
 - (r*) cString;
 - (unsigned long long) cStringLength;
 - (unsigned short) characterAtIndex:(unsigned long long)a ;
 - (void) getCharacters:(^S)a range:({_NSRange=QQ})b ;
 - (unsigned long long) length;
 - (BOOL) getBytes:(^v)a maxLength:(unsigned long long)b usedLength:(^Q)c encoding:(unsigned long long)d options:(unsigned long long)e range:({_NSRange=QQ})f remainingRange:(^{_NSRange=QQ})g ;


@end

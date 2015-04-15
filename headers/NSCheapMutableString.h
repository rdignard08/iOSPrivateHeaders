
@interface NSCheapMutableString : NSMutableString {

    (?="fat"^S"thin"*) contents;
    {?="isFat"b1"freeWhenDone"b1"refs"b30} flags;
    unsigned long long numCharacters;
    ^v _reserved;
}

 - (unsigned long long) fastestEncoding;
 - (r*) lossyCString;
 - (void) setContentsNoCopy:(^v)alength:(unsigned long long)bfreeWhenDone:(BOOL)cisUnicode:(BOOL)d;
 - (void) dealloc;
 - (void) finalize;
 - (r*) cString;
 - (unsigned long long) cStringLength;
 - (unsigned short) characterAtIndex:(unsigned long long)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (unsigned long long) length;
 - (BOOL) getBytes:(^v)amaxLength:(unsigned long long)busedLength:(^Q)cencoding:(unsigned long long)doptions:(unsigned long long)erange:({_NSRange=QQ})fremainingRange:(^{_NSRange=QQ})g;


@end


@interface NSCheapMutableString : NSMutableString {

    (?="fat"^S"thin"*) contents;
    {?="isFat"b1"freeWhenDone"b1"refs"b30} flags;
    Q numCharacters;
    ^v _reserved;
}

 - (Q) fastestEncoding;
 - (r*) lossyCString;
 - (void) setContentsNoCopy:(^v)alength:(Q)bfreeWhenDone:(BOOL)cisUnicode:(BOOL)d;
 - (void) dealloc;
 - (void) finalize;
 - (r*) cString;
 - (Q) cStringLength;
 - (S) characterAtIndex:(Q)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (Q) length;
 - (BOOL) getBytes:(^v)amaxLength:(Q)busedLength:(^Q)cencoding:(Q)doptions:(Q)erange:({_NSRange=QQ})fremainingRange:(^{_NSRange=QQ})g;


@end

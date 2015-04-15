
@interface __NSATSStringSegment : NSString {

    ^{__CFString=} _originalString;
    long long _originalStringLength;
    {?="location"q"length"q} _range;
    r^S _characters;
    [128S] _buffer;
}
 + (id) allocWithZone:(^{_NSZone=})a;

 - (Vv) release;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (unsigned short) characterAtIndex:(unsigned long long)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (r^S) _fastCharacterContents;
 - (unsigned long long) length;
 - (void) _setOriginalString:(id)arange:({_NSRange=QQ})b;
 - (id) initWithOriginalString:(id)arange:({_NSRange=QQ})b;


@end

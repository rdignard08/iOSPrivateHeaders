
@interface __NSATSStringSegment : NSString {

    ^{__CFString=} _originalString;
    q _originalStringLength;
    {?="location"q"length"q} _range;
    r^S _characters;
    [128S] _buffer;
}
 + (id) allocWithZone:(^{_NSZone=})a;

 - (Vv) release;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (S) characterAtIndex:(Q)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (r^S) _fastCharacterContents;
 - (Q) length;
 - (void) _setOriginalString:(id)arange:({_NSRange=QQ})b;
 - (id) initWithOriginalString:(id)arange:({_NSRange=QQ})b;


@end

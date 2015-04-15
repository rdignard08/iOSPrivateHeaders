
@interface NSBigMutableString : NSMutableString {

    {?="isStorage"b1"isUnicode"b1"hasBOM"b1"swap"b1"immutable"b1""b27} flags;
    unsigned long long length;
    (?="d"{?="data"@"NSData""dataBytes"*}"s"{?="storage"^{__CFStorage}}) contents;
}

 - (void) _checkForInvalidMutationWithSelector:(SEL)a ;
 - (BOOL) _isCString;
 - (BOOL) _getData:(^@)a encoding:(^Q)b ;
 - (BOOL) _setData:(id)a encoding:(unsigned long long)b ;
 - (BOOL) _copyStorage:(^^{__CFStorage})a encoding:(^Q)b ;
 - (BOOL) _setStorage:(^{__CFStorage=})a encoding:(unsigned long long)b ;
 - (id) initWithStorage:(^{__CFStorage=})a length:(unsigned long long)b isUnicode:(BOOL)c ;
 - (void) _markAsImmutable;
 - (id) _newSmallImmutableSubstringWithRange:({_NSRange=QQ})a zone:(^{_NSZone=})b ;
 - (id) _newBigSubstringWithRange:({_NSRange=QQ})a wantsMutable:(BOOL)b zone:(^{_NSZone=})c ;
 - (BOOL) _isMarkedAsImmutable;
 - (id) _newSubstringWithRange:({_NSRange=QQ})a zone:(^{_NSZone=})b ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) replaceCharactersInRange:({_NSRange=QQ})a withString:(id)b ;
 - (unsigned short) characterAtIndex:(unsigned long long)a ;
 - (void) getCharacters:(^S)a range:({_NSRange=QQ})b ;
 - (id) _createSubstringWithRange:({_NSRange=QQ})a ;
 - (id) initWithString:(id)a ;
 - (unsigned long long) length;


@end

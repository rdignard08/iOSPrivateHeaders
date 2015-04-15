
@interface NSBigMutableString : NSMutableString {

    {?="isStorage"b1"isUnicode"b1"hasBOM"b1"swap"b1"immutable"b1""b27} flags;
    Q length;
    (?="d"{?="data"@"NSData""dataBytes"*}"s"{?="storage"^{__CFStorage}}) contents;
}

 - (void) _checkForInvalidMutationWithSelector:(SEL)a;
 - (BOOL) _isCString;
 - (BOOL) _getData:(^@)aencoding:(^Q)b;
 - (BOOL) _setData:(id)aencoding:(Q)b;
 - (BOOL) _copyStorage:(^^{__CFStorage})aencoding:(^Q)b;
 - (BOOL) _setStorage:(^{__CFStorage=})aencoding:(Q)b;
 - (id) initWithStorage:(^{__CFStorage=})alength:(Q)bisUnicode:(BOOL)c;
 - (void) _markAsImmutable;
 - (id) _newSmallImmutableSubstringWithRange:({_NSRange=QQ})azone:(^{_NSZone=})b;
 - (id) _newBigSubstringWithRange:({_NSRange=QQ})awantsMutable:(BOOL)bzone:(^{_NSZone=})c;
 - (BOOL) _isMarkedAsImmutable;
 - (id) _newSubstringWithRange:({_NSRange=QQ})azone:(^{_NSZone=})b;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithString:(id)b;
 - (S) characterAtIndex:(Q)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (id) _createSubstringWithRange:({_NSRange=QQ})a;
 - (id) initWithString:(id)a;
 - (Q) length;


@end


@interface NSMutableStringProxyForMutableAttributedString : NSMutableString {

    NSMutableAttributedString* mutableAttributedString;
}

 - (id) initWithMutableAttributedString:(id)a ;
 - (void) dealloc;
 - (void) finalize;
 - (void) replaceCharactersInRange:({_NSRange=QQ})a withString:(id)b ;
 - (unsigned short) characterAtIndex:(unsigned long long)a ;
 - (void) getCharacters:(^S)a range:({_NSRange=QQ})b ;
 - (unsigned long long) length;


@end

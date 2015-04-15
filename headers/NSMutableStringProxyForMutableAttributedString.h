
@interface NSMutableStringProxyForMutableAttributedString : NSMutableString {

    @"NSMutableAttributedString" mutableAttributedString;
}

 - (id) initWithMutableAttributedString:(id)a;
 - (void) dealloc;
 - (void) finalize;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithString:(id)b;
 - (unsigned short) characterAtIndex:(unsigned long long)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (unsigned long long) length;


@end


@interface NSMutableStringProxyForMutableAttributedString : NSMutableString {

    @"NSMutableAttributedString" mutableAttributedString;
}

 - (id) initWithMutableAttributedString:(id)a;
 - (void) dealloc;
 - (void) finalize;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithString:(id)b;
 - (S) characterAtIndex:(Q)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (Q) length;


@end

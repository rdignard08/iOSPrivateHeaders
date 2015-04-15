
@interface NSMutableStringProxy : NSDistantObject {

}

 - (void) getCString:(char*)a maxLength:(unsigned long long)b range:({_NSRange=QQ})c remainingRange:(^{_NSRange=QQ})d ;
 - (void) getCString:(char*)a maxLength:(unsigned long long)b ;
 - (void) getCString:(char*)a ;
 - (void) getCharacters:(^S)a range:({_NSRange=QQ})b ;
 - (void) getCharacters:(^S)a ;
 - (BOOL) getBytes:(^v)a maxLength:(unsigned long long)b usedLength:(^Q)c encoding:(unsigned long long)d options:(unsigned long long)e range:({_NSRange=QQ})f remainingRange:(^{_NSRange=QQ})g ;


@end

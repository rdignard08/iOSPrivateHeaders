
@interface NSSimpleCString : NSString {

    * bytes;
    i numBytes;
    i _unused;
}
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) _newSubstringWithRange:({_NSRange=QQ})azone:(^{_NSZone=})b;
 - (BOOL) hasPrefix:(id)a;
 - (q) compare:(id)aoptions:(Q)brange:({_NSRange=QQ})c;
 - (Q) fastestEncoding;
 - (Q) smallestEncoding;
 - (BOOL) canBeConvertedToEncoding:(Q)a;
 - (id) initWithCStringNoCopy:(*)alength:(Q)b;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (Q) cStringLength;
 - (S) characterAtIndex:(Q)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (r*) _fastCStringContents:(BOOL)a;
 - (BOOL) isEqualToString:(id)a;
 - (BOOL) hasSuffix:(id)a;
 - (Q) length;
 - (BOOL) getBytes:(^v)amaxLength:(Q)busedLength:(^Q)cencoding:(Q)doptions:(Q)erange:({_NSRange=QQ})fremainingRange:(^{_NSRange=QQ})g;
 - (id) stringByAppendingString:(id)a;


@end

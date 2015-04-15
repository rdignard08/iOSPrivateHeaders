
@interface NSConstantString : NSSimpleCString {

}

 - (q) compare:(id)aoptions:(Q)brange:({_NSRange=QQ})c;
 - (Q) fastestEncoding;
 - (Q) smallestEncoding;
 - (BOOL) canBeConvertedToEncoding:(Q)a;
 - (id) initWithCharactersNoCopy:(^S)alength:(Q)b;
 - (r*) lossyCString;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) retain;
 - (Vv) release;
 - (id) autorelease;
 - (Q) retainCount;
 - (void) dealloc;
 - (id) copy;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (r*) cString;
 - (Q) cStringLength;
 - (S) characterAtIndex:(Q)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (r*) _fastCStringContents:(BOOL)a;
 - (BOOL) isEqualToString:(id)a;
 - (Q) length;


@end

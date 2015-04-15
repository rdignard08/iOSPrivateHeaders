
@interface NSPlaceholderMutableString : NSMutableString {

}

 - (id) initWithCharactersNoCopy:(^S)alength:(Q)bfreeWhenDone:(BOOL)c;
 - (id) initWithBytesNoCopy:(^v)alength:(Q)bencoding:(Q)cfreeWhenDone:(BOOL)d;
 - (id) initWithCString:(r*)aencoding:(Q)b;
 - (id) initWithBytes:(r^v)alength:(Q)bencoding:(Q)c;
 - (id) initWithFormat:(id)alocale:(id)barguments:([1{__va_list_tag=II^v^v}])c;
 - (id) initWithCStringNoCopy:(*)alength:(Q)bfreeWhenDone:(BOOL)c;
 - (id) retain;
 - (Vv) release;
 - (id) autorelease;
 - (Q) retainCount;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithString:(id)b;
 - (S) characterAtIndex:(Q)a;
 - (id) initWithCapacity:(Q)a;
 - (id) initWithString:(id)a;
 - (Q) length;
 - (id) init;
 - (id) initWithUTF8String:(r*)a;


@end

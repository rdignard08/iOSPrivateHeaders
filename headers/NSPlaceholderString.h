
@interface NSPlaceholderString : NSString {

}

 - (id) initWithCharactersNoCopy:(^S)alength:(Q)bfreeWhenDone:(BOOL)c;
 - (id) initWithBytesNoCopy:(^v)alength:(Q)bencoding:(Q)cfreeWhenDone:(BOOL)d;
 - (id) initWithCString:(r*)aencoding:(Q)b;
 - (id) initWithBytes:(r^v)alength:(Q)bencoding:(Q)c;
 - (id) initWithCString:(r*)alength:(Q)b;
 - (id) initWithCharacters:(r^S)alength:(Q)b;
 - (id) initWithFormat:(id)alocale:(id)barguments:([1{__va_list_tag=II^v^v}])c;
 - (id) initWithCStringNoCopy:(*)alength:(Q)bfreeWhenDone:(BOOL)c;
 - (id) initWithCString:(r*)a;
 - (id) initWithData:(id)aencoding:(Q)b;
 - (id) retain;
 - (Vv) release;
 - (id) autorelease;
 - (Q) retainCount;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (S) characterAtIndex:(Q)a;
 - (id) initWithString:(id)a;
 - (Q) length;
 - (id) init;


@end

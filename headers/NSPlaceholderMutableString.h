
@interface NSPlaceholderMutableString : NSMutableString {

}

 - (id) initWithCharactersNoCopy:(^S)alength:(unsigned long long)bfreeWhenDone:(BOOL)c;
 - (id) initWithBytesNoCopy:(^v)alength:(unsigned long long)bencoding:(unsigned long long)cfreeWhenDone:(BOOL)d;
 - (id) initWithCString:(r*)aencoding:(unsigned long long)b;
 - (id) initWithBytes:(r^v)alength:(unsigned long long)bencoding:(unsigned long long)c;
 - (id) initWithFormat:(id)alocale:(id)barguments:([1{__va_list_tag=II^v^v}])c;
 - (id) initWithCStringNoCopy:(char*)alength:(unsigned long long)bfreeWhenDone:(BOOL)c;
 - (id) retain;
 - (Vv) release;
 - (id) autorelease;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (void) replaceCharactersInRange:({_NSRange=QQ})awithString:(id)b;
 - (unsigned short) characterAtIndex:(unsigned long long)a;
 - (id) initWithCapacity:(unsigned long long)a;
 - (id) initWithString:(id)a;
 - (unsigned long long) length;
 - (id) init;
 - (id) initWithUTF8String:(r*)a;


@end

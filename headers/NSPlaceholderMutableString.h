
@interface NSPlaceholderMutableString : NSMutableString {

}

 - (id) initWithCharactersNoCopy:(^S)a length:(unsigned long long)b freeWhenDone:(BOOL)c ;
 - (id) initWithBytesNoCopy:(^v)a length:(unsigned long long)b encoding:(unsigned long long)c freeWhenDone:(BOOL)d ;
 - (id) initWithCString:(r*)a encoding:(unsigned long long)b ;
 - (id) initWithBytes:(r^v)a length:(unsigned long long)b encoding:(unsigned long long)c ;
 - (id) initWithFormat:(id)a locale:(id)b arguments:([1{__va_list_tag=II^v^v}])c ;
 - (id) initWithCStringNoCopy:(char*)a length:(unsigned long long)b freeWhenDone:(BOOL)c ;
 - (id) retain;
 - (Vv) release;
 - (id) autorelease;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (void) replaceCharactersInRange:({_NSRange=QQ})a withString:(id)b ;
 - (unsigned short) characterAtIndex:(unsigned long long)a ;
 - (id) initWithCapacity:(unsigned long long)a ;
 - (id) initWithString:(id)a ;
 - (unsigned long long) length;
 - (id) init;
 - (id) initWithUTF8String:(r*)a ;


@end

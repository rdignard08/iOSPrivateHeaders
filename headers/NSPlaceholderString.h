
@interface NSPlaceholderString : NSString {

}

 - (id) initWithCharactersNoCopy:(^S)a length:(unsigned long long)b freeWhenDone:(BOOL)c ;
 - (id) initWithBytesNoCopy:(^v)a length:(unsigned long long)b encoding:(unsigned long long)c freeWhenDone:(BOOL)d ;
 - (id) initWithCString:(r*)a encoding:(unsigned long long)b ;
 - (id) initWithBytes:(r^v)a length:(unsigned long long)b encoding:(unsigned long long)c ;
 - (id) initWithCString:(r*)a length:(unsigned long long)b ;
 - (id) initWithCharacters:(r^S)a length:(unsigned long long)b ;
 - (id) initWithFormat:(id)a locale:(id)b arguments:([1{__va_list_tag=II^v^v}])c ;
 - (id) initWithCStringNoCopy:(char*)a length:(unsigned long long)b freeWhenDone:(BOOL)c ;
 - (id) initWithCString:(r*)a ;
 - (id) initWithData:(id)a encoding:(unsigned long long)b ;
 - (id) retain;
 - (Vv) release;
 - (id) autorelease;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (unsigned short) characterAtIndex:(unsigned long long)a ;
 - (id) initWithString:(id)a ;
 - (unsigned long long) length;
 - (id) init;


@end

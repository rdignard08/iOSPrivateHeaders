
@interface NSConcreteScanner : NSScanner {

    @"NSString" scanString;
    @"NSCharacterSet" skipSet;
    @"NSCharacterSet" invertedSkipSet;
    id locale;
    Q scanLocation;
    {?="caseSensitive"b1""b31} flags;
}

 - (Q) scanLocation;
 - (void) setScanLocation:(Q)a;
 - (void) setCharactersToBeSkipped:(id)a;
 - (BOOL) scanInt:(^i)a;
 - (id) charactersToBeSkipped;
 - (BOOL) caseSensitive;
 - (void) setCaseSensitive:(BOOL)a;
 - (BOOL) scanLongLong:(^q)a;
 - (id) _invertedSkipSet;
 - (void) dealloc;
 - (void) finalize;
 - (id) string;
 - (id) initWithString:(id)a;
 - (void) setLocale:(id)a;
 - (id) locale;


@end

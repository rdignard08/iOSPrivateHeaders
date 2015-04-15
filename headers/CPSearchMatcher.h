
@interface CPSearchMatcher : NSObject {

    int _options;
    NSArray* _components;
    NSArray* _asciiComponents;
    NSData* _wholeSearchStringData;
    NSData* _context;
}

 - (BOOL) matches:(id)a ;
 - (void) dealloc;
 - (BOOL) matchesUTF8String:(r*)a matchType:(int)b ;
 - (BOOL) matchesASCIIString:(r*)a matchType:(int)b ;
 - (BOOL) matchesUTF8String:(r*)a ;
 - (id) initWithSearchString:(id)a andLocale:(id)b andOptions:(int)c ;
 - (BOOL) matches:(id)a matchType:(int)b ;
 - (id) initWithSearchString:(id)a ;
 - (id) initWithSearchString:(id)a andLocale:(id)b ;
 - (id) initWithSearchString:(id)a options:(int)b ;


@end

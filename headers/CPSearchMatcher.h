
@interface CPSearchMatcher : NSObject {

    int _options;
    @"NSArray" _components;
    @"NSArray" _asciiComponents;
    @"NSData" _wholeSearchStringData;
    @"NSData" _context;
}

 - (BOOL) matches:(id)a;
 - (void) dealloc;
 - (BOOL) matchesUTF8String:(r*)amatchType:(int)b;
 - (BOOL) matchesASCIIString:(r*)amatchType:(int)b;
 - (BOOL) matchesUTF8String:(r*)a;
 - (id) initWithSearchString:(id)aandLocale:(id)bandOptions:(int)c;
 - (BOOL) matches:(id)amatchType:(int)b;
 - (id) initWithSearchString:(id)a;
 - (id) initWithSearchString:(id)aandLocale:(id)b;
 - (id) initWithSearchString:(id)aoptions:(int)b;


@end

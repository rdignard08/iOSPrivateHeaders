
@interface CPSearchMatcher : NSObject {

    i _options;
    @"NSArray" _components;
    @"NSArray" _asciiComponents;
    @"NSData" _wholeSearchStringData;
    @"NSData" _context;
}

 - (BOOL) matches:(id)a;
 - (void) dealloc;
 - (BOOL) matchesUTF8String:(r*)amatchType:(i)b;
 - (BOOL) matchesASCIIString:(r*)amatchType:(i)b;
 - (BOOL) matchesUTF8String:(r*)a;
 - (id) initWithSearchString:(id)aandLocale:(id)bandOptions:(i)c;
 - (BOOL) matches:(id)amatchType:(i)b;
 - (id) initWithSearchString:(id)a;
 - (id) initWithSearchString:(id)aandLocale:(id)b;
 - (id) initWithSearchString:(id)aoptions:(i)b;


@end


@interface CAMLParser : NSObject {

    ^{_CAMLParserData=} _data;
}
@property (atomic, retain, readwrite) NSURL* baseURL;
@property (atomic, weak, readwrite) NSNumber* delegate;
@property (atomic, assign, readonly) NSError* error;
@property (atomic, assign, readonly) NSNumber* result;
 + (id) parser;
 + (id) parseContentsOfURL:(id)a;

 - (BOOL) parseData:(id)a ;
 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (id) baseURL;
 - (id) init;
 - (id) error;
 - (id) delegate;
 - (void) setElementValue:(id)a ;
 - (id) objectById:(id)a ;
 - (id) attributeForKey:(id)a remove:(BOOL)b ;
 - (void) parserError:(id)a ;
 - (id) elementValue;
 - (void) parserWarning:(id)a ;
 - (id) willLoadResourceFromURL:(id)a ;
 - (void) didLoadResource:(id)a fromURL:(id)b ;
 - (id) result;
 - (void) setBaseURL:(id)a ;
 - (BOOL) parseContentsOfURL:(id)a ;
 - (BOOL) parseBytes:(r*)a length:(unsigned long long)b ;
 - (BOOL) parseString:(id)a ;
 - (id) didFailToLoadResourceFromURL:(id)a ;


@end

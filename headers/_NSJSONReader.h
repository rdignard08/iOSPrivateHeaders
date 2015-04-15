
@interface _NSJSONReader : NSObject {

    id input;
    int kind;
    @"NSError" error;
}
 + (BOOL) validForJSON:(id)adepth:(unsigned long long)ballowFragments:(BOOL)c;

 - (unsigned long long) findEncodingFromData:(id)awithBOMSkipLength:(^Q)b;
 - (id) parseUTF8JSONData:(id)askipBytes:(unsigned long long)boptions:(unsigned long long)c;
 - (id) parseData:(id)aoptions:(unsigned long long)b;
 - (id) parseStream:(id)aoptions:(unsigned long long)b;
 - (void) dealloc;
 - (id) init;
 - (id) error;
 - (void) setError:(id)a;


@end

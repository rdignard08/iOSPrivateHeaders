
@interface _NSJSONReader : NSObject {

    id input;
    i kind;
    @"NSError" error;
}
 + (BOOL) validForJSON:(id)adepth:(Q)ballowFragments:(BOOL)c;

 - (Q) findEncodingFromData:(id)awithBOMSkipLength:(^Q)b;
 - (id) parseUTF8JSONData:(id)askipBytes:(Q)boptions:(Q)c;
 - (id) parseData:(id)aoptions:(Q)b;
 - (id) parseStream:(id)aoptions:(Q)b;
 - (void) dealloc;
 - (id) init;
 - (id) error;
 - (void) setError:(id)a;


@end

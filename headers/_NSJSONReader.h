
@interface _NSJSONReader : NSObject {

    id input;
    int kind;
    NSError* error;
}
 + (BOOL) validForJSON:(id)adepth:(unsigned long long)ballowFragments:(BOOL)c;

 - (unsigned long long) findEncodingFromData:(id)a withBOMSkipLength:(^Q)b ;
 - (id) parseUTF8JSONData:(id)a skipBytes:(unsigned long long)b options:(unsigned long long)c ;
 - (id) parseData:(id)a options:(unsigned long long)b ;
 - (id) parseStream:(id)a options:(unsigned long long)b ;
 - (void) dealloc;
 - (id) init;
 - (id) error;
 - (void) setError:(id)a ;


@end

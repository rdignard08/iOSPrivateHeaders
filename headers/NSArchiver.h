
@interface NSArchiver : NSCoder {

    ^v mdata;
    ^v pointerTable;
    ^v stringTable;
    ^v ids;
    ^v map;
    ^v replacementTable;
    ^v reserved;
}
 + (void) encodeClassName:(id)aintoClassName:(id)b;
 + (id) classNameEncodedForTrueClassName:(id)a;
 + (BOOL) archiveRootObject:(id)atoFile:(id)b;
 + (void) initialize;
 + (id) archivedDataWithRootObject:(id)a;

 - (void) encodeArrayOfObjCType:(r*)a count:(unsigned long long)b at:(r^v)c ;
 - (void) encodeClassName:(id)a intoClassName:(id)b ;
 - (id) initForWritingWithMutableData:(id)a ;
 - (void) encodeRootObject:(id)a ;
 - (id) classNameEncodedForTrueClassName:(id)a ;
 - (id) archiverData;
 - (void) replaceObject:(id)a withObject:(id)b ;
 - (long long) versionForClassName:(id)a ;
 - (void) encodeValuesOfObjCTypes:(r*)a ;
 - (void) encodeBytes:(r^v)a length:(unsigned long long)b ;
 - (void) encodeDataObject:(id)a ;
 - (void) dealloc;
 - (void) finalize;
 - (id) data;
 - (void) encodeConditionalObject:(id)a ;
 - (void) encodeValueOfObjCType:(r*)a at:(r^v)b ;
 - (void) encodeObject:(id)a ;


@end

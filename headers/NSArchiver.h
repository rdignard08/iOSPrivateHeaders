
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

 - (void) encodeArrayOfObjCType:(r*)acount:(Q)bat:(r^v)c;
 - (void) encodeClassName:(id)aintoClassName:(id)b;
 - (id) initForWritingWithMutableData:(id)a;
 - (void) encodeRootObject:(id)a;
 - (id) classNameEncodedForTrueClassName:(id)a;
 - (id) archiverData;
 - (void) replaceObject:(id)awithObject:(id)b;
 - (q) versionForClassName:(id)a;
 - (void) encodeValuesOfObjCTypes:(r*)a;
 - (void) encodeBytes:(r^v)alength:(Q)b;
 - (void) encodeDataObject:(id)a;
 - (void) dealloc;
 - (void) finalize;
 - (id) data;
 - (void) encodeConditionalObject:(id)a;
 - (void) encodeValueOfObjCType:(r*)aat:(r^v)b;
 - (void) encodeObject:(id)a;


@end

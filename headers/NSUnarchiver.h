
@interface NSUnarchiver : NSCoder {

    ^v datax;
    Q cursor;
    ^{_NSZone=} objectZone;
    Q systemVersion;
    c streamerVersion;
    c swap;
    c unused1;
    c unused2;
    ^v pointerTable;
    ^v stringTable;
    id classVersions;
    q lastLabel;
    ^v map;
    ^v allUnarchivedObjects;
    id reserved;
}
 + (void) decodeClassName:(id)aasClassName:(id)b;
 + (id) unarchiveObjectWithFile:(id)a;
 + (id) classNameDecodedForArchiveClassName:(id)a;
 + (void) initialize;
 + (id) unarchiveObjectWithData:(id)a;

 - (void) decodeArrayOfObjCType:(r*)acount:(Q)bat:(^v)c;
 - (void) replaceObject:(id)awithObject:(id)b;
 - (q) versionForClassName:(id)a;
 - (void) decodeClassName:(id)aasClassName:(id)b;
 - (id) initForReadingWithData:(id)a;
 - (BOOL) isAtEnd;
 - (id) classNameDecodedForArchiveClassName:(id)a;
 - (void) setObjectZone:(^{_NSZone=})a;
 - (^{_NSZone=}) objectZone;
 - (void) decodeValuesOfObjCTypes:(r*)a;
 - (^v) decodeBytesWithReturnedLength:(^Q)a;
 - (id) decodeDataObject;
 - (void) dealloc;
 - (void) finalize;
 - (id) data;
 - (I) systemVersion;
 - (void) _setAllowedClasses:(id)a;
 - (void) decodeValueOfObjCType:(r*)aat:(^v)b;
 - (id) decodeObject;


@end

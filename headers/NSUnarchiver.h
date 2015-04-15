
@interface NSUnarchiver : NSCoder {

    ^v datax;
    unsigned long long cursor;
    ^{_NSZone=} objectZone;
    unsigned long long systemVersion;
    char streamerVersion;
    char swap;
    char unused1;
    char unused2;
    ^v pointerTable;
    ^v stringTable;
    id classVersions;
    long long lastLabel;
    ^v map;
    ^v allUnarchivedObjects;
    id reserved;
}
 + (void) decodeClassName:(id)aasClassName:(id)b;
 + (id) unarchiveObjectWithFile:(id)a;
 + (id) classNameDecodedForArchiveClassName:(id)a;
 + (void) initialize;
 + (id) unarchiveObjectWithData:(id)a;

 - (void) decodeArrayOfObjCType:(r*)acount:(unsigned long long)bat:(^v)c;
 - (void) replaceObject:(id)awithObject:(id)b;
 - (long long) versionForClassName:(id)a;
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
 - (unsigned int) systemVersion;
 - (void) _setAllowedClasses:(id)a;
 - (void) decodeValueOfObjCType:(r*)aat:(^v)b;
 - (id) decodeObject;


@end

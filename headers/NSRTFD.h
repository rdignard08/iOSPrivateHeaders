
@interface NSRTFD : NSMutableDictionary {

    NSMutableDictionary* dict;
}
 + (void) initialize;

 - (id) initWithContentsOfFile:(id)a ;
 - (id) initWithDataRepresentation:(id)a ;
 - (BOOL) isPackage;
 - (id) _getDocInfoForKey:(id)a ;
 - (id) getDirInfo:(BOOL)a ;
 - (id) dataRepresentation;
 - (unsigned long long) writePath:(id)a docInfo:(id)b errorHandler:(id)c remapContents:(BOOL)d hardLinkPath:(id)e ;
 - (unsigned long long) initFromDocument:(id)a ;
 - (unsigned long long) addDirNamed:(id)a lazy:(BOOL)b ;
 - (unsigned long long) addFileNamed:(id)a fileAttributes:(id)b ;
 - (unsigned long long) writePath:(id)a docInfo:(id)b errorHandler:(id)c remapContents:(BOOL)d markBusy:(BOOL)e hardLinkPath:(id)f ;
 - (unsigned long long) internalWritePath:(id)a errorHandler:(id)b remapContents:(BOOL)c hardLinkPath:(id)d ;
 - (id) tmpNameFromPath:(id)a extension:(id)b ;
 - (id) nameFromPath:(id)a extra:(id)b ;
 - (unsigned long long) internalSaveTo:(id)a removeBackup:(BOOL)b errorHandler:(id)c temp:(id)d backup:(id)e ;
 - (unsigned long long) internalSaveTo:(id)a removeBackup:(BOOL)b errorHandler:(id)c ;
 - (id) initWithPasteboardDataRepresentation:(id)a ;
 - (id) createRandomKey:(id)a ;
 - (id) createUniqueKey:(id)a ;
 - (id) getDocument:(id)a docInfo:(id)b ;
 - (id) uniqueKey:(id)a ;
 - (id) addCommon:(id)a docInfo:(id)b value:(id)c zone:(^{_NSZone=})d ;
 - (id) replaceFile:(id)a path:(id)b ;
 - (id) setPackage:(BOOL)a ;
 - (unsigned long long) initUnixFile:(id)a ;
 - (id) tmpNameFromPath:(id)a ;
 - (unsigned long long) saveToDocument:(id)a removeBackup:(BOOL)b errorHandler:(id)c ;
 - (id) replaceFile:(id)a data:(id)b ;
 - (id) addFile:(id)a ;
 - (id) addLink:(id)a ;
 - (id) dataForFile:(id)a ;
 - (id) removeFile:(id)a ;
 - (id) copy:(id)a into:(id)b ;
 - (id) addData:(id)a name:(id)b ;
 - (long long) validatePath:(id)a ignore:(id)b ;
 - (id) initFromElement:(id)a ofDocument:(id)b ;
 - (unsigned long long) realAddDirNamed:(id)a ;
 - (unsigned long long) insertItem:(id)a path:(id)b dirInfo:(id)c zone:(^{_NSZone=})d plist:(id)e ;
 - (id) serialize:(^^v)a length:(^Q)b ;
 - (id) freeSerialized:(^v)a length:(unsigned long long)b ;
 - (id) initFromSerialized:(id)a ;
 - (id) pasteboardDataRepresentation;
 - (BOOL) _isLink:(id)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (id) copy;
 - (unsigned long long) count;
 - (id) objectForKey:(id)a ;
 - (void) removeObjectForKey:(id)a ;
 - (id) initWithCapacity:(unsigned long long)a ;
 - (id) initWithObjects:(r^@)a forKeys:(r^@)b count:(unsigned long long)c ;
 - (id) keyEnumerator;
 - (void) setObject:(id)a forKey:(id)b ;
 - (id) initWithDictionary:(id)a copyItems:(BOOL)b ;
 - (id) init;
 - (id) initWithDictionary:(id)a ;


@end

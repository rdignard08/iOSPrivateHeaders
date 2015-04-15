
@interface NSRTFD : NSMutableDictionary {

    NSMutableDictionary dict;
}
 + (void) initialize;

 - (id) initWithContentsOfFile:(id)a;
 - (id) initWithDataRepresentation:(id)a;
 - (BOOL) isPackage;
 - (id) _getDocInfoForKey:(id)a;
 - (id) getDirInfo:(BOOL)a;
 - (id) dataRepresentation;
 - (unsigned long long) writePath:(id)adocInfo:(id)berrorHandler:(id)cremapContents:(BOOL)dhardLinkPath:(id)e;
 - (unsigned long long) initFromDocument:(id)a;
 - (unsigned long long) addDirNamed:(id)alazy:(BOOL)b;
 - (unsigned long long) addFileNamed:(id)afileAttributes:(id)b;
 - (unsigned long long) writePath:(id)adocInfo:(id)berrorHandler:(id)cremapContents:(BOOL)dmarkBusy:(BOOL)ehardLinkPath:(id)f;
 - (unsigned long long) internalWritePath:(id)aerrorHandler:(id)bremapContents:(BOOL)chardLinkPath:(id)d;
 - (id) tmpNameFromPath:(id)aextension:(id)b;
 - (id) nameFromPath:(id)aextra:(id)b;
 - (unsigned long long) internalSaveTo:(id)aremoveBackup:(BOOL)berrorHandler:(id)ctemp:(id)dbackup:(id)e;
 - (unsigned long long) internalSaveTo:(id)aremoveBackup:(BOOL)berrorHandler:(id)c;
 - (id) initWithPasteboardDataRepresentation:(id)a;
 - (id) createRandomKey:(id)a;
 - (id) createUniqueKey:(id)a;
 - (id) getDocument:(id)adocInfo:(id)b;
 - (id) uniqueKey:(id)a;
 - (id) addCommon:(id)adocInfo:(id)bvalue:(id)czone:(^{_NSZone=})d;
 - (id) replaceFile:(id)apath:(id)b;
 - (id) setPackage:(BOOL)a;
 - (unsigned long long) initUnixFile:(id)a;
 - (id) tmpNameFromPath:(id)a;
 - (unsigned long long) saveToDocument:(id)aremoveBackup:(BOOL)berrorHandler:(id)c;
 - (id) replaceFile:(id)adata:(id)b;
 - (id) addFile:(id)a;
 - (id) addLink:(id)a;
 - (id) dataForFile:(id)a;
 - (id) removeFile:(id)a;
 - (id) copy:(id)ainto:(id)b;
 - (id) addData:(id)aname:(id)b;
 - (long long) validatePath:(id)aignore:(id)b;
 - (id) initFromElement:(id)aofDocument:(id)b;
 - (unsigned long long) realAddDirNamed:(id)a;
 - (unsigned long long) insertItem:(id)apath:(id)bdirInfo:(id)czone:(^{_NSZone=})dplist:(id)e;
 - (id) serialize:(^^v)alength:(^Q)b;
 - (id) freeSerialized:(^v)alength:(unsigned long long)b;
 - (id) initFromSerialized:(id)a;
 - (id) pasteboardDataRepresentation;
 - (BOOL) _isLink:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (id) copy;
 - (unsigned long long) count;
 - (id) objectForKey:(id)a;
 - (void) removeObjectForKey:(id)a;
 - (id) initWithCapacity:(unsigned long long)a;
 - (id) initWithObjects:(r^@)aforKeys:(r^@)bcount:(unsigned long long)c;
 - (id) keyEnumerator;
 - (void) setObject:(id)aforKey:(id)b;
 - (id) initWithDictionary:(id)acopyItems:(BOOL)b;
 - (id) init;
 - (id) initWithDictionary:(id)a;


@end

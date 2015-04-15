
@interface NSRTFD : NSMutableDictionary {

    @"NSMutableDictionary" dict;
}
 + (void) initialize;

 - (id) initWithContentsOfFile:(id)a;
 - (id) initWithDataRepresentation:(id)a;
 - (BOOL) isPackage;
 - (id) _getDocInfoForKey:(id)a;
 - (id) getDirInfo:(BOOL)a;
 - (id) dataRepresentation;
 - (Q) writePath:(id)adocInfo:(id)berrorHandler:(id)cremapContents:(BOOL)dhardLinkPath:(id)e;
 - (Q) initFromDocument:(id)a;
 - (Q) addDirNamed:(id)alazy:(BOOL)b;
 - (Q) addFileNamed:(id)afileAttributes:(id)b;
 - (Q) writePath:(id)adocInfo:(id)berrorHandler:(id)cremapContents:(BOOL)dmarkBusy:(BOOL)ehardLinkPath:(id)f;
 - (Q) internalWritePath:(id)aerrorHandler:(id)bremapContents:(BOOL)chardLinkPath:(id)d;
 - (id) tmpNameFromPath:(id)aextension:(id)b;
 - (id) nameFromPath:(id)aextra:(id)b;
 - (Q) internalSaveTo:(id)aremoveBackup:(BOOL)berrorHandler:(id)ctemp:(id)dbackup:(id)e;
 - (Q) internalSaveTo:(id)aremoveBackup:(BOOL)berrorHandler:(id)c;
 - (id) initWithPasteboardDataRepresentation:(id)a;
 - (id) createRandomKey:(id)a;
 - (id) createUniqueKey:(id)a;
 - (id) getDocument:(id)adocInfo:(id)b;
 - (id) uniqueKey:(id)a;
 - (id) addCommon:(id)adocInfo:(id)bvalue:(id)czone:(^{_NSZone=})d;
 - (id) replaceFile:(id)apath:(id)b;
 - (id) setPackage:(BOOL)a;
 - (Q) initUnixFile:(id)a;
 - (id) tmpNameFromPath:(id)a;
 - (Q) saveToDocument:(id)aremoveBackup:(BOOL)berrorHandler:(id)c;
 - (id) replaceFile:(id)adata:(id)b;
 - (id) addFile:(id)a;
 - (id) addLink:(id)a;
 - (id) dataForFile:(id)a;
 - (id) removeFile:(id)a;
 - (id) copy:(id)ainto:(id)b;
 - (id) addData:(id)aname:(id)b;
 - (q) validatePath:(id)aignore:(id)b;
 - (id) initFromElement:(id)aofDocument:(id)b;
 - (Q) realAddDirNamed:(id)a;
 - (Q) insertItem:(id)apath:(id)bdirInfo:(id)czone:(^{_NSZone=})dplist:(id)e;
 - (id) serialize:(^^v)alength:(^Q)b;
 - (id) freeSerialized:(^v)alength:(Q)b;
 - (id) initFromSerialized:(id)a;
 - (id) pasteboardDataRepresentation;
 - (BOOL) _isLink:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (id) copy;
 - (Q) count;
 - (id) objectForKey:(id)a;
 - (void) removeObjectForKey:(id)a;
 - (id) initWithCapacity:(Q)a;
 - (id) initWithObjects:(r^@)aforKeys:(r^@)bcount:(Q)c;
 - (id) keyEnumerator;
 - (void) setObject:(id)aforKey:(id)b;
 - (id) initWithDictionary:(id)acopyItems:(BOOL)b;
 - (id) init;
 - (id) initWithDictionary:(id)a;


@end


@interface UIManagedDocument : UIDocument {

    @"NSManagedObjectContext" _managedObjectContext;
    @"NSPersistentStoreCoordinator" _persistentStoreCoordinator;
    @"NSManagedObjectModel" _managedObjectModel;
    @"NSDictionary" _documentMetadata;
    {__mdocFlags="shouldWriteAdditionalContent"b1"_reserved"b31} _mdocFlags;
    @"NSDictionary" persistentStoreOptions;
    @"NSString" modelConfiguration;
}
 + (void) initialize;
 + (BOOL) isPersistentStoreSynchronizedViaUbiquitousContentWithOptions:(id)a;
 + (id) persistentStoreName;
 + (id) additionalContentPathComponent;

 - (void) dealloc;
 - (BOOL) readFromURL:(id)aerror:(^@)b;
 - (BOOL) writeContents:(id)atoURL:(id)bforSaveOperation:(long long)coriginalContentsURL:(id)derror:(^@)e;
 - (id) contentsForType:(id)aerror:(^@)b;
 - (BOOL) writeContents:(id)aandAttributes:(id)bsafelyToURL:(id)cforSaveOperation:(long long)derror:(^@)e;
 - (void) revertToContentsOfURL:(id)acompletionHandler:(@?)b;
 - (id) initWithFileURL:(id)a;
 - (id) managedObjectModel;
 - (BOOL) writeAdditionalContent:(id)atoURL:(id)boriginalContentsURL:(id)cerror:(^@)d;
 - (id) persistentStoreTypeForFileType:(id)a;
 - (id) persistentStoreOptions;
 - (id) modelConfiguration;
 - (id) _readMetadataFromDocumentURL:(id)a;
 - (BOOL) _writeMetadataToDocumentURL:(id)a;
 - (void) _handleRelocatingStoreContentDirectoryFromNonSyncedURL:(id)atoSyncedURL:(id)b;
 - (BOOL) configurePersistentStoreCoordinatorForURL:(id)aofType:(id)bmodelConfiguration:(id)cstoreOptions:(id)derror:(^@)e;
 - (void) _handleRelocatingStoreContentDirectoryFromSyncedURL:(id)atoNonSyncedURL:(id)b;
 - (id) managedObjectContext;
 - (BOOL) readAdditionalContentFromURL:(id)aerror:(^@)b;
 - (id) additionalContentForURL:(id)aerror:(^@)b;
 - (void) setPersistentStoreOptions:(id)a;
 - (void) setModelConfiguration:(id)a;


@end

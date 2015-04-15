
@interface UIManagedDocument : UIDocument {

    NSManagedObjectContext* _managedObjectContext;
    NSPersistentStoreCoordinator* _persistentStoreCoordinator;
    NSManagedObjectModel* _managedObjectModel;
    NSDictionary* _documentMetadata;
    {__mdocFlags="shouldWriteAdditionalContent"b1"_reserved"b31} _mdocFlags;
    NSDictionary* persistentStoreOptions;
    NSString* modelConfiguration;
}
 + (void) initialize;
 + (BOOL) isPersistentStoreSynchronizedViaUbiquitousContentWithOptions:(id)a;
 + (id) persistentStoreName;
 + (id) additionalContentPathComponent;

 - (void) dealloc;
 - (BOOL) readFromURL:(id)a error:(^@)b ;
 - (BOOL) writeContents:(id)a toURL:(id)b forSaveOperation:(long long)c originalContentsURL:(id)d error:(^@)e ;
 - (id) contentsForType:(id)a error:(^@)b ;
 - (BOOL) writeContents:(id)a andAttributes:(id)b safelyToURL:(id)c forSaveOperation:(long long)d error:(^@)e ;
 - (void) revertToContentsOfURL:(id)a completionHandler:(@?)b ;
 - (id) initWithFileURL:(id)a ;
 - (id) managedObjectModel;
 - (BOOL) writeAdditionalContent:(id)a toURL:(id)b originalContentsURL:(id)c error:(^@)d ;
 - (id) persistentStoreTypeForFileType:(id)a ;
 - (id) persistentStoreOptions;
 - (id) modelConfiguration;
 - (id) _readMetadataFromDocumentURL:(id)a ;
 - (BOOL) _writeMetadataToDocumentURL:(id)a ;
 - (void) _handleRelocatingStoreContentDirectoryFromNonSyncedURL:(id)a toSyncedURL:(id)b ;
 - (BOOL) configurePersistentStoreCoordinatorForURL:(id)a ofType:(id)b modelConfiguration:(id)c storeOptions:(id)d error:(^@)e ;
 - (void) _handleRelocatingStoreContentDirectoryFromSyncedURL:(id)a toNonSyncedURL:(id)b ;
 - (id) managedObjectContext;
 - (BOOL) readAdditionalContentFromURL:(id)a error:(^@)b ;
 - (id) additionalContentForURL:(id)a error:(^@)b ;
 - (void) setPersistentStoreOptions:(id)a ;
 - (void) setModelConfiguration:(id)a ;


@end

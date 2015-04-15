
@interface WebStorageManager : NSObject {

}
 + (id) _storageDirectoryPath;
 + (id) sharedWebStorageManager;
 + (void) setStorageDatabaseIdleInterval:(d)a;
 + (void) closeIdleLocalStorageDatabases;

 - (id) init;
 - (Q) diskUsageForOrigin:(id)a;
 - (id) origins;
 - (void) deleteOrigin:(id)a;
 - (void) deleteAllOrigins;
 - (void) syncLocalStorage;
 - (void) syncFileSystemAndTrackerDatabase;


@end

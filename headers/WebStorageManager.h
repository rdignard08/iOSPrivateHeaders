
@interface WebStorageManager : NSObject {

}
 + (id) _storageDirectoryPath;
 + (id) sharedWebStorageManager;
 + (void) setStorageDatabaseIdleInterval:(double)a;
 + (void) closeIdleLocalStorageDatabases;

 - (id) init;
 - (unsigned long long) diskUsageForOrigin:(id)a ;
 - (id) origins;
 - (void) deleteOrigin:(id)a ;
 - (void) deleteAllOrigins;
 - (void) syncLocalStorage;
 - (void) syncFileSystemAndTrackerDatabase;


@end

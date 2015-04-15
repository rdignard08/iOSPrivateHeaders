
@interface WebDatabaseManager : NSObject {

}
 + (void) removeEmptyDatabaseFiles;
 + (id) sharedWebDatabaseManager;
 + (void) scheduleEmptyDatabaseRemoval;
 + (void) startBackgroundTask;
 + (void) endBackgroundTask;
 + (void) willBeginFirstTransaction;
 + (void) didFinishLastTransaction;

 - (id) init;
 - (id) origins;
 - (id) databasesWithOrigin:(id)a ;
 - (id) detailsForDatabase:(id)a withOrigin:(id)b ;
 - (void) deleteAllDatabases;
 - (BOOL) deleteOrigin:(id)a ;
 - (BOOL) deleteDatabase:(id)a withOrigin:(id)b ;


@end

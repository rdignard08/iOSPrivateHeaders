
@interface NSFilesystemItemMoveOperation : NSOperation {

    id _delegate;
    NSString* _sourcePath;
    NSString* _destinationPath;
    NSError* _error;
}
 + (id) filesystemItemMoveOperationWithSourcePath:(id)adestinationPath:(id)b;
 + (id) _errorWithErrno:(int)asourcePath:(id)bdestinationPath:(id)c;

 - (BOOL) filesystemItemCopyOperation:(id)a shouldProceedAfterError:(id)b copyingItemAtPath:(id)c toPath:(id)d ;
 - (void) _setError:(id)a ;
 - (void) main;
 - (void) initWithSourcePath:(id)a destinationPath:(id)b ;
 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (id) error;
 - (id) delegate;


@end

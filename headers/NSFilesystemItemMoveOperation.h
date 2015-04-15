
@interface NSFilesystemItemMoveOperation : NSOperation {

    id _delegate;
    @"NSString" _sourcePath;
    @"NSString" _destinationPath;
    @"NSError" _error;
}
 + (id) filesystemItemMoveOperationWithSourcePath:(id)adestinationPath:(id)b;
 + (id) _errorWithErrno:(i)asourcePath:(id)bdestinationPath:(id)c;

 - (BOOL) filesystemItemCopyOperation:(id)ashouldProceedAfterError:(id)bcopyingItemAtPath:(id)ctoPath:(id)d;
 - (void) _setError:(id)a;
 - (void) main;
 - (void) initWithSourcePath:(id)adestinationPath:(id)b;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) error;
 - (id) delegate;


@end

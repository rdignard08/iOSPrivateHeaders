
@interface NSFilesystemItemCopyOperation : NSDirectoryTraversalOperation {

    NSString* _destinationPath;
    NSMutableSet* _skippedPaths;
}
 + (id) filesystemItemCopyOperationWithSourcePath:(id)adestinationPath:(id)b;
 + (id) _errorWithErrno:(int)asourcePath:(id)bdestinationPath:(id)c;

 - (BOOL) _validatePaths:(^@)a ;
 - (void) _handleFTSEntry:(^{_ftsent=^{_ftsent}^{_ftsent}^{_ftsent}q^v**iiSSQiSsSSS^{stat}[1c]})a ;
 - (void) initWithSourcePath:(id)a destinationPath:(id)b ;
 - (BOOL) shouldCopyItemAtPath:(id)a toPath:(id)b ;
 - (BOOL) shouldProceedAfterError:(id)a copyingItemAtPath:(id)b toPath:(id)c ;
 - (BOOL) _shouldCopyItemAtPath:(r*)a toPath:(r*)b ;
 - (BOOL) _shouldProceedAfterErrno:(int)a copyingItemAtPath:(r*)b toPath:(r*)c ;
 - (void) dealloc;


@end


@interface NSFilesystemItemCopyOperation : NSDirectoryTraversalOperation {

    @"NSString" _destinationPath;
    @"NSMutableSet" _skippedPaths;
}
 + (id) filesystemItemCopyOperationWithSourcePath:(id)adestinationPath:(id)b;
 + (id) _errorWithErrno:(i)asourcePath:(id)bdestinationPath:(id)c;

 - (BOOL) _validatePaths:(^@)a;
 - (void) _handleFTSEntry:(^{_ftsent=^{_ftsent}^{_ftsent}^{_ftsent}q^v**iiSSQiSsSSS^{stat}[1c]})a;
 - (void) initWithSourcePath:(id)adestinationPath:(id)b;
 - (BOOL) shouldCopyItemAtPath:(id)atoPath:(id)b;
 - (BOOL) shouldProceedAfterError:(id)acopyingItemAtPath:(id)btoPath:(id)c;
 - (BOOL) _shouldCopyItemAtPath:(r*)atoPath:(r*)b;
 - (BOOL) _shouldProceedAfterErrno:(i)acopyingItemAtPath:(r*)btoPath:(r*)c;
 - (void) dealloc;


@end

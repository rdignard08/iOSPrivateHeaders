
@interface NSDirectoryTraversalOperation : NSOperation {

    id _delegate;
    NSString* _sourcePath;
    NSError* _error;
    ^v _stream;
    int _optionsFlags;
    int _lastDeviceInode;
    BOOL _shouldFilterUnderbars;
    BOOL _stopped;
    NSMutableArray* _deviceEntryPoints;
    NSMutableArray* _deviceNumbers;
}
 + (BOOL) _needsStatInfo;
 + (id) _errorWithErrno:(int)aatPath:(id)b;
 + (id) directoryTraversalOperationAtPath:(id)a;

 - (id) initWithPath:(id)a ;
 - (BOOL) _shouldFilterEntry:(^{_ftsent=^{_ftsent}^{_ftsent}^{_ftsent}q^v**iiSSQiSsSSS^{stat}[1c]})a ;
 - (void) handlePathname:(id)a ;
 - (BOOL) shouldProceedAfterError:(id)a ;
 - (void) _setError:(id)a ;
 - (BOOL) _validatePaths:(^@)a ;
 - (void) _handleFTSEntry:(^{_ftsent=^{_ftsent}^{_ftsent}^{_ftsent}q^v**iiSSQiSsSSS^{stat}[1c]})a ;
 - (void) main;
 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (id) error;
 - (id) delegate;


@end

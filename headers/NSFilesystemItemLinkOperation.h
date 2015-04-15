
@interface NSFilesystemItemLinkOperation : NSFilesystemItemCopyOperation {

}
 + (id) filesystemItemLinkOperationWithSourcePath:(id)adestinationPath:(id)b;
 + (BOOL) _needsStatInfo;
 + (id) _errorWithErrno:(int)asourcePath:(id)bdestinationPath:(id)c;

 - (BOOL) _validatePaths:(^@)a ;
 - (void) _handleFTSEntry:(^{_ftsent=^{_ftsent}^{_ftsent}^{_ftsent}q^v**iiSSQiSsSSS^{stat}[1c]})a ;
 - (BOOL) shouldProceedAfterError:(id)a linkingItemAtPath:(id)b toPath:(id)c ;
 - (BOOL) shouldLinkItemAtPath:(id)a toPath:(id)b ;
 - (BOOL) _shouldLinkItemAtPath:(r*)a toPath:(r*)b ;
 - (BOOL) _shouldProceedAfterErrno:(int)a linkingItemAtPath:(r*)b toPath:(r*)c ;


@end

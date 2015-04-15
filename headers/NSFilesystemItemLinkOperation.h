
@interface NSFilesystemItemLinkOperation : NSFilesystemItemCopyOperation {

}
 + (id) filesystemItemLinkOperationWithSourcePath:(id)adestinationPath:(id)b;
 + (BOOL) _needsStatInfo;
 + (id) _errorWithErrno:(int)asourcePath:(id)bdestinationPath:(id)c;

 - (BOOL) _validatePaths:(^@)a;
 - (void) _handleFTSEntry:(^{_ftsent=^{_ftsent}^{_ftsent}^{_ftsent}q^v**iiSSQiSsSSS^{stat}[1c]})a;
 - (BOOL) shouldProceedAfterError:(id)alinkingItemAtPath:(id)btoPath:(id)c;
 - (BOOL) shouldLinkItemAtPath:(id)atoPath:(id)b;
 - (BOOL) _shouldLinkItemAtPath:(r*)atoPath:(r*)b;
 - (BOOL) _shouldProceedAfterErrno:(int)alinkingItemAtPath:(r*)btoPath:(r*)c;


@end

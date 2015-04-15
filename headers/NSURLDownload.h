
@protocol NSURLAuthenticationChallengeSender;
@interface NSURLDownload : NSObject <NSURLAuthenticationChallengeSender> {

    @"NSURLDownloadInternal" _internal;
}
@property (atomic, copy, readonly) NSURLRequest* request;
@property (atomic, copy, readonly) NSData* resumeData;
@property (atomic, assign, readwrite) NSNumber* deletesFileUponFailure;
 + (BOOL) canResumeDownloadDecodedWithEncodingMIMEType:(id)a;
 + (id) _downloadWithLoadingConnection:(id)arequest:(id)bresponse:(id)cdelegate:(id)dproxy:(id)e;
 + (BOOL) _isEncodingMIMETypeResumable:(id)a;
 + (id) _downloadWithLoadingCFURLConnection:(^{_CFURLConnection=})arequest:(^{_CFURLRequest=})bresponse:(^{_CFURLResponse=})cdelegate:(id)dproxy:(id)e;
 + (id) _downloadWithRequest:(id)adelegate:(id)bdirectory:(id)c;

 - (id) description;
 - (void) dealloc;
 - (id) init;
 - (void) cancel;
 - (void) useCredential:(id)aforAuthenticationChallenge:(id)b;
 - (id) request;
 - (void) continueWithoutCredentialForAuthenticationChallenge:(id)a;
 - (void) cancelAuthenticationChallenge:(id)a;
 - (id) _delegate;
 - (id) initWithRequest:(id)adelegate:(id)b;
 - (void) _setDelegateQueue:(id)a;
 - (void) cleanupChallenges;
 - (void) withDelegate:(@?)a;
 - (void) _setDelegate:(id)a;
 - (id) _initWithLoadingCFURLConnection:(^{_CFURLConnection=})arequest:(^{_CFURLRequest=})bresponse:(^{_CFURLResponse=})cdelegate:(id)dproxy:(id)e;
 - (id) _initWithLoadingConnection:(id)arequest:(id)bresponse:(id)cdelegate:(id)dproxy:(id)e;
 - (id) _initWithRequest:(id)adelegate:(id)bdirectory:(id)c;
 - (id) _initWithResumeInformation:(id)adelegate:(id)bpath:(id)c;
 - (id) initWithResumeData:(id)adelegate:(id)bpath:(id)c;
 - (id) _resumeInformation;
 - (id) resumeData;
 - (void) setDestination:(id)aallowOverwrite:(BOOL)b;
 - (void) _setDeletesFileAfterFailure:(BOOL)a;
 - (BOOL) _deletesFileAfterFailure;
 - (void) setDeletesFileUponFailure:(BOOL)a;
 - (BOOL) deletesFileUponFailure;
 - (id) _directoryPath;
 - (void) _setDirectoryPath:(id)a;
 - (void) _setOriginatingURL:(id)a;
 - (id) _originatingURL;
 - (void) releaseDelegate;
 - (BOOL) _downloadActive;
 - (void) sendDidStart:(^{_CFURLDownload=})a;
 - (^{_CFURLRequest=}) sendWillSendRequest:(^{_CFURLRequest=})aredirectResponse:(^{_CFURLResponse=})b;
 - (unsigned char) sendDownloadShouldUseCredentialStorage;
 - (void) sendDidReceiveChallenge:(^{_CFURLAuthChallenge=})a;
 - (void) sendDidReceiveResponse:(^{_CFURLResponse=})a;
 - (void) sendWillResumeWithResponse:(^{_CFURLResponse=})astartingByte:(unsigned long long)b;
 - (void) sendDidReceiveData:(long long)a;
 - (BOOL) sendShouldDecodeDataOfMIMEType:(^{__CFString=})a;
 - (void) sendDecideDestinationWithSuggestedObjectName:(^{__CFString=})a;
 - (void) sendDidCreateDestination:(^{__CFURL=})a;
 - (void) sendDidFinish;
 - (void) sendDidFail:(^{__CFError=})a;
 - (BOOL) sendCanAuthenticateAgainstProtectionSpace:(^{_CFURLProtectionSpace=})a;
 - (id) url;


@end

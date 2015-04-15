
@protocol NSURLAuthenticationChallengeSender;
@interface WebCoreAuthenticationClientAsChallengeSender : NSObject <NSURLAuthenticationChallengeSender> {

    ^{AuthenticationClient=^^?} m_client;
    ^{_CFURLAuthChallenge=} m_cfChallenge;
}

 - (^{_CFURLAuthChallenge=}) cfChallenge;
 - (void) useCredential:(id)a forAuthenticationChallenge:(id)b ;
 - (^{AuthenticationClient=^^?}) client;
 - (void) continueWithoutCredentialForAuthenticationChallenge:(id)a ;
 - (void) cancelAuthenticationChallenge:(id)a ;
 - (id) initWithAuthenticationClient:(^{AuthenticationClient=^^?})a ;
 - (void) detachClient;
 - (void) setCFChallenge:(^{_CFURLAuthChallenge=})a ;


@end

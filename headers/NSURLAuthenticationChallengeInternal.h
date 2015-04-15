
@interface NSURLAuthenticationChallengeInternal : NSObject {

    @"NSURLProtectionSpace" space;
    @"NSURLCredential" proposedCredential;
    q previousFailureCount;
    @"NSURLResponse" failureResponse;
    @"NSError" error;
    @"<NSURLAuthenticationChallengeSender>" sender;
}

 - (void) dealloc;
 - (id) initWithProtectionSpace:(id)aproposedCredential:(id)bpreviousFailureCount:(q)cfailureResponse:(id)derror:(id)esender:(id)f;


@end

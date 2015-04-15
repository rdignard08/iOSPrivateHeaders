
@interface NSURLAuthenticationChallengeInternal : NSObject {

    @"NSURLProtectionSpace" space;
    @"NSURLCredential" proposedCredential;
    long long previousFailureCount;
    @"NSURLResponse" failureResponse;
    @"NSError" error;
    @"<NSURLAuthenticationChallengeSender>" sender;
}

 - (void) dealloc;
 - (id) initWithProtectionSpace:(id)aproposedCredential:(id)bpreviousFailureCount:(long long)cfailureResponse:(id)derror:(id)esender:(id)f;


@end

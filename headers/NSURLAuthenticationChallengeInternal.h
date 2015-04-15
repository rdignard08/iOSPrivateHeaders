
@interface NSURLAuthenticationChallengeInternal : NSObject {

    NSURLProtectionSpace* space;
    NSURLCredential* proposedCredential;
    long long previousFailureCount;
    NSURLResponse* failureResponse;
    NSError* error;
    <NSURLAuthenticationChallengeSender>* sender;
}

 - (void) dealloc;
 - (id) initWithProtectionSpace:(id)a proposedCredential:(id)b previousFailureCount:(long long)c failureResponse:(id)d error:(id)e sender:(id)f ;


@end

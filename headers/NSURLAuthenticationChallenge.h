
@protocol NSSecureCoding;
@interface NSURLAuthenticationChallenge : NSObject <NSSecureCoding> {

    NSURLAuthenticationChallengeInternal _internal;
}
@property (atomic, copy, readonly) NSURLProtectionSpace* protectionSpace;
@property (atomic, copy, readonly) NSURLCredential* proposedCredential;
@property (atomic, assign, readonly) NSNumber* previousFailureCount;
@property (atomic, copy, readonly) NSURLResponse* failureResponse;
@property (atomic, copy, readonly) NSError* error;
@property (atomic, retain, readonly) NSNumber* sender;
 + (BOOL) supportsSecureCoding;
 + (id) _authenticationChallengeForCFAuthChallenge:(^{_CFURLAuthChallenge=})asender:(id)b;
 + (id) _createAuthenticationChallengeForCFAuthChallenge:(^{_CFURLAuthChallenge=})asender:(id)b;

 - (void) dealloc;
 - (void) setSender:(id)a;
 - (id) init;
 - (^{_CFURLAuthChallenge=}) _createCFAuthChallenge;
 - (id) sender;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) error;
 - (id) protectionSpace;
 - (id) initWithProtectionSpace:(id)aproposedCredential:(id)bpreviousFailureCount:(long long)cfailureResponse:(id)derror:(id)esender:(id)f;
 - (id) proposedCredential;
 - (long long) previousFailureCount;
 - (id) failureResponse;
 - (id) _initWithCFAuthChallenge:(^{_CFURLAuthChallenge=})asender:(id)b;
 - (id) initWithAuthenticationChallenge:(id)asender:(id)b;


@end

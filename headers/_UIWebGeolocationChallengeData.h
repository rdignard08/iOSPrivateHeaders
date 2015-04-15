
@interface _UIWebGeolocationChallengeData : NSObject {

    NSString* _token;
    NSURL* _requestingURL;
    UIWindow* _window;
    <WebAllowDenyPolicyListener>* _listener;
}
@property (nonatomic, retain, readwrite) NSString* token;
@property (nonatomic, retain, readwrite) NSURL* requestingURL;
@property (nonatomic, retain, readwrite) UIWindow* window;
@property (nonatomic, retain, readwrite) NSNumber* listener;

 - (void) dealloc;
 - (void) setWindow:(id)a;
 - (id) token;
 - (void) setToken:(id)a;
 - (id) requestingURL;
 - (void) setRequestingURL:(id)a;
 - (id) listener;
 - (void) setListener:(id)a;
 - (id) window;


@end

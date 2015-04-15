
@interface WebPluginContainerCheck : NSObject {

    NSURLRequest* _request;
    NSString* _target;
    <WebPluginContainerCheckController>* _controller;
    id _resultObject;
    SEL _resultSelector;
    id _contextInfo;
    BOOL _done;
    WebPolicyDecisionListener* _listener;
}
 + (id) checkWithRequest:(id)atarget:(id)bresultObject:(id)cselector:(SEL)dcontroller:(id)econtextInfo:(id)f;

 - (void) dealloc;
 - (void) finalize;
 - (void) cancel;
 - (void) start;
 - (id) initWithRequest:(id)atarget:(id)bresultObject:(id)cselector:(SEL)dcontroller:(id)econtextInfo:(id)f;
 - (void) _continueWithPolicy:(int)a;
 - (id) _actionInformationWithURL:(id)a;
 - (BOOL) _isForbiddenFileLoad;
 - (void) _askPolicyDelegate;
 - (id) contextInfo;


@end

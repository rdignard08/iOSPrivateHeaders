
@interface _UIHostedTextServiceSession : _UITextServiceSession {

    <_UIHostedTextServiceSessionDelegate>* _delegate;
}
 + (id) showServiceForText:(id)atype:(long long)bfromRect:({CGRect={CGPoint=dd}{CGSize=dd}})cinView:(id)d;

 - (void) setDelegate:(id)a;
 - (void) dismissTextServiceAnimated:(BOOL)a;
 - (void) remoteSessionDidDismiss;
 - (id) delegate;


@end

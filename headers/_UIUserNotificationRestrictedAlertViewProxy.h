
@protocol UIAlertViewDelegate;
@interface _UIUserNotificationRestrictedAlertViewProxy : _UITargetedProxy <UIAlertViewDelegate> {

    id _delegate;
}
 + (id) restrictedProxyForAlertView:(id)a;

 - (void) forwardInvocation:(id)a ;
 - (void) setDelegate:(id)a ;
 - (BOOL) respondsToSelector:(SEL)a ;
 - (id) methodSignatureForSelector:(SEL)a ;
 - (id) delegate;


@end

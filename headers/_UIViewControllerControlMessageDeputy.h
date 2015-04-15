
@protocol _UIViewServiceDeputy, _UIViewServiceUIBehaviorInterface;
@interface _UIViewControllerControlMessageDeputy : _UITargetedProxy <_UIViewServiceDeputy, _UIViewServiceUIBehaviorInterface> {

}
 + (id) proxyWithTarget:(id)a;
 + (id) XPCInterface;

 - (id) invalidate;
 - (void) __prepareForDisconnectionWithCompletionHandler:(@?)a;


@end


@protocol _UIViewServiceDeputy;
@interface _UIViewServiceViewControllerDeputy : _UITargetedProxy <_UIViewServiceDeputy> {

}
 + (id) XPCInterface;
 + (id) deputyWithViewController:(id)a;

 - (id) invalidate;
 - (void) __prepareForDisconnectionWithCompletionHandler:(@?)a;


@end

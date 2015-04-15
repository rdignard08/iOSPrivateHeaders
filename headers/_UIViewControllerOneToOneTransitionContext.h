
@interface _UIViewControllerOneToOneTransitionContext : _UIViewControllerTransitionContext {

    BOOL _isToViewSet;
    BOOL _isFromViewSet;
    UIView _toView;
    UIView _fromView;
    UIViewController _fromViewController;
    UIViewController _toViewController;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _fromStartFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _fromEndFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _toEndFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _toStartFrame;
}

 - (void) dealloc;
 - (id) viewControllerForKey:(id)a;
 - (id) viewForKey:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) initialFrameForViewController:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) finalFrameForViewController:(id)a;
 - (void) _setFromViewController:(id)a;
 - (void) _setToViewController:(id)a;
 - (void) _setFromStartFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _setToEndFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _setToStartFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _setFromEndFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) _fromView;
 - (id) _toView;
 - (void) _setFromView:(id)a;
 - (void) _setToView:(id)a;
 - (id) fromViewController;
 - (id) toViewController;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) toStartFrame;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) fromStartFrame;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) toEndFrame;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) fromEndFrame;


@end


@protocol UIStatusBarTinting;
@interface _UIRemoteView : UIView <UIStatusBarTinting> {

    BOOL _actsAsTintView;
    @"UIColor" _statusBarTintColor;
    @"_UIHostedWindowHostingHandle" _hostedWindowHostingHandle;
    @? _tintColorDidChangeHandler;
}
 + (Class) layerClass;
 + (id) viewWithHostedWindowHostingHandle:(id)a;
 + (BOOL) _requiresWindowTouches;
 + (id) viewWithRemoteContextID:(I)a;

 - (void) dealloc;
 - (id) _statusBarTintColor;
 - (id) _hitTest:({CGPoint=dd})awithEvent:(id)bwindowServerHitTestWindow:(id)c;
 - (void) tintColorDidChange;
 - (void) _didMoveFromWindow:(id)atoWindow:(id)b;
 - (void) _setStatusBarTintColor:(id)a;
 - (id) hostedWindowHostingHandle;
 - (void) setHostedWindowHostingHandle:(id)a;
 - (void) _setActsAsTintView:(BOOL)a;
 - (void) setTintColorDidChangeHandler:(@?)a;
 - (void) _setInheritsSecurity:(BOOL)a;
 - (BOOL) _inheritsSecurity;
 - (void) _setStatusBarTintColor:(id)aduration:(d)b;
 - (void) _compensateForGlobalMediaTimeAdjustmentsIfNecessary;
 - (void) setContextID:(I)a;
 - (void) applyTransformUndoingRemoteRootLayerTransform:({CGAffineTransform=dddddd})aframe:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (@?) tintColorDidChangeHandler;
 - (BOOL) _actsAsTintView;


@end

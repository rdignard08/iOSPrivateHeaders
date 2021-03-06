
@protocol UIStatusBarTinting;
@interface _UIRemoteView : UIView <UIStatusBarTinting> {

    BOOL _actsAsTintView;
    UIColor* _statusBarTintColor;
    _UIHostedWindowHostingHandle* _hostedWindowHostingHandle;
    @? _tintColorDidChangeHandler;
}
 + (Class) layerClass;
 + (id) viewWithHostedWindowHostingHandle:(id)a;
 + (BOOL) _requiresWindowTouches;
 + (id) viewWithRemoteContextID:(unsigned int)a;

 - (void) dealloc;
 - (id) _statusBarTintColor;
 - (id) _hitTest:({CGPoint=dd})a withEvent:(id)b windowServerHitTestWindow:(id)c ;
 - (void) tintColorDidChange;
 - (void) _didMoveFromWindow:(id)a toWindow:(id)b ;
 - (void) _setStatusBarTintColor:(id)a ;
 - (id) hostedWindowHostingHandle;
 - (void) setHostedWindowHostingHandle:(id)a ;
 - (void) _setActsAsTintView:(BOOL)a ;
 - (void) setTintColorDidChangeHandler:(@?)a ;
 - (void) _setInheritsSecurity:(BOOL)a ;
 - (BOOL) _inheritsSecurity;
 - (void) _setStatusBarTintColor:(id)a duration:(double)b ;
 - (void) _compensateForGlobalMediaTimeAdjustmentsIfNecessary;
 - (void) setContextID:(unsigned int)a ;
 - (void) applyTransformUndoingRemoteRootLayerTransform:({CGAffineTransform=dddddd})a frame:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (@?) tintColorDidChangeHandler;
 - (BOOL) _actsAsTintView;


@end

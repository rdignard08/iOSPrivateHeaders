
@interface UIStatusBarQuietModeItemView : UIStatusBarIndicatorItemView {

    BOOL _hideForAction;
    BOOL _registeredForNotifications;
    BOOL _inactive;
}

 - (void) dealloc;
 - (BOOL) updateForNewData:(id)aactions:(i)b;
 - (void) setVisible:(BOOL)aframe:({CGRect={CGPoint=dd}{CGSize=dd}})bduration:(d)c;
 - (void) _triggerAction:(id)a;
 - (d) _visibleAlpha;
 - (void) setVisible:(BOOL)a;
 - (void) animationDidStop:(id)afinished:(BOOL)b;


@end

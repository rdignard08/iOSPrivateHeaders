
@interface UIStatusBarQuietModeItemView : UIStatusBarIndicatorItemView {

    BOOL _hideForAction;
    BOOL _registeredForNotifications;
    BOOL _inactive;
}

 - (void) dealloc;
 - (BOOL) updateForNewData:(id)aactions:(int)b;
 - (void) setVisible:(BOOL)aframe:({CGRect={CGPoint=dd}{CGSize=dd}})bduration:(double)c;
 - (void) _triggerAction:(id)a;
 - (double) _visibleAlpha;
 - (void) setVisible:(BOOL)a;
 - (void) animationDidStop:(id)afinished:(BOOL)b;


@end

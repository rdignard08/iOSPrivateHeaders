
@interface UIKBBackdropView : _UIBackdropView {

    BOOL _primaryBackdrop;
    @"NSMutableArray" _secondaryBackdrops;
    @"UIKeyboardBackdropCornerView" _backdropCornerView;
    BOOL _hasUpdatedFrame;
}
 + (id) unconditionalTriggerNotificationNames;
 + (void) overlayRelevantSettings:(id)aontoSettings:(id)b;
 + (id) triggerNotificationNames;
 + (void) _registerSecondaryBackdropView:(id)a;
 + (void) _unregisterSecondaryBackdropView:(id)a;
 + (void) _updatedSecondaryBackdropsWithSettings:(id)a;

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) updateFrame:({CGRect={CGPoint=dd}{CGSize=dd}})awithCorners:(i)b;
 - (void) triggerUpdate:(id)a;
 - (void) transitionToStyle:(q)a;
 - (void) _setRenderConfig:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})astyle:(q)bprimaryBackdrop:(BOOL)c;
 - (i) textEffectsVisibilityLevel;
 - (void) willCallRenderInContextOnBackdropViewLayer;
 - (void) didCallRenderInContextOnBackdropViewLayer;
 - (BOOL) _hasUpdatedFrame;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) applySettings:(id)a;


@end

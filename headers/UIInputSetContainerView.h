
@interface UIInputSetContainerView : UIInputSetHostView {

    UIKBRenderConfig _renderConfig;
    BOOL _disableGeometryObserverNotifications;
}
 + (BOOL) _shouldHitTestInputViewFirst;
 + (BOOL) _notifyOnExplicitLayout;

 - (void) dealloc;
 - (BOOL) _disableGeometryObserverNotification;
 - (void) _setRenderConfig:(id)a;
 - (int) textEffectsVisibilityLevel;
 - (id) _inheritedRenderConfig;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _accessoryViewFrame;
 - (void) _setAccessoryViewFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) _inputWindowController;
 - (void) performWithoutGeometryObserverNotifications:(@?)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end


@interface _UITextEffectsRemoteView : _UIRemoteView {

    _UIRemoteViewController _remoteViewController;
}
 + (BOOL) _requiresWindowTouches;

 - (int) textEffectsVisibilityLevel;
 - (id) remoteViewController;
 - (void) setRemoteViewController:(id)a;


@end

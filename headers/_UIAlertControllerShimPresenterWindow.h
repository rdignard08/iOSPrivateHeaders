
@interface _UIAlertControllerShimPresenterWindow : UIWindow {

    @"UIAlertController" _alertController;
}
 + (BOOL) _isSystemWindow;

 - (BOOL) _shouldAutorotateToInterfaceOrientation:(q)a;
 - (id) alertController;
 - (void) presentAlertController:(id)aanimated:(BOOL)bcompletionBlock:(@?)c;
 - (id) _presentationViewController;
 - (id) init;


@end

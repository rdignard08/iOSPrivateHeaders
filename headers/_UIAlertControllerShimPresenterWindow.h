
@interface _UIAlertControllerShimPresenterWindow : UIWindow {

    UIAlertController* _alertController;
}
 + (BOOL) _isSystemWindow;

 - (BOOL) _shouldAutorotateToInterfaceOrientation:(long long)a ;
 - (id) alertController;
 - (void) presentAlertController:(id)a animated:(BOOL)b completionBlock:(@?)c ;
 - (id) _presentationViewController;
 - (id) init;


@end


@interface UISnapshotModalViewController : UIViewController {

    long long _interfaceOrientation;
    @"UIViewController" _disappearingViewController;
    @"UINavigationController" _parentController;
}

 - (void) dealloc;
 - (void) viewWillDisappear:(BOOL)a;
 - (void) viewDidDisappear:(BOOL)a;
 - (BOOL) _isSupportedInterfaceOrientation:(long long)a;
 - (id) disappearingViewController;
 - (id) initWithInterfaceOrientation:(long long)a;
 - (void) setDisappearingViewController:(id)a;


@end

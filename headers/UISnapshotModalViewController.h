
@interface UISnapshotModalViewController : UIViewController {

    q _interfaceOrientation;
    @"UIViewController" _disappearingViewController;
    @"UINavigationController" _parentController;
}

 - (void) dealloc;
 - (void) viewWillDisappear:(BOOL)a;
 - (void) viewDidDisappear:(BOOL)a;
 - (BOOL) _isSupportedInterfaceOrientation:(q)a;
 - (id) disappearingViewController;
 - (id) initWithInterfaceOrientation:(q)a;
 - (void) setDisappearingViewController:(id)a;


@end

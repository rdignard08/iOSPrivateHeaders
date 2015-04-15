
@protocol _UIDocumentPickerExtensionViewController;
@interface _UIDocumentPickerNavigationBridgeController : UINavigationController <_UIDocumentPickerExtensionViewController> {

    BOOL _hasSetInitialNavigationItem;
}
 + (id) _exportedInterface;
 + (id) _remoteViewControllerInterface;

 - (id) popViewControllerAnimated:(BOOL)a;
 - (void) _setTintColor:(id)a;
 - (void) _setPickableTypes:(id)a;
 - (void) _setPickerMode:(Q)a;
 - (void) _setUploadURLWrapper:(id)a;
 - (void) pushViewController:(id)aanimated:(BOOL)b;
 - (void) setViewControllers:(id)aanimated:(BOOL)b;
 - (id) popToViewController:(id)aanimated:(BOOL)b;
 - (id) popToRootViewControllerAnimated:(BOOL)a;
 - (void) _documentPickerDidDismiss;
 - (void) _prepareWithExtensionInfo:(id)acompletionHandler:(@?)b;
 - (id) hostingViewController;
 - (void) _doneButton:(id)a;
 - (void) _locationsMenu:(id)a;
 - (void) _updateNavigationItem;


@end

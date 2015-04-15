
@interface _UIRotatingAlertController : UIAlertController {

    <_UIRotatingAlertControllerDelegate>* _rotatingSheetDelegate;
    unsigned long long _arrowDirections;
    BOOL _isRotating;
    BOOL _readyToPresentAfterRotation;
    UIViewController* _presentedViewControllerWhileRotating;
    <UIPopoverPresentationControllerDelegate>* _popoverPresentationControllerDelegateWhileRotating;
}

 - (void) dealloc;
 - (void) willRotate;
 - (void) didRotate;
 - (void) doneWithSheet;
 - (void) setRotatingSheetDelegate:(id)a ;
 - (BOOL) presentSheet;
 - (void) setArrowDirections:(unsigned long long)a ;
 - (BOOL) presentSheetFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) _didRotateAndLayout;
 - (void) _updateSheetPositionAfterRotation;
 - (id) rotatingSheetDelegate;
 - (unsigned long long) arrowDirections;
 - (id) init;


@end

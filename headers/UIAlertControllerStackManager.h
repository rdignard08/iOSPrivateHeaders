
@interface UIAlertControllerStackManager : NSObject {

    NSMutableArray* _alertControllerStack;
    NSMutableArray* _hiddenAlertControllers;
}
 + (id) sharedStackManager;

 - (id) retain;
 - (Vv) release;
 - (id) autorelease;
 - (void) dealloc;
 - (void) _alertControllerWillAppear:(id)a;
 - (void) _alertControllerDidAppear:(id)a;
 - (void) _alertControllerWillDisappear:(id)a;
 - (void) _alertControllerDidDisappear:(id)a;
 - (void) _showHiddenStackedAlertControllers;
 - (void) _hideStackedAlertControllers;
 - (BOOL) _alertControllerShouldBeTrackedInStack:(id)a;
 - (void) _willShowAlertController:(id)a;
 - (void) _addAlertControllerToStack:(id)a;
 - (void) _willHideAlertController:(id)a;
 - (void) _removeAlertControllerFromStack:(id)a;
 - (void) _didHideAlertController:(id)a;
 - (void) _displayedAlertControllersChanged;
 - (id) _topAlertControllerInStack;
 - (long long) _alertControllerStackCount;
 - (void) _setHasAlertControllers:(BOOL)a;
 - (id) init;


@end

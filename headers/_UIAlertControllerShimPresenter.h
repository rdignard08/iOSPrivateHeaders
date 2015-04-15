
@protocol UIPopoverControllerDelegate;
@interface _UIAlertControllerShimPresenter : NSObject <UIPopoverControllerDelegate> {

    UIPopoverController* _popoverController;
    <UIPopoverControllerDelegate>* _popoverDelegate;
    UIViewController* _inPopoverViewController;
    _UIAlertControllerShimPresenterWindow* _window;
    UIAlertController* _alertController;
    UIAlertView* _legacyAlert;
}
@property (atomic, assign, readwrite) UIAlertController* alertController;
@property (atomic, assign, readwrite) UIAlertView* legacyAlert;
@property (atomic, assign, readonly) _UIAlertControllerShimPresenterWindow* window;
@property (atomic, assign, readwrite) NSNumber* popoverDelegate;
 + (id) _topmostAlertWindow;
 + (id) _topmostLegacyAlertIncludingPresentingAlerts:(BOOL)a;
 + (void) _cancelPendingTouchesIfAppropriate;
 + (void) _addPresenter:(id)a;
 + (BOOL) _shouldPresentActionSheetsFullscreen;
 + (void) _removePresenter:(id)a;
 + (id) _currentFullScreenAlertPresenters;

 - (void) dealloc;
 - (id) _popoverController;
 - (void) setAlertController:(id)a ;
 - (void) setLegacyAlert:(id)a ;
 - (void) _presentAlertControllerAnimated:(BOOL)a completion:(@?)b ;
 - (void) _dismissAlertControllerAnimated:(BOOL)a completion:(@?)b ;
 - (id) alertController;
 - (void) setPopoverDelegate:(id)a ;
 - (void) _presentAlertControllerFromBarButtonItem:(id)a animated:(BOOL)b completion:(@?)c ;
 - (void) _presentAlertControllerFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})a inView:(id)b direction:(unsigned long long)c animated:(BOOL)d completion:(@?)e ;
 - (void) _createWindowIfNecessary;
 - (void) _tearDownInPopoverViewController;
 - (id) legacyAlert;
 - (id) popoverDelegate;
 - (id) window;


@end

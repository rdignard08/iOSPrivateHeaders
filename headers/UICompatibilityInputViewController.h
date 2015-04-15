
@interface UICompatibilityInputViewController : UIInputViewController {

    UIKeyboardInputMode* _inputMode;
    UIKeyboard* _deferredSystemView;
    UIKeyboardInputMode* _incomingExtensionInputMode;
    BOOL _shouldRegenerateSizingConstraints;
    BOOL _shouldSuppressRemoteInputController;
    UIViewController* _inputController;
    UIView* _inputControllerSnapshot;
}
 + (BOOL) _shouldForwardViewWillTransitionToSize;
 + (id) deferredInputModeControllerWithKeyboard:(id)a;
 + (id) inputViewControllerWithView:(id)a;
 + (BOOL) _requiresProxyInterface;

 - (void) dealloc;
 - (id) inputController;
 - (void) setInputController:(id)a ;
 - (void) viewDidLayoutSubviews;
 - (void) loadView;
 - (void) didMoveToParentViewController:(id)a ;
 - (void) viewWillAppear:(BOOL)a ;
 - (BOOL) shouldAutomaticallyForwardRotationMethods;
 - (BOOL) shouldAutomaticallyForwardAppearanceMethods;
 - (void) willRotateToInterfaceOrientation:(long long)a duration:(double)b ;
 - (void) willAnimateRotationToInterfaceOrientation:(long long)a duration:(double)b ;
 - (void) didRotateFromInterfaceOrientation:(long long)a ;
 - (void) setInputMode:(id)a ;
 - (id) _keyboard;
 - (id) _compatibilityController;
 - (void) willResume:(id)a ;
 - (void) didSuspend:(id)a ;
 - (void) rebuildChildConstraints;
 - (void) generateCompatibleSizeConstraintsIfNecessary;
 - (id) _initAsDeferredController;
 - (void) shouldUpdateInputMode:(id)a ;
 - (void) tearDownInputController;
 - (void) removeSnapshotView;
 - (id) _compatView;
 - (id) inputControllerSnapshot;
 - (void) setInputControllerSnapshot:(id)a ;
 - (void) snapshotCurrentDisplay;
 - (id) childCompatibilityController;
 - (void) willBeginTranslation;
 - (void) finishSplitTransition:(BOOL)a ;
 - (void) didFinishTranslation;


@end

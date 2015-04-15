
@interface _UIModalItemsPresentingViewController : UIViewController {

    @"NSMutableArray" _items;
    @"NSMutableArray" _itemsViews;
    @"NSMutableArray" _occludedWindows;
    @"UIView" _backgroundView;
    @"_UIModalItem" _currentItem;
    @"UIView" _currentItemView;
    @"UIView" _dimmingView;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _keyboardFrame;
    double _keyboardHeight;
    BOOL _isInTransition;
    @"_UIModalItem" _itemBeingPresented;
    @"_UIModalItem" _itemBeingDismissed;
    @"UIWindow" _rotationDelegate;
    @? _itemsTransitionCompletion;
}

 - (void) dealloc;
 - (void) didReceiveMemoryWarning;
 - (BOOL) shouldAutorotate;
 - (unsigned long long) supportedInterfaceOrientations;
 - (BOOL) wantsFullScreenLayout;
 - (void) viewWillLayoutSubviews;
 - (id) initWithNibName:(id)abundle:(id)b;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a;
 - (long long) preferredInterfaceOrientationForPresentation;
 - (id) rotationDelegate;
 - (void) setRotationDelegate:(id)a;
 - (void) viewDidLoad;
 - (void) viewWillDisappear:(BOOL)a;
 - (void) willAnimateRotationToInterfaceOrientation:(long long)aduration:(double)b;
 - (void) didRotateFromInterfaceOrientation:(long long)a;
 - (void) setItemBeingPresented:(id)a;
 - (void) setItemBeingDismissed:(id)a;
 - (void) setItemsTransitionCompletion:(@?)a;
 - (void) setCurrentItem:(id)a;
 - (void) keyfirstResponderChanged:(id)a;
 - (void) keyboardChanged:(id)a;
 - (BOOL) isInTransition;
 - (id) itemBeingPresented;
 - (void) _applyPresentingAnimationEndingStateForModalItem:(id)aview:(id)bforceCenter:(BOOL)c;
 - (id) itemBeingDismissed;
 - (void) _applyDismissingAnimationEndingStateForModalItem:(id)aview:(id)bforceCenter:(BOOL)c;
 - (void) _dismissItem:(id)aandPresentItem:(id)banimated:(BOOL)ccompletion:(@?)d;
 - (id) _createViewForItem:(id)a;
 - (void) _desaturateUI;
 - (void) _applyPresentingViewMetricsStateForModalItem:(id)a;
 - (void) _resaturateUI;
 - (@?) itemsTransitionCompletion;
 - (void) _applyPresentingAnimationStartingStateForModalItem:(id)aview:(id)b;
 - (void) _applyDismissingAnimationEndingStateForModalItem:(id)aview:(id)b;
 - (void) _applyPresentingAnimationEndingStateForModalItem:(id)aview:(id)b;
 - (void) _dismissItem:(id)aandPresentItem:(id)banimated:(BOOL)ccompletion:(@?)dkeepDimmingView:(BOOL)e;
 - (void) _hideAnimated:(BOOL)adimmSpotlight:(BOOL)b;
 - (id) currentItem;
 - (id) initWithModalItemType:(long long)a;
 - (void) _hideItem:(id)aanimated:(BOOL)b;
 - (void) displayModalItem:(id)aanimated:(BOOL)b;
 - (void) hideModalItem:(id)aanimated:(BOOL)b;
 - (void) _dismissMe:(id)aanimated:(BOOL)b;
 - (void) _enqueueAdditionalTransitionCompletion:(@?)a;
 - (void) _hideDimmingViewAnimated:(BOOL)a;
 - (void) _showDimmingViewAnimated:(BOOL)a;
 - (void) _hide;
 - (void) _showDimmingView:(BOOL)aanimated:(BOOL)b;
 - (void) _showItem:(id)aanimated:(BOOL)bundimmSpotlight:(BOOL)c;
 - (void) _updateItem:(id)aanimated:(BOOL)b;
 - (void) setIsInTransition:(BOOL)a;


@end


@protocol NSCoding;
@interface UINavigationTransitionView : UIView <NSCoding> {

    id _delegate;
    UIView _fromView;
    UIView _toView;
    long long _transition;
    UIResponder _firstResponderToRestore;
    UIWindow _originalWindow;
    double _fromViewAlpha;
    b1 _isTransitioning;
    b1 _popoverWillCleanUpNavigationTransition;
    b1 _usesRoundedCorners;
}
 + (double) defaultDurationForTransition:(long long)a;

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (BOOL) transition:(long long)afromView:(id)btoView:(id)c;
 - (BOOL) isTransitioning;
 - (BOOL) _isTransitioningFromView:(id)a;
 - (BOOL) transition:(long long)atoView:(id)b;
 - (id) fromView;
 - (void) setUsesRoundedCorners:(BOOL)a;
 - (BOOL) usesRoundedCorners;
 - (void) _navigationTransitionDidStop;
 - (void) _cleanupTransition;
 - (void) _notifyDelegateTransitionDidStopWithContext:(id)a;
 - (void) setPopoverWillCleanUpNavigationTransition:(BOOL)a;
 - (BOOL) popoverWillCleanUpNavigationTransition;
 - (void) _cleanupTransitionFromPopover;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) delegate;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end

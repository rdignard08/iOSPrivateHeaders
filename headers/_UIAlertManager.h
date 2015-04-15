
@interface _UIAlertManager : NSObject {

}
 + (void) initialize;
 + (void) noteOrientationChangingTo:(q)a;
 + (void) hideAlertsForTermination;
 + (void) noteOrientationChangingTo:(q)aanimated:(BOOL)b;
 + (void) hideTopmostMiniAlert;
 + (void) showTopmostMiniAlertWithSynchronizationPort:(I)a;
 + (id) visibleAlert;
 + (void) reorientAlertWindowTo:(q)aanimated:(BOOL)bkeyboard:(id)c;
 + (void) tellSpringboardShowingAlert:(id)aanimated:(BOOL)bforSpringBoardAlertTransition:(BOOL)c;
 + (BOOL) hideTopMostAlertAnimated:(BOOL)a;
 + (BOOL) stackContainsAlert:(id)a;
 + (void) tellSpringboardHidingAlert:(id)aanimated:(BOOL)bforSpringBoardAlertTransition:(BOOL)c;
 + (void) sizeAlertWindowForCurrentOrientation;
 + (void) addToStack:(id)adontDimBackground:(BOOL)b;
 + (void) createAlertWindowIfNeeded:(BOOL)a;
 + (id) topMostAlert;
 + (void) removeFromStack:(id)a;
 + (BOOL) cancelTopMostAlertAnimated:(BOOL)a;
 + ({CGAffineTransform=dddddd}) calculatedAlertTransform;
 + (void) _applyAlertTransforms;
 + (void) applyInternalWindowTransform:({CGAffineTransform=dddddd})a;
 + (void) alertWindowAnimationDidStop:(id)afinished:(id)bcontext:(^v)c;
 + (void) hideDimmingViewAnimated:(BOOL)a;
 + (void) createAlertWindowIfNeeded:(BOOL)adeferDisplay:(BOOL)b;
 + (BOOL) cancelAlertsAnimated:(BOOL)a;
 + ({CGAffineTransform=dddddd}) _alertTranslationForInterfaceOrientation:(q)aandTranslation:(d)b;
 + (void) applyClientWindowTransform:({CGAffineTransform=dddddd})a;
 + (void) showDimmingViewAnimated:(BOOL)a;
 + (void) alertPopoutCompleted;

 - (void) _didHideDimmingView:(id)afinished:(id)b;


@end

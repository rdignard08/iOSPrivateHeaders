
@protocol UIGestureRecognizerDelegate;
@interface UIDictationFloatingStarkView : UIDictationView <UIGestureRecognizerDelegate> {

    @"UIDimmingView" _dimmingView;
}

 - (void) dealloc;
 - (void) show;
 - (void) layoutSubviews;
 - (void) dimmingViewWasTapped:(id)a;
 - (void) finishReturnToKeyboard;
 - (void) prepareForReturnToKeyboard;
 - (void) returnToKeyboard;
 - ({CGPoint=dd}) positionForShow;
 - (void) endpointButtonPressed;
 - (void) setInputViewsHiddenForDictation:(BOOL)a;
 - (void) setState:(i)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end

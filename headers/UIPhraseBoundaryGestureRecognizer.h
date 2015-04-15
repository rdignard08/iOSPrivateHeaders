
@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer {

    @"UIResponder<UITextInput>" _textInput;
    @"UIDelayedAction" _secondDelayTimer;
    double _secondDelay;
    BOOL _secondDelayElapsed;
    id _userData;
}

 - (void) _resetGestureRecognizer;
 - (void) clearTimer;
 - (void) startTimer;
 - (void) secondDelayElapsed:(id)a;
 - (double) secondDelay;
 - (id) textInput;
 - (void) setTextInput:(id)a;
 - (void) setSecondDelay:(double)a;
 - (BOOL) secondDelayElapsed;
 - (id) userData;
 - (void) setUserData:(id)a;
 - (void) setState:(long long)a;


@end

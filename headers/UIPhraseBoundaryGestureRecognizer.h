
@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer {

    @"UIResponder<UITextInput>" _textInput;
    @"UIDelayedAction" _secondDelayTimer;
    d _secondDelay;
    BOOL _secondDelayElapsed;
    id _userData;
}

 - (void) _resetGestureRecognizer;
 - (void) clearTimer;
 - (void) startTimer;
 - (void) secondDelayElapsed:(id)a;
 - (d) secondDelay;
 - (id) textInput;
 - (void) setTextInput:(id)a;
 - (void) setSecondDelay:(d)a;
 - (BOOL) secondDelayElapsed;
 - (id) userData;
 - (void) setUserData:(id)a;
 - (void) setState:(q)a;


@end

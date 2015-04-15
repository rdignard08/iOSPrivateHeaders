
@interface _UIRepeatingPressGestureRecognizer : UIGestureRecognizer {

    BOOL _timerOn;
    q _delayIndex;
    Q _numberOfTouchesRequired;
    q _buttonType;
}
 + (d) delayForRepeatNumber:(q)a;

 - (void) dealloc;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) _physicalButtonsBegan:(id)awithEvent:(id)b;
 - (void) _physicalButtonsEnded:(id)awithEvent:(id)b;
 - (void) _physicalButtonsCancelled:(id)awithEvent:(id)b;
 - (q) _buttonType;
 - (void) setView:(id)a;
 - (void) _setButtonType:(q)a;
 - (Q) numberOfTouchesRequired;
 - (void) setNumberOfTouchesRequired:(Q)a;
 - (void) _resetGestureRecognizer;
 - (void) _clearTapTimer;
 - (void) _beginPress;
 - (void) _endPress;
 - (void) _cancelPress;
 - (void) _scheduleNextTimer;
 - (void) _nextStep:(id)a;
 - (void) _finishNextStep:(id)a;


@end

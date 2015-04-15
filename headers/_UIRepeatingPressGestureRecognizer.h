
@interface _UIRepeatingPressGestureRecognizer : UIGestureRecognizer {

    BOOL _timerOn;
    long long _delayIndex;
    unsigned long long _numberOfTouchesRequired;
    long long _buttonType;
}
 + (double) delayForRepeatNumber:(long long)a;

 - (void) dealloc;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) _physicalButtonsBegan:(id)awithEvent:(id)b;
 - (void) _physicalButtonsEnded:(id)awithEvent:(id)b;
 - (void) _physicalButtonsCancelled:(id)awithEvent:(id)b;
 - (long long) _buttonType;
 - (void) setView:(id)a;
 - (void) _setButtonType:(long long)a;
 - (unsigned long long) numberOfTouchesRequired;
 - (void) setNumberOfTouchesRequired:(unsigned long long)a;
 - (void) _resetGestureRecognizer;
 - (void) _clearTapTimer;
 - (void) _beginPress;
 - (void) _endPress;
 - (void) _cancelPress;
 - (void) _scheduleNextTimer;
 - (void) _nextStep:(id)a;
 - (void) _finishNextStep:(id)a;


@end

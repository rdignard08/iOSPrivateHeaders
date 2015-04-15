
@interface _UISystemGestureGateGestureRecognizer : UIGestureRecognizer {

    b1 _systemGesturesRecognitionPossible;
    b1 _waitingForSystemGestureStateNotification;
    double _lastTouchTime;
    @"NSTimer" _delayTimeoutTimer;
}

 - (void) dealloc;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (id) initWithWindow:(id)a;
 - (void) _systemGestureStateChanged:(id)a;
 - (BOOL) canBePreventedByGestureRecognizer:(id)a;
 - (BOOL) canPreventGestureRecognizer:(id)a;
 - (void) _resetGestureRecognizer;
 - (id) _gateGestureTypeString;
 - (int) _gateGestureType;
 - (void) _timeOut;
 - (BOOL) _shouldBeRequiredToFailByGestureRecognizer:(id)a;
 - (id) initWithTarget:(id)aaction:(SEL)b;
 - (void) setEnabled:(BOOL)a;


@end

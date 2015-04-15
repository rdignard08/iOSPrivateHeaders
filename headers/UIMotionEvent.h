
@interface UIMotionEvent : UIInternalEvent {

    id _motionAccelerometer;
    long long _subtype;
    int _shakeState;
    long long _stateMachineState;
    double _shakeStartTime;
    double _lastMovementTime;
    double _highLevelTime;
    double _lowEndTimeout;
    NSTimer* _idleTimer;
    BOOL _sentMotionBegan;
    [10f] _lowPassState;
    unsigned long long _lowPassStateIndex;
    unsigned long long _highPassStateIndex;
    [2f] _highPassState;
    int notifyToken;
}

 - (id) _init;
 - (id) description;
 - (void) dealloc;
 - (BOOL) _isDetectingMotionEvents;
 - (void) _setSubtype:(long long)a ;
 - (void) setShakeState:(int)a ;
 - (id) _windows;
 - (void) _sendEventToResponder:(id)a ;
 - (int) _shakeState;
 - (void) _enablePeakDetectionForScreenBlanked:(id)a ;
 - (void) _willResume;
 - (void) _willSuspend;
 - (void) _updateAccelerometerEnabled;
 - (int) shakeState;
 - (BOOL) _detectWhenNotActive;
 - (void) _idleTimerFired;
 - (void) _resetLowPassState;
 - (void) _accelerometerDidDetectMovementWithTimestamp:(double)a ;
 - (float) _determineShakeLevelX:(float)a y:(float)b z:(float)c currentState:(long long)d ;
 - (long long) _feedStateMachine:(float)a currentState:(long long)b timestamp:(double)c ;
 - (float) _highPass:(float)a ;
 - (float) _lowPass:(float)a ;
 - (void) _enablePeakDetectionIfNecessary;
 - (long long) type;
 - (void) accelerometer:(id)a didAccelerateWithTimeStamp:(double)b x:(float)c y:(float)d z:(float)e eventType:(int)f ;
 - (long long) subtype;


@end

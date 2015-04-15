
@interface UIMotionEvent : UIInternalEvent {

    id _motionAccelerometer;
    q _subtype;
    i _shakeState;
    q _stateMachineState;
    d _shakeStartTime;
    d _lastMovementTime;
    d _highLevelTime;
    d _lowEndTimeout;
    @"NSTimer" _idleTimer;
    BOOL _sentMotionBegan;
    [10f] _lowPassState;
    Q _lowPassStateIndex;
    Q _highPassStateIndex;
    [2f] _highPassState;
    i notifyToken;
}

 - (id) _init;
 - (id) description;
 - (void) dealloc;
 - (BOOL) _isDetectingMotionEvents;
 - (void) _setSubtype:(q)a;
 - (void) setShakeState:(i)a;
 - (id) _windows;
 - (void) _sendEventToResponder:(id)a;
 - (i) _shakeState;
 - (void) _enablePeakDetectionForScreenBlanked:(id)a;
 - (void) _willResume;
 - (void) _willSuspend;
 - (void) _updateAccelerometerEnabled;
 - (i) shakeState;
 - (BOOL) _detectWhenNotActive;
 - (void) _idleTimerFired;
 - (void) _resetLowPassState;
 - (void) _accelerometerDidDetectMovementWithTimestamp:(d)a;
 - (f) _determineShakeLevelX:(f)ay:(f)bz:(f)ccurrentState:(q)d;
 - (q) _feedStateMachine:(f)acurrentState:(q)btimestamp:(d)c;
 - (f) _highPass:(f)a;
 - (f) _lowPass:(f)a;
 - (void) _enablePeakDetectionIfNecessary;
 - (q) type;
 - (void) accelerometer:(id)adidAccelerateWithTimeStamp:(d)bx:(f)cy:(f)dz:(f)eeventType:(i)f;
 - (q) subtype;


@end

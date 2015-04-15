
@interface BKSAccelerometer : NSObject {

    @"<BKSAccelerometerDelegate>" _delegate;
    ^{__CFRunLoopSource=} _accelerometerEventsSource;
    ^{__CFRunLoop=} _accelerometerEventsRunLoop;
    d _interval;
    @"NSLock" _lock;
    i _orientationCheckToken;
    i _orientationNotificationsToken;
    @"NSThread" _orientationEventsThread;
    I _orientationPort;
    BOOL _passiveOrientationEvents;
    BOOL _orientationEventsEnabled;
    f _xThreshold;
    f _yThreshold;
    f _zThreshold;
    d _updateInterval;
}
@property (nonatomic, assign, readwrite) NSNumber* accelerometerEventsEnabled;
@property (nonatomic, assign, readwrite) NSNumber* updateInterval;
@property (nonatomic, assign, readwrite) NSNumber* xThreshold;
@property (nonatomic, assign, readwrite) NSNumber* yThreshold;
@property (nonatomic, assign, readwrite) NSNumber* zThreshold;
@property (nonatomic, assign, readwrite) NSNumber* passiveOrientationEvents;
@property (nonatomic, assign, readwrite) NSNumber* orientationEventsEnabled;
@property (nonatomic, assign, readwrite) NSNumber* delegate;

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) init;
 - (id) delegate;
 - (void) setAccelerometerEventsEnabled:(BOOL)a;
 - (void) setOrientationEventsEnabled:(BOOL)a;
 - (BOOL) accelerometerEventsEnabled;
 - (void) _checkOut;
 - (void) _updateOrientationServer;
 - (void) _orientationDidChange;
 - (i) currentDeviceOrientation;
 - (void) _serverWasRestarted;
 - (void) setPassiveOrientationEvents:(BOOL)a;
 - (id) _orientationEventsThread;
 - (BOOL) passiveOrientationEvents;
 - (d) updateInterval;
 - (void) setUpdateInterval:(d)a;
 - (f) xThreshold;
 - (void) setXThreshold:(f)a;
 - (f) yThreshold;
 - (void) setYThreshold:(f)a;
 - (f) zThreshold;
 - (void) setZThreshold:(f)a;
 - (BOOL) orientationEventsEnabled;
 - (void) _checkIn;


@end

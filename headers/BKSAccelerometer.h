
@interface BKSAccelerometer : NSObject {

    <BKSAccelerometerDelegate>* _delegate;
    ^{__CFRunLoopSource=} _accelerometerEventsSource;
    ^{__CFRunLoop=} _accelerometerEventsRunLoop;
    double _interval;
    NSLock* _lock;
    int _orientationCheckToken;
    int _orientationNotificationsToken;
    NSThread* _orientationEventsThread;
    unsigned int _orientationPort;
    BOOL _passiveOrientationEvents;
    BOOL _orientationEventsEnabled;
    float _xThreshold;
    float _yThreshold;
    float _zThreshold;
    double _updateInterval;
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
 - (void) setDelegate:(id)a ;
 - (id) init;
 - (id) delegate;
 - (void) setAccelerometerEventsEnabled:(BOOL)a ;
 - (void) setOrientationEventsEnabled:(BOOL)a ;
 - (BOOL) accelerometerEventsEnabled;
 - (void) _checkOut;
 - (void) _updateOrientationServer;
 - (void) _orientationDidChange;
 - (int) currentDeviceOrientation;
 - (void) _serverWasRestarted;
 - (void) setPassiveOrientationEvents:(BOOL)a ;
 - (id) _orientationEventsThread;
 - (BOOL) passiveOrientationEvents;
 - (double) updateInterval;
 - (void) setUpdateInterval:(double)a ;
 - (float) xThreshold;
 - (void) setXThreshold:(float)a ;
 - (float) yThreshold;
 - (void) setYThreshold:(float)a ;
 - (float) zThreshold;
 - (void) setZThreshold:(float)a ;
 - (BOOL) orientationEventsEnabled;
 - (void) _checkIn;


@end


@interface UIAccelerometer : NSObject {

    d _updateInterval;
    @"<UIAccelerometerDelegate>" _delegate;
    {?="delegateDidAccelerate"b1"reserved"b31} _accelerometerFlags;
    @"CMMotionManager" _motionManager;
}
@property (nonatomic, assign, readwrite) NSNumber* updateInterval;
@property (nonatomic, assign, readwrite) NSNumber* delegate;
 + (id) sharedAccelerometer;

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) _acceleratedInX:(d)ay:(d)bz:(d)ctimestamp:(d)d;
 - (void) _willResume:(id)a;
 - (void) _didSuspend:(id)a;
 - (id) _motionManager;
 - (void) _startAccelerometerIfNecessary;
 - (void) _stopAccelerometer;
 - (id) init;
 - (id) delegate;
 - (d) updateInterval;
 - (void) setUpdateInterval:(d)a;


@end

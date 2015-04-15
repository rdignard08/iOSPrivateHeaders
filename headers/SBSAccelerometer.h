
@protocol BKSAccelerometerDelegate;
@interface SBSAccelerometer : NSObject <BKSAccelerometerDelegate> {

    @"<SBSAccelerometerDelegate>" _delegate;
    @"BKSAccelerometer" _bksMirror;
}
@property (nonatomic, assign, readwrite) NSNumber* accelerometerEventsEnabled;
@property (nonatomic, assign, readwrite) NSNumber* updateInterval;
@property (nonatomic, assign, readwrite) NSNumber* xThreshold;
@property (nonatomic, assign, readwrite) NSNumber* yThreshold;
@property (nonatomic, assign, readwrite) NSNumber* zThreshold;
@property (nonatomic, assign, readwrite) NSNumber* orientationEventsEnabled;
@property (nonatomic, assign, readwrite) NSNumber* delegate;

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) init;
 - (id) delegate;
 - (void) setAccelerometerEventsEnabled:(BOOL)a;
 - (void) setOrientationEventsEnabled:(BOOL)a;
 - (BOOL) accelerometerEventsEnabled;
 - (void) accelerometer:(id)adidAccelerateWithTimeStamp:(d)bx:(f)cy:(f)dz:(f)eeventType:(i)f;
 - (void) accelerometer:(id)adidChangeDeviceOrientation:(i)b;
 - (i) currentDeviceOrientation;
 - (d) updateInterval;
 - (void) setUpdateInterval:(d)a;
 - (f) xThreshold;
 - (void) setXThreshold:(f)a;
 - (f) yThreshold;
 - (void) setYThreshold:(f)a;
 - (f) zThreshold;
 - (void) setZThreshold:(f)a;
 - (BOOL) orientationEventsEnabled;


@end

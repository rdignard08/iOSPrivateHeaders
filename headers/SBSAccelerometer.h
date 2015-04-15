
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
 - (void) accelerometer:(id)adidAccelerateWithTimeStamp:(double)bx:(float)cy:(float)dz:(float)eeventType:(int)f;
 - (void) accelerometer:(id)adidChangeDeviceOrientation:(int)b;
 - (int) currentDeviceOrientation;
 - (double) updateInterval;
 - (void) setUpdateInterval:(double)a;
 - (float) xThreshold;
 - (void) setXThreshold:(float)a;
 - (float) yThreshold;
 - (void) setYThreshold:(float)a;
 - (float) zThreshold;
 - (void) setZThreshold:(float)a;
 - (BOOL) orientationEventsEnabled;


@end

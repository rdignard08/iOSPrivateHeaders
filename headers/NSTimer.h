
@interface NSTimer : NSObject {

}
@property (atomic, copy, readwrite) NSDate* fireDate;
@property (atomic, assign, readonly) NSNumber* timeInterval;
@property (atomic, assign, readwrite) NSNumber* tolerance;
@property (atomic, assign, readonly, isValid) NSNumber* valid;
@property (atomic, retain, readonly) NSNumber* userInfo;
 + (id) timerWithTimeInterval:(double)ainvocation:(id)brepeats:(BOOL)c;
 + (id) scheduledTimerWithTimeInterval:(double)ainvocation:(id)brepeats:(BOOL)c;
 + (id) timerWithFireDate:(id)atarget:(id)bselector:(SEL)cuserInfo:(id)d;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) scheduledTimerWithTimeInterval:(double)atarget:(id)bselector:(SEL)cuserInfo:(id)drepeats:(BOOL)e;
 + (id) timerWithTimeInterval:(double)atarget:(id)bselector:(SEL)cuserInfo:(id)drepeats:(BOOL)e;

 - (id) initWithFireDate:(id)ainterval:(double)btarget:(id)cselector:(SEL)duserInfo:(id)erepeats:(BOOL)f;
 - (id) fireDate;
 - (void) setFireDate:(id)a;
 - (void) fire;
 - (^{__CFString=}) copyDebugDescription;
 - (double) fireTime;
 - (void) setFireTime:(double)a;
 - (id) userInfo;
 - (void) invalidate;
 - (BOOL) isValid;
 - (double) timeInterval;
 - (double) tolerance;
 - (void) setTolerance:(double)a;
 - (double) _cffireTime;
 - (long long) order;
 - (double) interval;
 - ({?=q^v^?^?^?}) context;


@end

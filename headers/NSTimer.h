
@interface NSTimer : NSObject {

}
@property (atomic, copy, readwrite) NSDate* fireDate;
@property (atomic, assign, readonly) NSNumber* timeInterval;
@property (atomic, assign, readwrite) NSNumber* tolerance;
@property (atomic, assign, readonly, isValid) NSNumber* valid;
@property (atomic, retain, readonly) NSNumber* userInfo;
 + (id) timerWithTimeInterval:(d)ainvocation:(id)brepeats:(BOOL)c;
 + (id) scheduledTimerWithTimeInterval:(d)ainvocation:(id)brepeats:(BOOL)c;
 + (id) timerWithFireDate:(id)atarget:(id)bselector:(SEL)cuserInfo:(id)d;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) scheduledTimerWithTimeInterval:(d)atarget:(id)bselector:(SEL)cuserInfo:(id)drepeats:(BOOL)e;
 + (id) timerWithTimeInterval:(d)atarget:(id)bselector:(SEL)cuserInfo:(id)drepeats:(BOOL)e;

 - (id) initWithFireDate:(id)ainterval:(d)btarget:(id)cselector:(SEL)duserInfo:(id)erepeats:(BOOL)f;
 - (id) fireDate;
 - (void) setFireDate:(id)a;
 - (void) fire;
 - (^{__CFString=}) copyDebugDescription;
 - (d) fireTime;
 - (void) setFireTime:(d)a;
 - (id) userInfo;
 - (void) invalidate;
 - (BOOL) isValid;
 - (d) timeInterval;
 - (d) tolerance;
 - (void) setTolerance:(d)a;
 - (d) _cffireTime;
 - (q) order;
 - (d) interval;
 - ({?=q^v^?^?^?}) context;


@end

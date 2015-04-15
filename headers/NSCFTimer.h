
@interface NSCFTimer : NSTimer {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) initWithFireDate:(id)a interval:(double)b target:(id)c selector:(SEL)d userInfo:(id)e repeats:(BOOL)f ;
 - (id) fireDate;
 - (void) setFireDate:(id)a ;
 - (void) fire;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) finalize;
 - (BOOL) retainWeakReference;
 - (BOOL) allowsWeakReference;
 - (id) userInfo;
 - (void) invalidate;
 - (BOOL) isValid;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (unsigned long long) _cfTypeID;
 - (double) timeInterval;
 - (double) tolerance;
 - (void) setTolerance:(double)a ;
 - (id) init;


@end

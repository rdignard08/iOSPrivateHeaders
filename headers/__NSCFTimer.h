
@interface __NSCFTimer : NSTimer {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) initWithFireDate:(id)ainterval:(d)btarget:(id)cselector:(SEL)duserInfo:(id)erepeats:(BOOL)f;
 - (id) fireDate;
 - (void) setFireDate:(id)a;
 - (void) fire;
 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (id) userInfo;
 - (void) invalidate;
 - (BOOL) isValid;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (Q) _cfTypeID;
 - (d) timeInterval;
 - (d) tolerance;
 - (void) setTolerance:(d)a;
 - (id) init;


@end

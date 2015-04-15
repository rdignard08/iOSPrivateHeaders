
@interface __NSDate : NSDate {

    double _time;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) __new:(double)a;

 - (void) dealloc;
 - (double) timeIntervalSinceReferenceDate;
 - (id) initWithTimeIntervalSinceReferenceDate:(double)a ;


@end

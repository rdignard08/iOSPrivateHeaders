
@interface NSCFError : NSError {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;

 - (Class) classForCoder;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) finalize;
 - (BOOL) retainWeakReference;
 - (BOOL) allowsWeakReference;
 - (id) domain;
 - (long long) code;
 - (id) userInfo;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;


@end

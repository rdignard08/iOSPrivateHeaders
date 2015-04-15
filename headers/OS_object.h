
@interface OS_object : NSObject {

}

 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (BOOL) retainWeakReference;
 - (BOOL) allowsWeakReference;
 - (void) _xref_dispose;
 - (void) _dispose;


@end

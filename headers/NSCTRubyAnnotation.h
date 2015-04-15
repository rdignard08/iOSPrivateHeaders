
@interface NSCTRubyAnnotation : NSRubyAnnotation {

}
 + (Class) classForKeyedArchiver;
 + (Class) classForKeyedUnarchiver;

 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) finalize;
 - (BOOL) retainWeakReference;
 - (BOOL) allowsWeakReference;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (unsigned long long) _cfTypeID;


@end

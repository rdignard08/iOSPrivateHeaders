
@interface NSCTRubyAnnotation : NSRubyAnnotation {

}
 + (Class) classForKeyedArchiver;
 + (Class) classForKeyedUnarchiver;

 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) finalize;
 - (BOOL) retainWeakReference;
 - (BOOL) allowsWeakReference;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (Q) _cfTypeID;


@end

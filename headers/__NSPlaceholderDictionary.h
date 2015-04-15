
@interface __NSPlaceholderDictionary : NSMutableDictionary {

}
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) immutablePlaceholder;
 + (id) mutablePlaceholder;

 - (id) initWithContentsOfFile:(id)a ;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (unsigned long long) count;
 - (id) objectForKey:(id)a ;
 - (void) removeObjectForKey:(id)a ;
 - (id) initWithCapacity:(unsigned long long)a ;
 - (id) initWithObjects:(r^@)a forKeys:(r^@)b count:(unsigned long long)c ;
 - (id) keyEnumerator;
 - (void) setObject:(id)a forKey:(id)b ;
 - (id) init;
 - (id) initWithContentsOfURL:(id)a ;


@end

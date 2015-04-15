
@interface __NSPlaceholderArray : NSMutableArray {

}
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) immutablePlaceholder;
 + (id) mutablePlaceholder;

 - (id) initWithContentsOfFile:(id)a;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (unsigned long long) count;
 - (id) objectAtIndex:(unsigned long long)a;
 - (void) insertObject:(id)aatIndex:(unsigned long long)b;
 - (void) removeObjectAtIndex:(unsigned long long)a;
 - (id) initWithObjects:(r^@)acount:(unsigned long long)b;
 - (id) initWithCapacity:(unsigned long long)a;
 - (void) replaceObjectAtIndex:(unsigned long long)awithObject:(id)b;
 - (id) init;
 - (id) initWithContentsOfURL:(id)a;


@end


@interface NSIdRunStorage : NSRunStorage {

}
 + (void) initialize;

 - (void) dealloc;
 - (void) _allocData:(unsigned long long)a;
 - (void) _reallocData:(unsigned long long)a;


@end

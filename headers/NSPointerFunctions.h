
@protocol NSCopying;
@interface NSPointerFunctions : NSObject <NSCopying> {

}
@property (atomic, assign, readwrite) NSNumber* hashFunction;
@property (atomic, assign, readwrite) NSNumber* isEqualFunction;
@property (atomic, assign, readwrite) NSNumber* sizeFunction;
@property (atomic, assign, readwrite) NSNumber* descriptionFunction;
@property (atomic, assign, readwrite) NSNumber* relinquishFunction;
@property (atomic, assign, readwrite) NSNumber* acquireFunction;
@property (atomic, assign, readwrite) NSNumber* usesStrongWriteBarrier;
@property (atomic, assign, readwrite) NSNumber* usesWeakReadAndWriteBarriers;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) pointerFunctionsWithOptions:(unsigned long long)a;

 - (id) initWithOptions:(unsigned long long)a ;
 - (void) setHashFunction:(^?)a ;
 - (void) setIsEqualFunction:(^?)a ;
 - (void) setSizeFunction:(^?)a ;
 - (void) setAcquireFunction:(^?)a ;
 - (void) setRelinquishFunction:(^?)a ;
 - (void) setUsesStrongWriteBarrier:(BOOL)a ;
 - (void) setUsesWeakReadAndWriteBarriers:(BOOL)a ;
 - (^?) sizeFunction;
 - (^?) hashFunction;
 - (^?) isEqualFunction;
 - (^?) descriptionFunction;
 - (^?) acquireFunction;
 - (^?) relinquishFunction;
 - (BOOL) usesStrongWriteBarrier;
 - (BOOL) usesWeakReadAndWriteBarriers;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) setDescriptionFunction:(^?)a ;


@end

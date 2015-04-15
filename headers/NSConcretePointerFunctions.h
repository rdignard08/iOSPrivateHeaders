
@interface NSConcretePointerFunctions : NSPointerFunctions {

    {NSSlice="items"^^v"wantsStrong"B"wantsWeak"B"wantsARC"B"shouldCopyIn"B"usesStrong"B"usesWeak"B"usesARC"B"usesSentinel"B"pointerPersonality"B"integerPersonality"B"simpleReadClear"B"callback"@"NSWeakCallback""sizeFunction"^?"hashFunction"^?"isEqualFunction"^?"describeFunction"^?"acquireFunction"^?"relinquishFunction"^?"allocateFunction"^?"freeFunction"^?"readAt"^?"clearAt"^?"storeAt"^?} slice;
}
 + (BOOL) initializeSlice:(^{NSSlice=^^vBBBBBBBBBBB@^?^?^?^?^?^?^?^?^?^?^?})awithOptions:(unsigned long long)b;
 + (void) initializeBackingStore:(^{NSSlice=^^vBBBBBBBBBBB@^?^?^?^?^?^?^?^?^?^?^?})asentinel:(BOOL)bcompactable:(BOOL)c;

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
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) setDescriptionFunction:(^?)a ;


@end

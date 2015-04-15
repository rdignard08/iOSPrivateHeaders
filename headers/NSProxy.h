
@protocol NSObject;
@interface NSProxy : nil <NSObject> {

    Class isa;
}
 + (^{_NSZone=}) zone;
 + (^?) instanceMethodForSelector:(SEL)a;
 + (BOOL) isAncestorOfObject:(id)a;
 + (id) instanceMethodSignatureForSelector:(SEL)a;
 + (id) copyWithZone:(^{_NSZone=})a;
 + (id) mutableCopyWithZone:(^{_NSZone=})a;
 + (void) doesNotRecognizeSelector:(SEL)a;
 + (id) description;
 + (BOOL) isFault;
 + (void) initialize;
 + (id) retain;
 + (Vv) release;
 + (id) autorelease;
 + (Q) retainCount;
 + (id) alloc;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (void) dealloc;
 + (id) copy;
 + (void) finalize;
 + (void) forwardInvocation:(id)a;
 + (BOOL) _tryRetain;
 + (BOOL) _isDeallocating;
 + (BOOL) retainWeakReference;
 + (BOOL) allowsWeakReference;
 + (BOOL) isKindOfClass:(Class)a;
 + (id) mutableCopy;
 + (Q) hash;
 + (BOOL) isEqual:(id)a;
 + (BOOL) respondsToSelector:(SEL)a;
 + (id) self;
 + (id) performSelector:(SEL)a;
 + (id) performSelector:(SEL)awithObject:(id)b;
 + (BOOL) conformsToProtocol:(id)a;
 + (id) methodSignatureForSelector:(SEL)a;
 + (id) forwardingTargetForSelector:(SEL)a;
 + (id) _copyDescription;
 + (^?) methodForSelector:(SEL)a;
 + (Class) class;
 + (id) debugDescription;
 + (id) init;
 + (BOOL) isProxy;
 + (BOOL) isMemberOfClass:(Class)a;
 + (Class) superclass;
 + (BOOL) instancesRespondToSelector:(SEL)a;
 + (BOOL) isSubclassOfClass:(Class)a;
 + (id) performSelector:(SEL)awithObject:(id)bwithObject:(id)c;

 - (^{_NSZone=}) zone;
 - (BOOL) _allowsDirectEncoding;
 - (BOOL) _conformsToProtocolNamed:(r*)a;
 - (^{objc_method_description=:*}) methodDescriptionForSelector:(SEL)a;
 - (void) doesNotRecognizeSelector:(SEL)a;
 - (id) description;
 - (BOOL) isFault;
 - (id) retain;
 - (Vv) release;
 - (id) autorelease;
 - (Q) retainCount;
 - (void) dealloc;
 - (void) finalize;
 - (void) forwardInvocation:(id)a;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (BOOL) retainWeakReference;
 - (BOOL) allowsWeakReference;
 - (BOOL) isKindOfClass:(Class)a;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (BOOL) respondsToSelector:(SEL)a;
 - (id) self;
 - (id) performSelector:(SEL)a;
 - (id) performSelector:(SEL)awithObject:(id)b;
 - (BOOL) conformsToProtocol:(id)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (id) forwardingTargetForSelector:(SEL)a;
 - (id) _copyDescription;
 - (Class) class;
 - (id) debugDescription;
 - (BOOL) isProxy;
 - (BOOL) isMemberOfClass:(Class)a;
 - (Class) superclass;
 - (id) performSelector:(SEL)awithObject:(id)bwithObject:(id)c;


@end
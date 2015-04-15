
@interface UIThreadSafeNode : NSObject {

    @"DOMNode" _node;
}
 + (id) threadSafeNodeWithNode:(id)a;

 - (id) description;
 - (void) dealloc;
 - (void) forwardInvocation:(id)a;
 - (BOOL) isKindOfClass:(Class)a;
 - (BOOL) isEqual:(id)a;
 - (BOOL) respondsToSelector:(SEL)a;
 - (BOOL) conformsToProtocol:(id)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (id) initWithNode:(id)a;
 - (id) _realNode;


@end

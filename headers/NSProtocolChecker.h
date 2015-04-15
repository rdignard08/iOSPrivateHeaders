
@interface NSProtocolChecker : NSProxy {

}
 + (id) protocolCheckerWithTarget:(id)aprotocol:(id)b;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) target;
 - (^{objc_method_description=:*}) methodDescriptionForSelector:(SEL)a;
 - (r*) _localClassNameForClass;
 - (id) initWithTarget:(id)aprotocol:(id)b;
 - (void) doesNotRecognizeSelector:(SEL)a;
 - (void) forwardInvocation:(id)a;
 - (BOOL) respondsToSelector:(SEL)a;
 - (BOOL) conformsToProtocol:(id)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (id) forwardingTargetForSelector:(SEL)a;
 - (id) protocol;


@end

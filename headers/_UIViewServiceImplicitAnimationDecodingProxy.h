
@protocol _UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface;
@interface _UIViewServiceImplicitAnimationDecodingProxy : _UITargetedProxy <_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface> {

    SEL _implicitAnimationSelector;
    _UIViewAnimationAttributes* _animationAttributes;
}
 + (id) proxyDecodingAnimationsForTarget:(id)a;

 - (void) dealloc;
 - (void) forwardInvocation:(id)a;
 - (void) __animateNextInvocationOfSelector:(id)awithAnimationAttributes:(id)b;


@end

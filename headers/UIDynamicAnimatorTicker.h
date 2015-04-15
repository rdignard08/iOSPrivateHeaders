
@interface UIDynamicAnimatorTicker : NSObject {

    UIDynamicAnimator _animator;
}
@property (atomic, assign, readwrite) UIDynamicAnimator* animator;

 - (void) setAnimator:(id)a;
 - (id) animator;
 - (void) _displayLinkTick:(id)a;


@end

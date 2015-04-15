
@interface _UIViewKeyValueAnimationFactoryTransition : NSObject {

    CABasicAnimation* _fromAnimation;
    CABasicAnimation* _toAnimation;
}
@property (nonatomic, retain, readwrite) CABasicAnimation* fromAnimation;
@property (nonatomic, retain, readwrite) CABasicAnimation* toAnimation;

 - (void) dealloc;
 - (id) fromAnimation;
 - (void) setFromAnimation:(id)a;
 - (id) toAnimation;
 - (void) setToAnimation:(id)a;


@end

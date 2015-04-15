
@interface TIKeyboardKeyBehaviors : NSObject {

    Q _spaceKeyBehavior;
    Q _returnKeyBehavior;
}
@property (nonatomic, assign, readwrite) NSNumber* spaceKeyBehavior;
@property (nonatomic, assign, readwrite) NSNumber* returnKeyBehavior;
 + (id) behaviorForSpaceKey:(Q)aforReturnKey:(Q)b;

 - (Q) spaceKeyBehavior;
 - (Q) returnKeyBehavior;
 - (id) initWithSpaceKeyBehavior:(Q)areturnKeyBehavior:(Q)b;
 - (void) setSpaceKeyBehavior:(Q)a;
 - (void) setReturnKeyBehavior:(Q)a;


@end


@interface TIKeyboardKeyBehaviors : NSObject {

    unsigned long long _spaceKeyBehavior;
    unsigned long long _returnKeyBehavior;
}
@property (nonatomic, assign, readwrite) NSNumber* spaceKeyBehavior;
@property (nonatomic, assign, readwrite) NSNumber* returnKeyBehavior;
 + (id) behaviorForSpaceKey:(unsigned long long)aforReturnKey:(unsigned long long)b;

 - (unsigned long long) spaceKeyBehavior;
 - (unsigned long long) returnKeyBehavior;
 - (id) initWithSpaceKeyBehavior:(unsigned long long)a returnKeyBehavior:(unsigned long long)b ;
 - (void) setSpaceKeyBehavior:(unsigned long long)a ;
 - (void) setReturnKeyBehavior:(unsigned long long)a ;


@end

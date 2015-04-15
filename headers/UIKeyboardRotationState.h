
@interface UIKeyboardRotationState : NSObject {

    int _state;
    BOOL _requiresNewState;
    int _postRotationState;
    @"UIInputViewAnimationStyle" _animationStyle;
    long long _targetOrientation;
}
@property (nonatomic, assign, readwrite) NSNumber* state;
@property (nonatomic, assign, readwrite) NSNumber* requiresNewState;
@property (nonatomic, assign, readwrite) NSNumber* postRotationState;
@property (nonatomic, retain, readwrite) UIInputViewAnimationStyle* animationStyle;
@property (nonatomic, assign, readwrite) NSNumber* targetOrientation;
 + (id) stateWithState:(int)atargetOrientation:(long long)b;

 - (void) dealloc;
 - (id) animationStyle;
 - (long long) targetOrientation;
 - (void) setPostRotationState:(int)aanimationStyle:(id)b;
 - (void) setAnimationStyle:(id)a;
 - (void) setRequiresNewState:(BOOL)a;
 - (void) setPostRotationState:(int)a;
 - (void) setTargetOrientation:(long long)a;
 - (BOOL) requiresNewState;
 - (int) postRotationState;
 - (int) state;
 - (void) setState:(int)a;


@end

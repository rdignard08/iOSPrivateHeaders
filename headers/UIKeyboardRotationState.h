
@interface UIKeyboardRotationState : NSObject {

    i _state;
    BOOL _requiresNewState;
    i _postRotationState;
    @"UIInputViewAnimationStyle" _animationStyle;
    q _targetOrientation;
}
@property (nonatomic, assign, readwrite) NSNumber* state;
@property (nonatomic, assign, readwrite) NSNumber* requiresNewState;
@property (nonatomic, assign, readwrite) NSNumber* postRotationState;
@property (nonatomic, retain, readwrite) UIInputViewAnimationStyle* animationStyle;
@property (nonatomic, assign, readwrite) NSNumber* targetOrientation;
 + (id) stateWithState:(i)atargetOrientation:(q)b;

 - (void) dealloc;
 - (id) animationStyle;
 - (q) targetOrientation;
 - (void) setPostRotationState:(i)aanimationStyle:(id)b;
 - (void) setAnimationStyle:(id)a;
 - (void) setRequiresNewState:(BOOL)a;
 - (void) setPostRotationState:(i)a;
 - (void) setTargetOrientation:(q)a;
 - (BOOL) requiresNewState;
 - (i) postRotationState;
 - (i) state;
 - (void) setState:(i)a;


@end

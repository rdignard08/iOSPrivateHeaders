
@protocol NSCopying;
@interface UIInputViewAnimationStyle : NSObject <NSCopying> {

    BOOL animated;
    d duration;
    Q extraOptions;
    BOOL interactivelyCancelled;
    BOOL force;
}
@property (nonatomic, assign, readwrite) NSNumber* animated;
@property (nonatomic, assign, readwrite) NSNumber* duration;
@property (nonatomic, assign, readwrite) NSNumber* extraOptions;
@property (nonatomic, assign, readwrite) NSNumber* interactivelyCancelled;
@property (nonatomic, assign, readonly) NSNumber* isAnimationCompleted;
@property (nonatomic, assign, readonly) NSNumber* canDismissWithScrollView;
@property (nonatomic, assign, readwrite) NSNumber* force;
 + (id) animationStyleImmediate;
 + (id) animationStyleDefault;
 + (id) animationStyleAnimated:(BOOL)aduration:(d)b;

 - (d) duration;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (BOOL) isEqual:(id)a;
 - (BOOL) animated;
 - (void) setAnimated:(BOOL)a;
 - (void) setExtraOptions:(Q)a;
 - (Q) extraOptions;
 - (void) setInteractivelyCancelled:(BOOL)a;
 - (void) launchAnimation:(@?)aafterStarted:(@?)bcompletion:(@?)cforHost:(id)dfromCurrentPosition:(BOOL)e;
 - (id) controllerForStartPlacement:(id)aendPlacement:(id)b;
 - (BOOL) isAnimationCompleted;
 - (BOOL) canDismissWithScrollView;
 - (void) setForce:(BOOL)a;
 - (id) endPlacementForInputViewSet:(id)a;
 - (BOOL) interactivelyCancelled;
 - (BOOL) force;
 - (id) startPlacementForInputViewSet:(id)acurrentPlacement:(id)b;
 - (void) setDuration:(d)a;


@end
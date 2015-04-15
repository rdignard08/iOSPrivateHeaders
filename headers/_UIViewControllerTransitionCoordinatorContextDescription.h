
@protocol NSSecureCoding;
@interface _UIViewControllerTransitionCoordinatorContextDescription : NSObject <NSSecureCoding> {

    BOOL _animated;
    BOOL _interactive;
    BOOL _cancelled;
    d _transitionDuration;
    d _percentComplete;
    d _completionVelocity;
    q _completionCurve;
    q _toOrientation;
    q _fromOrientation;
    {CGAffineTransform="a"d"b"d"c"d"d"d"tx"d"ty"d} _targetTransform;
}
@property (nonatomic, assign, readwrite, isAnimated) NSNumber* animated;
@property (nonatomic, assign, readwrite, isInteractive) NSNumber* interactive;
@property (nonatomic, assign, readwrite, isCancelled) NSNumber* cancelled;
@property (nonatomic, assign, readwrite) NSNumber* transitionDuration;
@property (nonatomic, assign, readwrite) NSNumber* percentComplete;
@property (nonatomic, assign, readwrite) NSNumber* completionVelocity;
@property (nonatomic, assign, readwrite) NSNumber* completionCurve;
@property (nonatomic, assign, readwrite) NSNumber* targetTransform;
@property (nonatomic, assign, readwrite) NSNumber* toOrientation;
@property (nonatomic, assign, readwrite) NSNumber* fromOrientation;
 + (BOOL) supportsSecureCoding;
 + (id) descriptionForTransitionCoordinatorContext:(id)a;

 - (BOOL) isCancelled;
 - (BOOL) isInteractive;
 - (d) percentComplete;
 - (BOOL) isAnimated;
 - (q) toOrientation;
 - (q) fromOrientation;
 - (void) setCancelled:(BOOL)a;
 - (d) transitionDuration;
 - (q) completionCurve;
 - (void) setAnimated:(BOOL)a;
 - ({CGAffineTransform=dddddd}) targetTransform;
 - (d) completionVelocity;
 - (void) setInteractive:(BOOL)a;
 - (void) setTransitionDuration:(d)a;
 - (void) setPercentComplete:(d)a;
 - (void) setCompletionVelocity:(d)a;
 - (void) setCompletionCurve:(q)a;
 - (void) setTargetTransform:({CGAffineTransform=dddddd})a;
 - (void) setToOrientation:(q)a;
 - (void) setFromOrientation:(q)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end

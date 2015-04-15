
@protocol NSSecureCoding;
@interface _UIViewControllerTransitionCoordinatorContextDescription : NSObject <NSSecureCoding> {

    BOOL _animated;
    BOOL _interactive;
    BOOL _cancelled;
    double _transitionDuration;
    double _percentComplete;
    double _completionVelocity;
    long long _completionCurve;
    long long _toOrientation;
    long long _fromOrientation;
    {CGAffineTransform="a"d"b"d"c"d"d"d"tx"d"ty"d} _targetTransform;
}
@property (nonatomic, assign, readwrite, getter=isAnimated) NSNumber* animated;
@property (nonatomic, assign, readwrite, getter=isInteractive) NSNumber* interactive;
@property (nonatomic, assign, readwrite, getter=isCancelled) NSNumber* cancelled;
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
 - (double) percentComplete;
 - (BOOL) isAnimated;
 - (long long) toOrientation;
 - (long long) fromOrientation;
 - (void) setCancelled:(BOOL)a ;
 - (double) transitionDuration;
 - (long long) completionCurve;
 - (void) setAnimated:(BOOL)a ;
 - ({CGAffineTransform=dddddd}) targetTransform;
 - (double) completionVelocity;
 - (void) setInteractive:(BOOL)a ;
 - (void) setTransitionDuration:(double)a ;
 - (void) setPercentComplete:(double)a ;
 - (void) setCompletionVelocity:(double)a ;
 - (void) setCompletionCurve:(long long)a ;
 - (void) setTargetTransform:({CGAffineTransform=dddddd})a ;
 - (void) setToOrientation:(long long)a ;
 - (void) setFromOrientation:(long long)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end

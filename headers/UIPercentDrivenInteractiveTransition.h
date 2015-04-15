
@protocol UIViewControllerInteractiveTransitioning;
@interface UIPercentDrivenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning> {

    double _duration;
    BOOL _didCommitAnimations;
    BOOL __transitionInterrupted;
    double _completionSpeed;
    long long _completionCurve;
    @"NSString" __originalFillMode;
    @"NSUUID" __uuid;
}
@property (atomic, assign, readonly) NSNumber* duration;
@property (atomic, assign, readonly) NSNumber* percentComplete;
@property (nonatomic, assign, readwrite) NSNumber* completionSpeed;
@property (nonatomic, assign, readwrite) NSNumber* completionCurve;
@property (nonatomic, retain, readwrite, _setOriginalFillMode:) NSString* _originalFillMode;
@property (nonatomic, retain, readwrite, _setUuid:) NSUUID* _uuid;
@property (nonatomic, assign, readwrite, _isTransitionInterrupted, _setTransitionInterrupted:) NSNumber* _transitionInterrupted;

 - (double) duration;
 - (void) dealloc;
 - (void) _resetInteractionController;
 - (void) cancelInteractiveTransition;
 - (void) finishInteractiveTransition;
 - (void) _stopInteractiveTransition;
 - (double) percentComplete;
 - (void) startInteractiveTransition:(id)a;
 - (void) updateInteractiveTransition:(double)a;
 - (void) setCompletionSpeed:(double)a;
 - (id) _uuid;
 - (long long) completionCurve;
 - (void) setCompletionCurve:(long long)a;
 - (double) completionSpeed;
 - (void) _setOriginalFillMode:(id)a;
 - (void) _setUuid:(id)a;
 - (BOOL) _isTransitionInterrupted;
 - (void) _setTransitionInterrupted:(BOOL)a;
 - (void) _stopInteractiveTransition:(id)a;
 - (void) _updateInteractiveTransition:(id)apercent:(double)bisFinished:(BOOL)cdidComplete:(BOOL)d;
 - (void) startInteractiveTransition:(id)acontainerViews:(id)banimation:(@?)c;
 - (id) _originalFillMode;
 - (id) init;
 - (void) _setDuration:(double)a;


@end

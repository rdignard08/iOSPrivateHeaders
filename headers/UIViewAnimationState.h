
@interface UIViewAnimationState : NSObject {

    UIViewAnimationState* _nextState;
    NSString* _animationID;
    ^v _context;
    id _delegate;
    double _duration;
    double _delay;
    double _frameInterval;
    double _start;
    long long _curve;
    float _repeatCount;
    long long _transition;
    UIView* _transitionView;
    int _filter;
    UIView* _filterView;
    float _filterValue;
    SEL _willStartSelector;
    SEL _didEndSelector;
    int _didEndCount;
    {CGPoint="x"d"y"d} _position;
    b1 _willStartSent;
    b1 _useCurrentLayerState;
    b1 _cacheTransition;
    b1 _autoreverses;
    b1 _roundsToInteger;
    b1 _preventsAdditive;
    b1 _layoutSubviews;
    NSMutableArray* _trackedAnimations;
    NSUUID* _uuid;
    <_UIBasicAnimationFactory>* _animationFactory;
    CAMediaTimingFunction* _customCurve;
    BOOL _animationFactoryMakesPerAnimationCustomCurves;
    @? _alongsideAnimations;
    NSMutableArray* _addedCompletions;
    BOOL _animationDidStopSent;
    BOOL _allowUserInteractionToCutOffEndOfAnimation;
    BOOL _retainedSelf;
}
@property (nonatomic, assign, readonly) NSNumber* _allowsUserInteraction;
 + (void) pushViewAnimationState:(id)acontext:(^v)b;
 + (void) popAnimationState;

 - (void) dealloc;
 - (void) _acceptEarlyAnimationCutoff:(id)a;
 - (void) _runAlongsideAnimations;
 - (void) _trackAnimation:(id)awithAnimationKey:(id)bforKeyPath:(id)cinLayer:(id)d;
 - (void) _setAlongsideAnimations:(@?)a;
 - (void) _addAnimationStateForTracking:(id)a;
 - (void) pop;
 - (void) sendDelegateAnimationDidStop:(id)afinished:(BOOL)b;
 - (BOOL) _shouldAnimateAdditivelyForKey:(id)aonLayer:(id)b;
 - (BOOL) _shouldStartFromCurrentStateForLayer:(id)akey:(id)b;
 - (id) _defaultAnimationForKey:(id)a;
 - (void) configureAnimation:(id)aforLayer:(id)bforKey:(id)c;
 - (void) setAnimationAttributes:(id)acorrectZeroDuration:(BOOL)bskipDelegateAssignment:(BOOL)ccustomCurve:(id)d;
 - (id) animationForLayer:(id)aforKey:(id)bforView:(id)c;
 - (void) setupCustomTimingCurve;
 - (void) setAnimationAttributes:(id)acorrectZeroDuration:(BOOL)bskipDelegateAssignment:(BOOL)c;
 - (void) setAnimationAttributes:(id)a;
 - (void) _removeAnimationStateFromTrackingMap:(BOOL)adisableTrackingIfNeeded:(BOOL)b;
 - (BOOL) _allowsUserInteraction;
 - (BOOL) _allowsUserInteractionToCutOffEndOfAnimation;
 - (id) _trackedAnimations;
 - (id) actionForLayer:(id)aforKey:(id)bforView:(id)c;
 - (void) setupWithDuration:(double)adelay:(double)bview:(id)coptions:(unsigned long long)dfactory:(id)eparentState:(id)fstart:(@?)gcompletion:(@?)h;
 - (void) _removeAnimationStateFromTrackingMap:(BOOL)a;
 - (id) init;
 - (void) animationDidStop:(id)afinished:(BOOL)b;
 - (void) animationDidStart:(id)a;


@end

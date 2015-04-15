
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
 - (void) _acceptEarlyAnimationCutoff:(id)a ;
 - (void) _runAlongsideAnimations;
 - (void) _trackAnimation:(id)a withAnimationKey:(id)b forKeyPath:(id)c inLayer:(id)d ;
 - (void) _setAlongsideAnimations:(@?)a ;
 - (void) _addAnimationStateForTracking:(id)a ;
 - (void) pop;
 - (void) sendDelegateAnimationDidStop:(id)a finished:(BOOL)b ;
 - (BOOL) _shouldAnimateAdditivelyForKey:(id)a onLayer:(id)b ;
 - (BOOL) _shouldStartFromCurrentStateForLayer:(id)a key:(id)b ;
 - (id) _defaultAnimationForKey:(id)a ;
 - (void) configureAnimation:(id)a forLayer:(id)b forKey:(id)c ;
 - (void) setAnimationAttributes:(id)a correctZeroDuration:(BOOL)b skipDelegateAssignment:(BOOL)c customCurve:(id)d ;
 - (id) animationForLayer:(id)a forKey:(id)b forView:(id)c ;
 - (void) setupCustomTimingCurve;
 - (void) setAnimationAttributes:(id)a correctZeroDuration:(BOOL)b skipDelegateAssignment:(BOOL)c ;
 - (void) setAnimationAttributes:(id)a ;
 - (void) _removeAnimationStateFromTrackingMap:(BOOL)a disableTrackingIfNeeded:(BOOL)b ;
 - (BOOL) _allowsUserInteraction;
 - (BOOL) _allowsUserInteractionToCutOffEndOfAnimation;
 - (id) _trackedAnimations;
 - (id) actionForLayer:(id)a forKey:(id)b forView:(id)c ;
 - (void) setupWithDuration:(double)a delay:(double)b view:(id)c options:(unsigned long long)d factory:(id)e parentState:(id)f start:(@?)g completion:(@?)h ;
 - (void) _removeAnimationStateFromTrackingMap:(BOOL)a ;
 - (id) init;
 - (void) animationDidStop:(id)a finished:(BOOL)b ;
 - (void) animationDidStart:(id)a ;


@end

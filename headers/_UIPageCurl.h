
@interface _UIPageCurl : NSObject {

    long long _spineLocation;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _contentRect;
    UIView* _contentView;
    _UIPageCurlState* _manualPageCurlState;
    NSMutableArray* _pendingStateQueue;
    NSMutableArray* _activeStateQueue;
    NSMutableSet* _completedStates;
    double _delayBetweenSuccessiveAnimations;
    double _pageDiagonalAngle;
    double _pageDiagonalLength;
    double _manualPageCurlMaxDAngle;
}
@property (nonatomic, assign, readonly, getter=_isManualPageCurlInProgressAndUncommitted) NSNumber* _manualPageCurlInProgressAndUncommitted;
@property (nonatomic, assign, readonly) NSNumber* _wrappedManualPageCurlDirection;
@property (nonatomic, assign, readwrite, setter=_setManualPageCurlMaxDAngle:) NSNumber* _manualPageCurlMaxDAngle;
@property (nonatomic, assign, readonly) NSNumber* _spineLocation;

 - (void) dealloc;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _pageViewFrame:(BOOL)a ;
 - (void) _ensureCurlFilterOnLayer:(id)a ;
 - (long long) _spineLocation;
 - (void) _pageCurlAnimationDidStop:(id)a withState:(id)b ;
 - (void) _cancelAllActiveTransitionsAndAbandonCallbacks:(BOOL)a ;
 - (BOOL) _populateFromValue:(^d)a toValue:(^d)b fromState:(id)c forAnimationWithKeyPath:(id)d ;
 - (id) _newCurlFilter;
 - (double) _distanceToTravelWithCurrentSpineLocation;
 - (double) _baseAngleOffsetForState:(id)a ;
 - (void) _fromValue:(^d)a toValue:(^d)b fromState:(id)c forAnimationWithKeyPath:(id)d ;
 - (double) _inputTimeForProgress:(double)a distanceToTravel:(double)b radius:(^d)c minRadius:(double)d angle:(double)e dAngle:(double)f touchLocation:({CGPoint=dd})g state:(id)h ;
 - (id) _animationKeyPaths;
 - (long long) _validatedPageCurlTypeForPageCurlType:(long long)a inDirection:(long long)b ;
 - ({CGPoint=dd}) _referenceLocationForInitialLocation:({CGPoint=dd})a direction:(long long)b ;
 - (void) _beginCurlWithState:(id)a previousState:(id)b ;
 - (void) _abortManualCurlAtLocation:({CGPoint=dd})a withSuggestedVelocity:(double)b ;
 - (void) _cancelTransitionWithState:(id)a invalidatingPageCurl:(BOOL)b ;
 - (void) _updatedInputsFromState:(id)a forLocation:({CGPoint=dd})b time:(^d)c radius:(^d)d angle:(^d)e ;
 - (id) _newAnimationForState:(id)a withKeyPath:(id)b duration:(double)c fromValue:(id)d ;
 - (void) _updateCurlFromState:(id)a withTime:(double)b radius:(double)c angle:(double)d addingAnimations:(id)e ;
 - (void) _forceCleanupState:(id)a finished:(BOOL)b completed:(BOOL)c ;
 - (double) _durationForManualCurlEndAnimationWithSuggestedVelocity:(double)a shouldComplete:(BOOL)b ;
 - (void) _endManualCurlAtLocation:({CGPoint=dd})a withSuggestedVelocity:(double)b shouldComplete:(BOOL)c ;
 - (void) _cleanupState:(id)a ;
 - (id) initWithSpineLocation:(long long)a andContentRect:({CGRect={CGPoint=dd}{CGSize=dd}})b inContentView:(id)c ;
 - (BOOL) _isManualPageCurlInProgressAndUncommitted;
 - (BOOL) _areAnimationsInFlightOrPending;
 - (id) _wrappedManualPageCurlDirection;
 - (void) _setContentRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (BOOL) _isPreviousCurlCompatibleWithCurlOfType:(long long)a inDirection:(long long)b ;
 - (void) _enqueueCurlOfType:(long long)a fromLocation:({CGPoint=dd})b inDirection:(long long)c withView:(id)d revealingView:(id)e completion:(@?)f finally:(@?)g ;
 - (void) _updateManualCurlToLocation:({CGPoint=dd})a ;
 - (void) _completeManualCurlAtLocation:({CGPoint=dd})a withSuggestedVelocity:(double)b ;
 - (double) _manualPageCurlMaxDAngle;
 - (void) _setManualPageCurlMaxDAngle:(double)a ;


@end

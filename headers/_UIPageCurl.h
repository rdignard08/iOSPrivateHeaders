
@interface _UIPageCurl : NSObject {

    long long _spineLocation;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _contentRect;
    UIView _contentView;
    _UIPageCurlState _manualPageCurlState;
    NSMutableArray _pendingStateQueue;
    NSMutableArray _activeStateQueue;
    NSMutableSet _completedStates;
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
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _pageViewFrame:(BOOL)a;
 - (void) _ensureCurlFilterOnLayer:(id)a;
 - (long long) _spineLocation;
 - (void) _pageCurlAnimationDidStop:(id)awithState:(id)b;
 - (void) _cancelAllActiveTransitionsAndAbandonCallbacks:(BOOL)a;
 - (BOOL) _populateFromValue:(^d)atoValue:(^d)bfromState:(id)cforAnimationWithKeyPath:(id)d;
 - (id) _newCurlFilter;
 - (double) _distanceToTravelWithCurrentSpineLocation;
 - (double) _baseAngleOffsetForState:(id)a;
 - (void) _fromValue:(^d)atoValue:(^d)bfromState:(id)cforAnimationWithKeyPath:(id)d;
 - (double) _inputTimeForProgress:(double)adistanceToTravel:(double)bradius:(^d)cminRadius:(double)dangle:(double)edAngle:(double)ftouchLocation:({CGPoint=dd})gstate:(id)h;
 - (id) _animationKeyPaths;
 - (long long) _validatedPageCurlTypeForPageCurlType:(long long)ainDirection:(long long)b;
 - ({CGPoint=dd}) _referenceLocationForInitialLocation:({CGPoint=dd})adirection:(long long)b;
 - (void) _beginCurlWithState:(id)apreviousState:(id)b;
 - (void) _abortManualCurlAtLocation:({CGPoint=dd})awithSuggestedVelocity:(double)b;
 - (void) _cancelTransitionWithState:(id)ainvalidatingPageCurl:(BOOL)b;
 - (void) _updatedInputsFromState:(id)aforLocation:({CGPoint=dd})btime:(^d)cradius:(^d)dangle:(^d)e;
 - (id) _newAnimationForState:(id)awithKeyPath:(id)bduration:(double)cfromValue:(id)d;
 - (void) _updateCurlFromState:(id)awithTime:(double)bradius:(double)cangle:(double)daddingAnimations:(id)e;
 - (void) _forceCleanupState:(id)afinished:(BOOL)bcompleted:(BOOL)c;
 - (double) _durationForManualCurlEndAnimationWithSuggestedVelocity:(double)ashouldComplete:(BOOL)b;
 - (void) _endManualCurlAtLocation:({CGPoint=dd})awithSuggestedVelocity:(double)bshouldComplete:(BOOL)c;
 - (void) _cleanupState:(id)a;
 - (id) initWithSpineLocation:(long long)aandContentRect:({CGRect={CGPoint=dd}{CGSize=dd}})binContentView:(id)c;
 - (BOOL) _isManualPageCurlInProgressAndUncommitted;
 - (BOOL) _areAnimationsInFlightOrPending;
 - (id) _wrappedManualPageCurlDirection;
 - (void) _setContentRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) _isPreviousCurlCompatibleWithCurlOfType:(long long)ainDirection:(long long)b;
 - (void) _enqueueCurlOfType:(long long)afromLocation:({CGPoint=dd})binDirection:(long long)cwithView:(id)drevealingView:(id)ecompletion:(@?)ffinally:(@?)g;
 - (void) _updateManualCurlToLocation:({CGPoint=dd})a;
 - (void) _completeManualCurlAtLocation:({CGPoint=dd})awithSuggestedVelocity:(double)b;
 - (double) _manualPageCurlMaxDAngle;
 - (void) _setManualPageCurlMaxDAngle:(double)a;


@end

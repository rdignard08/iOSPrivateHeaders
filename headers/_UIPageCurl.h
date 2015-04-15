
@interface _UIPageCurl : NSObject {

    q _spineLocation;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _contentRect;
    @"UIView" _contentView;
    @"_UIPageCurlState" _manualPageCurlState;
    @"NSMutableArray" _pendingStateQueue;
    @"NSMutableArray" _activeStateQueue;
    @"NSMutableSet" _completedStates;
    d _delayBetweenSuccessiveAnimations;
    d _pageDiagonalAngle;
    d _pageDiagonalLength;
    d _manualPageCurlMaxDAngle;
}
@property (nonatomic, assign, readonly, _isManualPageCurlInProgressAndUncommitted) NSNumber* _manualPageCurlInProgressAndUncommitted;
@property (nonatomic, assign, readonly) NSNumber* _wrappedManualPageCurlDirection;
@property (nonatomic, assign, readwrite, _setManualPageCurlMaxDAngle:) NSNumber* _manualPageCurlMaxDAngle;
@property (nonatomic, assign, readonly) NSNumber* _spineLocation;

 - (void) dealloc;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _pageViewFrame:(BOOL)a;
 - (void) _ensureCurlFilterOnLayer:(id)a;
 - (q) _spineLocation;
 - (void) _pageCurlAnimationDidStop:(id)awithState:(id)b;
 - (void) _cancelAllActiveTransitionsAndAbandonCallbacks:(BOOL)a;
 - (BOOL) _populateFromValue:(^d)atoValue:(^d)bfromState:(id)cforAnimationWithKeyPath:(id)d;
 - (id) _newCurlFilter;
 - (d) _distanceToTravelWithCurrentSpineLocation;
 - (d) _baseAngleOffsetForState:(id)a;
 - (void) _fromValue:(^d)atoValue:(^d)bfromState:(id)cforAnimationWithKeyPath:(id)d;
 - (d) _inputTimeForProgress:(d)adistanceToTravel:(d)bradius:(^d)cminRadius:(d)dangle:(d)edAngle:(d)ftouchLocation:({CGPoint=dd})gstate:(id)h;
 - (id) _animationKeyPaths;
 - (q) _validatedPageCurlTypeForPageCurlType:(q)ainDirection:(q)b;
 - ({CGPoint=dd}) _referenceLocationForInitialLocation:({CGPoint=dd})adirection:(q)b;
 - (void) _beginCurlWithState:(id)apreviousState:(id)b;
 - (void) _abortManualCurlAtLocation:({CGPoint=dd})awithSuggestedVelocity:(d)b;
 - (void) _cancelTransitionWithState:(id)ainvalidatingPageCurl:(BOOL)b;
 - (void) _updatedInputsFromState:(id)aforLocation:({CGPoint=dd})btime:(^d)cradius:(^d)dangle:(^d)e;
 - (id) _newAnimationForState:(id)awithKeyPath:(id)bduration:(d)cfromValue:(id)d;
 - (void) _updateCurlFromState:(id)awithTime:(d)bradius:(d)cangle:(d)daddingAnimations:(id)e;
 - (void) _forceCleanupState:(id)afinished:(BOOL)bcompleted:(BOOL)c;
 - (d) _durationForManualCurlEndAnimationWithSuggestedVelocity:(d)ashouldComplete:(BOOL)b;
 - (void) _endManualCurlAtLocation:({CGPoint=dd})awithSuggestedVelocity:(d)bshouldComplete:(BOOL)c;
 - (void) _cleanupState:(id)a;
 - (id) initWithSpineLocation:(q)aandContentRect:({CGRect={CGPoint=dd}{CGSize=dd}})binContentView:(id)c;
 - (BOOL) _isManualPageCurlInProgressAndUncommitted;
 - (BOOL) _areAnimationsInFlightOrPending;
 - (id) _wrappedManualPageCurlDirection;
 - (void) _setContentRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) _isPreviousCurlCompatibleWithCurlOfType:(q)ainDirection:(q)b;
 - (void) _enqueueCurlOfType:(q)afromLocation:({CGPoint=dd})binDirection:(q)cwithView:(id)drevealingView:(id)ecompletion:(@?)ffinally:(@?)g;
 - (void) _updateManualCurlToLocation:({CGPoint=dd})a;
 - (void) _completeManualCurlAtLocation:({CGPoint=dd})awithSuggestedVelocity:(d)b;
 - (d) _manualPageCurlMaxDAngle;
 - (void) _setManualPageCurlMaxDAngle:(d)a;


@end

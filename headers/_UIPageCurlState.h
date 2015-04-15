
@interface _UIPageCurlState : _UITransitionState {

    @"_UIPageCurl" _pageCurl;
    q _curlType;
    {CGPoint="x"d"y"d} _initialLocation;
    {CGPoint="x"d"y"d} _referenceLocation;
    @"UIView" _frontPageView;
    @"UIView" _backPageView;
    @"UIView" _frontView;
    @"UIView" _backView;
    q _completionCount;
    q _curlState;
    BOOL _finished;
    BOOL _willComplete;
    @? _finally;
}

 - (void) dealloc;
 - (void) finally;
 - (id) pageCurl;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _pageViewFrame;
 - (void) cleanupWithFinishedState:(BOOL)acompletedState:(BOOL)b;
 - (q) curlType;
 - (q) curlState;
 - (id) initWithPageCurl:(id)aandCurlType:(q)bfromLocation:({CGPoint=dd})cwithReferenceLocation:({CGPoint=dd})dinDirection:(q)ewithView:(id)frevealingView:(id)gcompletion:(@?)hfinally:(@?)i;
 - (void) invalidatePageCurl;
 - (id) frontPageView;
 - (id) backPageView;
 - (void) addFrontPageContent;
 - (void) addBackPageContent;
 - (void) setCurlState:(q)awillComplete:(BOOL)b;
 - (BOOL) hasPendingAnimations;
 - (void) incrementCompletionCount;
 - (q) _effectiveTransitionDirection;
 - (BOOL) isCompatibleWithCurlOfType:(q)ainDirection:(q)b;
 - ({CGPoint=dd}) initialLocation;
 - ({CGPoint=dd}) referenceLocation;
 - (id) frontView;
 - (id) backView;
 - (void) cleanup;
 - (void) animationDidStop:(id)afinished:(BOOL)b;


@end

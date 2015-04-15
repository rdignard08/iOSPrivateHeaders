
@interface _UIPageCurlState : _UITransitionState {

    _UIPageCurl* _pageCurl;
    long long _curlType;
    {CGPoint="x"d"y"d} _initialLocation;
    {CGPoint="x"d"y"d} _referenceLocation;
    UIView* _frontPageView;
    UIView* _backPageView;
    UIView* _frontView;
    UIView* _backView;
    long long _completionCount;
    long long _curlState;
    BOOL _finished;
    BOOL _willComplete;
    @? _finally;
}

 - (void) dealloc;
 - (void) finally;
 - (id) pageCurl;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _pageViewFrame;
 - (void) cleanupWithFinishedState:(BOOL)a completedState:(BOOL)b ;
 - (long long) curlType;
 - (long long) curlState;
 - (id) initWithPageCurl:(id)a andCurlType:(long long)b fromLocation:({CGPoint=dd})c withReferenceLocation:({CGPoint=dd})d inDirection:(long long)e withView:(id)f revealingView:(id)g completion:(@?)h finally:(@?)i ;
 - (void) invalidatePageCurl;
 - (id) frontPageView;
 - (id) backPageView;
 - (void) addFrontPageContent;
 - (void) addBackPageContent;
 - (void) setCurlState:(long long)a willComplete:(BOOL)b ;
 - (BOOL) hasPendingAnimations;
 - (void) incrementCompletionCount;
 - (long long) _effectiveTransitionDirection;
 - (BOOL) isCompatibleWithCurlOfType:(long long)a inDirection:(long long)b ;
 - ({CGPoint=dd}) initialLocation;
 - ({CGPoint=dd}) referenceLocation;
 - (id) frontView;
 - (id) backView;
 - (void) cleanup;
 - (void) animationDidStop:(id)a finished:(BOOL)b ;


@end

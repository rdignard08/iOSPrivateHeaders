
@protocol UIScrollViewIntersectionDelegate, UIKeyboardKeyplaneTransitionDelegate, UIGestureRecognizerDelegate;
@interface UIPeripheralHost : NSObject <UIScrollViewIntersectionDelegate, UIKeyboardKeyplaneTransitionDelegate, UIGestureRecognizerDelegate> {

    UIPeripheralHostView* _hostView;
    UIKeyboardAutomatic* _automaticKeyboard;
    BOOL _automaticAppearanceEnabled;
    BOOL _automaticAppearanceEnabledInternal;
    BOOL _automaticKeyboardAnimatingIn;
    BOOL _automaticKeyboardAnimatingOut;
    int _automaticKeyboardState;
    int _ignoringReloadInputViews;
    BOOL _suppresingNotifications;
    BOOL _useHideNotificationsWhenNotVisible;
    BOOL _reloadInputViewsForcedIsAllowed;
    int _nextAutomaticOrderInDirection;
    long long _targetRotatedOrientation;
    BOOL _isTranslating;
    BOOL _isSplitting;
    BOOL _isUndocked;
    BOOL _splitLockState;
    UIPanGestureRecognizer* _translateRecognizer;
    CADisplayLink* _displayLink;
    double _lastBounceTime;
    double _lastTranslationNotificationTime;
    {CGAffineTransform="a"d"b"d"c"d"d"d"tx"d"ty"d} _targetTransform;
    {CGAffineTransform="a"d"b"d"c"d"d"d"tx"d"ty"d} _initialTransform;
    {CGPoint="x"d"y"d} _velocity;
    NSMutableArray* _dropShadowViews;
    double __transitionStartTime;
    int _shadowStyle;
    BOOL _wasBackgroundSplit;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _previousShadowFrameLeft;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _previousShadowFrameRight;
    @? _bounceCompletionBlock;
    double m_keyboardAttachedViewHeight;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _lastKnownIVFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _lastKnownIAVFrame;
    NSMutableArray* _animationStyleStack;
    BOOL _hasCustomAnimationProperties;
    double _nextAutomaticOrderInDuration;
    double _lastAutomaticKeyboardDuration;
    long long _disableAnimationsCount;
    NSMutableArray* _targetStateStack;
    UIInputViewSet* _inputViewSet;
    UIResponder* _responder;
    BOOL _ignoreInputModeChanges;
    NSMutableSet* _pinningResponders;
    BOOL _ignoresPinning;
    UIInputViewPostPinningReloadState* _postPinningReloadState;
    BOOL _animationFencingEnabled;
    BOOL _interfaceAutorotationDisabled;
    UIKeyboardRotationState* _rotationState;
    UIInputViewTransition* _currentTransition;
    UIScrollView* _scrollViewForTransition;
    BOOL _scrollViewShowsHorizontalScrollIndicator;
    UIInputViewTransition* _scrollViewTransition;
    BOOL _scrollViewTransitionFinishing;
    {CGPoint="x"d"y"d} _scrollViewTransitionPreviousPoint;
    {CGPoint="x"d"y"d} _scrollViewTransitionVelocity;
    UIResponder* _selfHostingTrigger;
    NSMutableDictionary* _preservedViewSets;
    BOOL _didFadeInputViews;
    BOOL _blockedReloadInputViewsForDictation;
    BOOL _animateCornerRefresh;
    BOOL _showCorners;
    NSMutableArray* _extraViews;
    int _clippingKeyboardMode;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _clippingKeyboardAdjustmentStart;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _clippingKeyboardAdjustmentEnd;
    double _ambiguousControlCenterActivationMargin;
    NSMutableDictionary* _preservedAccessoryViewNextResponderSets;
    UIResponder* _responderWithoutAutomaticAppearanceEnabled;
    UITextEffectsWindow* _containerWindow;
    BOOL _springBoardLockStateIsLocked;
    int _hostedAnimationToggleCount;
    UIInputViewSet* _transientInputViewSet;
}
@property (nonatomic, assign, readonly) UIView* view;
@property (nonatomic, assign, readonly) NSMutableArray* dropShadowViews;
@property (nonatomic, assign, readwrite) NSNumber* _transitionStartTime;
@property (nonatomic, assign, readwrite) NSNumber* automaticAppearanceInternalEnabled;
@property (nonatomic, assign, readonly, getter=_isIgnoringReloadInputViews) NSNumber* ignoringReloadInputViews;
@property (nonatomic, assign, readwrite) NSNumber* ambiguousControlCenterActivationMargin;
@property (nonatomic, retain, readonly) UIResponder* responder;
@property (nonatomic, assign, readwrite) NSNumber* ignoresPinning;
@property (nonatomic, assign, readwrite) NSNumber* animationFencingEnabled;
@property (nonatomic, assign, readonly) UIKeyboard* automaticKeyboard;
@property (nonatomic, retain, readwrite) UIInputViewSet* inputViews;
@property (nonatomic, assign, readonly) UIInputViewSet* loadAwareInputViews;
@property (nonatomic, assign, readonly) NSNumber* keyClicksEnabled;
@property (nonatomic, assign, readwrite) NSNumber* automaticAppearanceEnabled;
@property (nonatomic, assign, readwrite) NSNumber* currentState;
@property (nonatomic, retain, readwrite) UIKeyboardRotationState* rotationState;
@property (nonatomic, retain, readwrite) UIPeripheralHostState* targetState;
@property (nonatomic, retain, readwrite) UIResponder* responder;
@property (nonatomic, retain, readwrite) UIInputViewPostPinningReloadState* postPinningReloadState;
@property (nonatomic, retain, readwrite) UIInputViewTransition* currentTransition;
@property (nonatomic, assign, readonly) NSNumber* automaticAppearanceReallyEnabled;
@property (nonatomic, assign, readwrite) NSNumber* animationFencingEnabled;
@property (nonatomic, assign, readonly) NSNumber* animationsEnabled;
@property (nonatomic, assign, readonly) UIKeyboardAutomatic* automaticKeyboard;
@property (nonatomic, retain, readwrite) UIInputViewSet* _inputViews;
@property (nonatomic, assign, readwrite) UIInputViewSet* _transientInputViews;
@property (nonatomic, retain, readwrite) UIResponder* selfHostingTrigger;
 + (id) sharedInstance;
 + (id) activeInstance;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) visiblePeripheralFrame;
 + (id) passthroughViews;
 + (void) _releaseSharedInstance;
 + (double) gridViewRubberBandValueForValue:(double)atarget:(double)btimeInterval:(double)cvelocity:(^d)d;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) screenBoundsInAppOrientation;
 + (id) endPlacementForInputViewSet:(id)a;
 + (Class) hostViewClass;

 - (id) retain;
 - (void) dealloc;
 - (BOOL) _isTransitioning;
 - (BOOL) gestureRecognizerShouldBegin:(id)a;
 - (BOOL) gestureRecognizer:(id)ashouldRecognizeSimultaneouslyWithGestureRecognizer:(id)b;
 - (BOOL) gestureRecognizer:(id)ashouldReceiveTouch:(id)b;
 - (BOOL) _isCoordinatingWithSystemGestures;
 - (void) setResponder:(id)a;
 - (BOOL) isRotating;
 - (void) setAutomaticAppearanceInternalEnabled:(BOOL)a;
 - (void) scrollView:(id)adidPanWithGesture:(id)b;
 - (void) scrollView:(id)adidFinishPanGesture:(id)b;
 - (double) getVerticalOverlapForView:(id)ausingKeyboardInfo:(id)b;
 - (void) resetNextAutomaticOrderInDirectionAndDuration;
 - (void) pushAnimationStyle:(id)a;
 - (void) popAnimationStyle;
 - (void) transitionDidFinish:(BOOL)a;
 - (id) containerWindow;
 - (void) _beginPinningInputViewsOnBehalfOfResponder:(id)a;
 - (void) _stopPinningInputViewsOnBehalfOfResponder:(id)a;
 - (void) _clearPreservedInputViewsWithRestorableResponder:(id)a;
 - (void) _clearPreservedInputViewsWithId:(id)aclearKeyboard:(BOOL)b;
 - (void) setNextAutomaticOrderInDirection:(int)aduration:(double)b;
 - (void) setkeyboardAttachedViewHeight:(double)a;
 - (double) getLastAutomaticDuration;
 - (id) responder;
 - (void) _preserveInputViewsWithId:(id)aanimated:(BOOL)b;
 - (BOOL) _restoreInputViewsWithId:(id)aanimated:(BOOL)b;
 - (void) _setIgnoresPinning:(BOOL)aallowImmediateReload:(BOOL)b;
 - (void) _beginDisablingAnimations;
 - (void) _endDisablingAnimations;
 - (void) _preserveInputViewsWithId:(id)a;
 - (void) _beginIgnoringReloadInputViews;
 - (void) _reloadInputViewsForResponder:(id)a;
 - (void) _endIgnoringReloadInputViews;
 - (BOOL) _isTrackingResponder:(id)a;
 - (void) _setReloadInputViewsForcedIsAllowed:(BOOL)a;
 - (BOOL) _isPinningInputViewsOnBehalfOfResponder:(id)a;
 - (BOOL) ignoresPinning;
 - (id) transitioningView;
 - (void) updateToPlacement:(id)awithNormalAnimationsAndNotifications:(BOOL)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) transitioningFrame;
 - (void) setInputViewsHidden:(BOOL)a;
 - (id) transformedContainerView;
 - (BOOL) shouldApplySettingsForBackdropView:(id)a;
 - (id) _inheritedRenderConfig;
 - (int) _clipCornersOfView:(id)a;
 - (id) rotationState;
 - (void) updateProgress:(double)astartHeight:(double)bendHeight:(double)c;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _inputViewRectToAvoid;
 - (BOOL) isUndocked;
 - (id) loadAwareInputViews;
 - (void) moveToPersistentOffset;
 - (BOOL) isSplitting;
 - (id) inputViews;
 - (BOOL) _hasPostPinningReloadState;
 - (BOOL) animationFencingEnabled;
 - (void) setAnimationFencingEnabled:(BOOL)a;
 - (void) setIgnoresPinning:(BOOL)a;
 - (void) postWillShowNotificationForGeometry:({UIPeripheralAnimationGeometry={CGPoint=dd}{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}d})aduration:(double)b;
 - (BOOL) minimize;
 - (BOOL) maximize;
 - (void) postDidShowNotificationForGeometry:({UIPeripheralAnimationGeometry={CGPoint=dd}{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}d})a;
 - (BOOL) automaticAppearanceEnabled;
 - (BOOL) isOnScreen;
 - (void) setUndockedWithOffset:({CGPoint=dd})aanimated:(BOOL)b;
 - (void) setAutomaticAppearanceEnabled:(BOOL)a;
 - (void) orderInAutomatic;
 - (void) orderInAutomaticFromDirection:(int)awithDuration:(double)b;
 - (void) orderOutAutomatic;
 - (void) orderOutAutomaticToDirection:(int)awithDuration:(double)b;
 - (void) orderInAutomaticSkippingAnimation;
 - (void) orderOutAutomaticSkippingAnimation;
 - (BOOL) isOffScreen;
 - (void) prepareForRotationOfKeyboard:(id)atoOrientation:(long long)b;
 - (void) rotateKeyboard:(id)atoOrientation:(long long)b;
 - (void) finishRotationOfKeyboard:(id)a;
 - (void) prepareForRotationToOrientation:(long long)a;
 - (void) rotateToOrientation:(long long)a;
 - (void) finishRotation;
 - (void) forceOrderInAutomatic;
 - (void) forceOrderOutAutomatic;
 - (void) forceOrderInAutomaticAnimated:(BOOL)a;
 - (void) forceOrderOutAutomaticAnimated:(BOOL)a;
 - (void) forceOrderInAutomaticFromDirection:(int)awithDuration:(double)b;
 - (void) forceOrderOutAutomaticToDirection:(int)awithDuration:(double)b;
 - (void) manualKeyboardWillBeOrderedIn:(id)a;
 - (void) manualKeyboardWasOrderedIn:(id)a;
 - (void) manualKeyboardWillBeOrderedOut:(id)a;
 - (void) manualKeyboardWasOrderedOut:(id)a;
 - (BOOL) keyClicksEnabled;
 - (BOOL) _shouldDelayRotationForWindow:(id)a;
 - (void) _setHosted:(BOOL)a;
 - (BOOL) isTranslating;
 - (void) prepareForTransition;
 - (void) showDropShadows:(BOOL)a;
 - (void) finishTransitionWithCompletion:(@?)a;
 - (double) ambiguousControlCenterActivationMargin;
 - (void) resetCurrentOrderOutAnimationDuration:(double)a;
 - (id) containerTextEffectsWindowAboveStatusBar;
 - (id) containerTextEffectsWindow;
 - ({CGPoint=dd}) offHostPointForPoint:({CGPoint=dd})a;
 - (void) set_inputViews:(id)a;
 - (void) peripheralHostWillResume:(id)a;
 - (void) peripheralHostDidEnterBackground:(id)a;
 - (void) textEffectsWindowDidRotate:(id)a;
 - (void) inputModeChangedForRenderConfig:(id)a;
 - (void) springBoardLockStateChanged:(id)a;
 - (void) setListeningToSpringBoardKeyboardNotifications:(BOOL)a;
 - (void) setCurrentTransition:(id)a;
 - (void) setRotationState:(id)a;
 - (void) setSelfHostingTrigger:(id)a;
 - (void) setPostPinningReloadState:(id)a;
 - (id) currentTransition;
 - (void) executeTransition:(id)a;
 - (void) completeCurrentTransitionIfNeeded;
 - (void) translateDetected:(id)a;
 - (void) _inputModeChangedWhileContextTracked;
 - (id) containerRootController;
 - (id) _renderConfigForCurrentResponder;
 - (void) updateRenderConfigForCurrentResponder;
 - ({CGSize=dd}) sizeOfInputViewForInputViewSet:(id)awithInterfaceOrientation:(long long)b;
 - ({CGPoint=dd}) adjustedPersistentOffset;
 - (void) showCorners:(BOOL)awithDuration:(double)b;
 - (void) updateDropShadow;
 - (void) updateBackdrop;
 - (void) initializeTranslateGestureRecognizer;
 - (void) setKeyboardOnScreenNotifyKey:(BOOL)a;
 - (id) targetState;
 - (void) setTargetState:(id)a;
 - (void) postDidHideNotificationForGeometry:({UIPeripheralAnimationGeometry={CGPoint=dd}{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}d})a;
 - ({UIPeripheralAnimationGeometry={CGPoint=dd}{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}d}) calculateAnimationGeometryForOrientation:(long long)aoutDirection:(int)bforTransition:(int)c;
 - (void) postDidShowNotification;
 - (void) postWillHideNotificationForGeometry:({UIPeripheralAnimationGeometry={CGPoint=dd}{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}d})aduration:(double)b;
 - (void) postDidHideNotification;
 - (id) undockedInfoFromDefaultInfo:(id)aforNotification:(id)b;
 - (id) _screenForFirstResponder:(id)a;
 - (void) _performRefreshCorners;
 - (void) postDockingNotification;
 - (void) refreshCorners;
 - (void) postUndockingNotification;
 - (void) fadeInInputViews:(BOOL)a;
 - (void) disableInterfaceAutorotation:(BOOL)a;
 - (void) undock;
 - (void) postKeyboardFrameChangeNotification:(id)awithInfo:(id)b;
 - (void) dock;
 - (void) invalidateDisplayLink;
 - (void) bounceAnimationDidFinish;
 - (double) minimumOffsetForBuffer:(double)a;
 - (BOOL) hasDictationKeyboard;
 - (id) dropShadowViews;
 - (BOOL) automaticAppearanceReallyEnabled;
 - (void) createAutomaticKeyboardIfNeeded;
 - (void) createHostViewIfNeeded;
 - (void) setPeripheralToolbarFrameForHostWidth:(double)a;
 - (void) setPeripheralFrameForHostBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGSize=dd}) totalPeripheralSizeForOrientation:(long long)a;
 - (void) layoutInputViewsForGeometry:({UIPeripheralAnimationGeometry={CGPoint=dd}{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}d})a;
 - (void) layoutInputViews;
 - (id) nextAnimationStyle;
 - (void) orderInWithAnimationStyle:(id)a;
 - (void) orderOutWithAnimationStyle:(id)a;
 - (id) nextAnimationStyle:(BOOL)a;
 - (BOOL) animationsEnabled;
 - (id) _inputViewsForResponder:(id)a;
 - (void) setInputViews:(id)aanimationStyle:(id)b;
 - (void) setAccessoryViewVisible:(BOOL)adelay:(double)b;
 - (void) fadeInputViewsIfNeeded;
 - (void) showInputViewsIfNeeded;
 - (void) _updateBounceAnimation:(id)a;
 - (BOOL) _somePartOfKeyboardIsOnScreen:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _centerStretchRectForWidth:(double)a;
 - (id) automaticKeyboard;
 - (void) orderOutWithAnimation:(BOOL)atoDirection:(int)bduration:(double)c;
 - (id) _inputViews;
 - (id) _transientInputViews;
 - (void) set_transientInputViews:(id)a;
 - (id) selfHostingTrigger;
 - (id) postPinningReloadState;
 - (BOOL) hasCustomInputView;
 - (double) keyboardAttachedViewHeight;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) screenRectFromBounds:({CGRect={CGPoint=dd}{CGSize=dd}})aatCenter:({CGPoint=dd})bapplyingSourceHeightDelta:(double)c;
 - (id) userInfoFromGeometry:({UIPeripheralAnimationGeometry={CGPoint=dd}{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}d})aduration:(double)bforWill:(BOOL)cforShow:(BOOL)d;
 - (BOOL) userInfoContainsActualGeometryChange:(id)a;
 - (BOOL) isHostingActiveImpl;
 - (void) logGeometryDescriptionFromUserInfo:(id)a;
 - (void) syncToExistingAnimations;
 - (void) setTextEffectsWindowLevelForInputView:(id)aresponder:(id)b;
 - (id) _inputViewsForResponder:(id)awithAutomaticKeyboard:(BOOL)b;
 - (void) _trackInputModeIfNecessary:(id)a;
 - (BOOL) pinningPreventsInputViews:(id)a;
 - (BOOL) _isIgnoringReloadInputViews;
 - (void) setInputViews:(id)a;
 - (BOOL) _isSuppressedByManualKeyboard;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) calculateSnapshotRectForTransition:(id)aforStart:(BOOL)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) calculateRectForTransition:(id)aforStart:(BOOL)b;
 - (id) containerForClippingMode:(int)aonTransition:(id)b;
 - (BOOL) shouldUseHideNotificationForGeometry:({UIPeripheralAnimationGeometry={CGPoint=dd}{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}d})a;
 - (void) performMultipleOperations:(@?)awithAnimationStyle:(id)b;
 - (BOOL) maximizeWithAnimation:(BOOL)a;
 - (id) computeTransitionFromInputViews:(id)atoInputViews:(id)banimationStyle:(id)c;
 - (void) adjustHostViewForTransitionEndFrame:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) adjustRect:({CGRect={CGPoint=dd}{CGSize=dd}})aforStart:(BOOL)b;
 - (double) accessoryViewFadeDuration:(id)a;
 - (void) adjustAccessoryViewForSubsumedTransition:(id)a;
 - (void) adjustHostViewForTransitionStartFrame:(id)a;
 - (void) enableKeyboardTyping;
 - (void) endClippingForTransition:(id)a;
 - (void) adjustHostViewForTransitionCompletion:(id)a;
 - (void) finishScrollViewTransition;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) displayRectForViewSet:(id)aorientation:(long long)bposition:(int)cfromRotation:(BOOL)d;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) localDisplayRectForViewSet:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) localDisplayRectForViewSet:(id)aposition:(int)b;
 - (void) setInputViews:(id)aanimated:(BOOL)b;
 - (void) _preserveInputViewsWithId:(id)aanimated:(BOOL)breset:(BOOL)c;
 - (BOOL) _isSelfHosting;
 - (void) extendKeyboardBackdropHeight:(double)awithDuration:(double)b;
 - (void) hideScrollViewHorizontalScrollIndicator:(BOOL)a;
 - (void) updateScrollViewContentInsetBottom:(double)a;
 - (void) prepareForPinning;
 - (void) _updateContainerWindowLevel;
 - (void) forceReloadInputViews;
 - (void) _clearPinningResponders;
 - (double) _transitionStartTime;
 - (void) set_transitionStartTime:(double)a;
 - (BOOL) automaticAppearanceInternalEnabled;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) visiblePeripheralFrame:(BOOL)a;
 - (void) setAmbiguousControlCenterActivationMargin:(double)a;
 - (void) prepareToAnimateClippedKeyboardWithOffsets:({CGRect={CGPoint=dd}{CGSize=dd}})aorderingIn:(BOOL)bonSnapshot:(BOOL)c;
 - (void) peripheralViewMinMaximized:(id)afinished:(id)bcontext:(id)c;
 - (void) implBoundsHeightChangeDoneForGeometry:({UIPeripheralAnimationGeometry={CGPoint=dd}{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}d})a;
 - (id) computeTransitionForInputViews:(id)afromOrientation:(long long)btoOrientation:(long long)c;
 - (BOOL) skipTransitionForInputViews:(id)a;
 - (id) _currentInputView;
 - (BOOL) _hostFirstResponder:(id)aonBehalfOfResponder:(id)b;
 - (void) _resignFirstResponderIfHostingOnBehalfOfResponder:(id)a;
 - (void) candidateBarWillChangeHeight:(double)awithDuration:(double)b;
 - (void) updateInputAccessoryViewVisibility:(BOOL)awithDuration:(double)b;
 - (BOOL) _isAccessoryViewChangedOnly;
 - (void) animateKeyboardOutWithDuration:(double)adelta:(double)b;
 - (id) init;
 - (id) contentView;
 - (int) currentState;
 - (void) setCurrentState:(int)a;
 - (void) layoutIfNeeded;
 - (id) view;


@end

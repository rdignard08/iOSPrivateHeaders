
@protocol _UIScreenEdgePanRecognizerDelegate;
@interface UIKeyboardLayout : UIView <_UIScreenEdgePanRecognizerDelegate> {

    @"UITextInputTraits" _inputTraits;
    @"UIKBScreenTraits" _screenTraits;
    @"UIKBTextEditingTraits" _textEditingTraits;
    @"NSMutableArray" _uncommittedTouches;
    @"UITouch" _activeTouch;
    @"UITouch" _shiftKeyTouch;
    q _cursorLocation;
    BOOL _disableInteraction;
    @"UIKeyboardTaskQueue" _taskQueue;
    BOOL hideKeysUnderIndicator;
    BOOL _isExecutingDeferredTouchTasks;
    @"_UIScreenEdgePanRecognizer" _screenEdgePanRecognizer;
    @? _deferredTouchDownTask;
    @? _deferredTouchMovedTask;
    d lastTouchUpTime;
}
 + (Class) _subclassForScreenTraits:(id)a;

 - (void) dealloc;
 - (void) setShift:(BOOL)a;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (id) activeTouch;
 - (void) setActiveTouch:(id)a;
 - (void) setRenderConfig:(id)a;
 - (void) willMoveToWindow:(id)a;
 - (id) candidateList;
 - (void) clearUnusedObjects:(BOOL)a;
 - (void) clearTransientState;
 - (void) deactivateActiveKeys;
 - (BOOL) hasCandidateKeys;
 - (void) setLayoutTag:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameForKeylayoutName:(id)a;
 - ({CGSize=dd}) dragGestureSize;
 - (id) taskQueue;
 - (BOOL) shouldShowIndicator;
 - (id) activationIndicatorView;
 - (void) setHideKeysUnderIndicator:(BOOL)a;
 - (BOOL) keyplaneContainsEmojiKey;
 - (BOOL) canHandleEvent:(id)a;
 - (BOOL) performReturnAction;
 - (id) currentKeyplane;
 - (void) showKeyboardWithInputTraits:(id)ascreenTraits:(id)bsplitTraits:(id)c;
 - (void) setAutoshift:(BOOL)a;
 - (void) setTaskQueue:(id)a;
 - (BOOL) shouldFadeFromLayout;
 - (BOOL) shouldFadeToLayout;
 - (void) fadeWithInvocation:(id)a;
 - (void) setLabel:(id)aforKey:(id)b;
 - (void) restoreDefaultsForKey:(id)a;
 - (Q) textEditingKeyMask;
 - (void) setTextEditingTraits:(id)a;
 - (BOOL) usesAutoShift;
 - (void) triggerSpaceKeyplaneSwitchIfNecessary;
 - (void) didClearInput;
 - (void) restoreDefaultsForAllKeys;
 - (void) updateBackgroundCorners;
 - (void) setTarget:(id)aforKey:(id)b;
 - (void) setAction:(SEL)aforKey:(id)b;
 - (void) setLongPressAction:(SEL)aforKey:(id)b;
 - (void) longPressAction;
 - (BOOL) canProduceString:(id)a;
 - (d) hitBuffer;
 - (void) setReturnKeyEnabled:(BOOL)awithDisplayName:(id)bwithType:(i)c;
 - (BOOL) ignoresShiftState;
 - (BOOL) isShiftKeyPlaneChooser;
 - (BOOL) isShiftKeyBeingHeld;
 - (void) updateLocalizedKeys:(BOOL)a;
 - (q) cursorLocation;
 - (void) setCursorLocation:(q)a;
 - (BOOL) disableInteraction;
 - (void) setDisableInteraction:(BOOL)a;
 - (void) setPasscodeOutlineAlpha:(d)a;
 - (id) baseKeyForString:(id)a;
 - (id) keyplaneForKey:(id)a;
 - (id) keyplaneNamed:(id)a;
 - (void) changeToKeyplane:(id)a;
 - (id) simulateTouch:({CGPoint=dd})a;
 - (id) simulateTouchForCharacter:(id)aerrorVector:({CGPoint=dd})bshouldTypeVariants:(BOOL)cbaseKeyForVariants:(BOOL)d;
 - (void) wipeGestureRecognized:(id)a;
 - (void) addWipeRecognizer;
 - (void) setShiftKeyTouch:(id)a;
 - (SEL) handlerForNotification:(id)a;
 - (void) assertSavedLocation:({CGPoint=dd})aonTouch:(id)binWindow:(id)cresetPrevious:(BOOL)d;
 - (void) touchDown:(id)aexecutionContext:(id)b;
 - (void) touchDragged:(id)aexecutionContext:(id)b;
 - (void) clearShiftIfNecessaryForEndedTouch:(id)a;
 - (void) didCommitTouch:(id)a;
 - (void) touchUp:(id)aexecutionContext:(id)b;
 - (void) setDeferredTouchDownTask:(@?)a;
 - (void) setDeferredTouchMovedTask:(@?)a;
 - (id) screenEdgePanRecognizer;
 - (void) setLastTouchUpTime:(d)a;
 - (void) touchCancelled:(id)aexecutionContext:(id)b;
 - (BOOL) _shouldAllowKeyboardHandlingForTouchesBegan:(id)awithEvent:(id)b;
 - (id) touchesToCommitBeforeTouch:(id)a;
 - (void) commitTouches:(id)a;
 - (void) touchDown:(id)a;
 - (BOOL) _shouldAllowKeyboardHandlingForTouchesMoved:(id)awithEvent:(id)b;
 - (void) touchDragged:(id)a;
 - (BOOL) _shouldAllowKeyboardHandlingForTouchesEndedOrCancelled:(id)awithEvent:(id)b;
 - (BOOL) canForceTouchCommit:(id)a;
 - (void) touchUp:(id)a;
 - (void) didFinishScreenGestureRecognition;
 - (void) touchCancelled:(id)a;
 - (void) forceUpdatesForCommittedTouch;
 - (void) commitTouches:(id)aexecutionContext:(id)b;
 - (void) setIsExecutingDeferredTouchTasks:(BOOL)a;
 - (BOOL) isExecutingDeferredTouchTasks;
 - (void) _executeDeferredTouchTasks;
 - (BOOL) _canAddTouchesToScreenGestureRecognizer:(id)a;
 - (void) _addTouchToScreenEdgePanRecognizer:(id)a;
 - (void) _notifyLayoutOfGesturePosition:({CGPoint=dd})arelativeToEdge:(Q)b;
 - (Q) targetEdgesForScreenGestureRecognition;
 - (void) setScreenEdgePanRecognizer:(id)a;
 - (d) lastTouchUpTime;
 - (void) didRecognizeGestureOnEdge:(Q)awithDistance:(d)b;
 - (void) screenEdgePanRecognizerStateDidChange:(id)a;
 - (BOOL) performSpaceAction;
 - (void) deactivateActiveKeysClearingTouchInfo:(BOOL)aclearingDimming:(BOOL)b;
 - (void) reloadTargetEdgesForScreenGestureRecognition;
 - (d) flickDistance;
 - (id) shiftKeyTouch;
 - (BOOL) hideKeysUnderIndicator;
 - (@?) deferredTouchDownTask;
 - (@?) deferredTouchMovedTask;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (q) idiom;
 - (q) orientation;
 - (id) layoutTag;
 - (BOOL) hasAccentKey;
 - (BOOL) canMultitap;
 - (BOOL) isAlphabeticPlane;


@end
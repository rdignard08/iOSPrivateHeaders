
@protocol UIKBEmojiHitTestResponder;
@interface UIKeyboardLayoutStar : UIKeyboardLayout <UIKBEmojiHitTestResponder> {

    UIKBTree _keyboard;
    UIKBTree _keyplane;
    NSString _keyboardName;
    NSString _keyplaneName;
    long long _appearance;
    UIKBTree _activeKey;
    UIKBTree _inactiveLanguageIndicator;
    UIKBKeyplaneView _keyplaneView;
    UIKBBackgroundView _backgroundView;
    double _prevTouchUpTime;
    double _prevTouchDownTime;
    unsigned long long _prevUpActions;
    NSMutableDictionary _keyboards;
    NSMutableDictionary _allKeyplaneViews;
    NSMutableSet _allKeyplaneKeycaps;
    NSMutableSet _validInputStrings;
    NSString _localizedInputKey;
    ^{__CFDictionary=} _extendedTouchInfoMap;
    int _preferredTrackingChangeCount;
    int _shiftTrackingChangeCount;
    NSMutableSet _accentInfo;
    NSMutableSet _hasAccents;
    id _spaceTarget;
    SEL _spaceAction;
    SEL _spaceLongAction;
    id _returnTarget;
    SEL _returnAction;
    SEL _returnLongAction;
    id _deleteTarget;
    SEL _deleteAction;
    SEL _deleteLongAction;
    BOOL _shift;
    BOOL _autoshift;
    BOOL _settingShift;
    BOOL _didLongPress;
    NSString _preTouchKeyplaneName;
    BOOL _revertKeyplaneAfterTouch;
    BOOL _wasShifted;
    BOOL _swipeDetected;
    BOOL _showIntlKey;
    BOOL _showDictationKey;
    BOOL _suppressDeactivateKeys;
    BOOL _shiftLockReady;
    double _shiftLockFirstTapTime;
    UISwipeGestureRecognizer _rightSwipeRecognizer;
    UISwipeGestureRecognizer _leftSwipeRecognizer;
    UISwipeGestureRecognizer _upSwipeRecognizer;
    UIKeyboardKeyplaneTransition _keyplaneTransition;
    UIKeyboardSplitTransitionView _transitionView;
    double _initialSplitProgress;
    double _finalSplitProgress;
    double _initialPinchSeparation;
    [4d] _pinchSeparationValues;
    BOOL _pinchDetected;
    double _autoSplitLastUpdate;
    double _autoSplitElapsedTime;
    CADisplayLink _displayLink;
    BOOL _ghostKeysEnabled;
    UIDelayedAction _delayedCentroidUpdate;
    BOOL _isRebuilding;
    long long _initialBias;
    long long _transitionTargetBias;
    BOOL _edgeSwipeDetected;
    double _initialEdgeTranslation;
    double _edgeSwipeProgress;
    double _edgeSwipeVelocity;
    NSString _layoutTag;
    BOOL _preRotateShift;
    NSString _preRotateKeyplaneName;
    UIDelayedAction _multitapAction;
    BOOL _unshiftAfterMultitap;
    int _multitapCount;
    UIKBTree _multitapKey;
    UIView _flickPopupView;
    NSMutableDictionary _compositeImages;
    NSTimer _flickPopuptimer;
    id _touchInfo;
    UIView _dimKeyboardImageView;
    BOOL _keyboardImageViewIsDim;
    BOOL _isOutOfBounds;
    NSMutableSet _keysUnderIndicator;
    _UIKeyboardTypingSpeedLogger _typingSpeedLogger;
    int playKeyClickSoundOn;
    UIKBRenderConfig _renderConfig;
    UIView _modalDisplayView;
}
 + (Class) _subclassForScreenTraits:(id)a;
 + ({CGSize=dd}) keyboardSizeForInputMode:(id)ascreenTraits:(id)b;
 + (void) accessibilitySensitivityChanged;
 + (id) keyboardFromFactoryWithName:(id)ascreen:(id)b;
 + (id) keyboardWithName:(id)ascreenTraits:(id)b;
 + (id) sharedRivenKeyplaneGenerator;

 - (void) dealloc;
 - (void) setShift:(BOOL)a;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (BOOL) gestureRecognizerShouldBegin:(id)a;
 - (BOOL) gestureRecognizer:(id)ashouldReceiveTouch:(id)b;
 - (id) renderConfig;
 - (BOOL) pointInside:({CGPoint=dd})aforEvent:(^{__GSEvent=})b;
 - (void) deactivateActiveKey;
 - (void) setRenderConfig:(id)a;
 - (double) lastTouchUpTimestamp;
 - (id) scriptingInfoWithChildren;
 - (BOOL) isRotating;
 - (void) willMoveToWindow:(id)a;
 - (void) setKeyboardAppearance:(long long)a;
 - (void) logHandwritingData;
 - (id) candidateList;
 - (void) clearUnusedObjects:(BOOL)a;
 - (void) clearTransientState;
 - (void) deactivateActiveKeys;
 - (BOOL) hasCandidateKeys;
 - (void) setLayoutTag:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameForKeylayoutName:(id)a;
 - ({CGSize=dd}) dragGestureSize;
 - (BOOL) pinchDetected;
 - (void) setSplitProgress:(double)a;
 - (BOOL) pinchSplitGestureEnabled;
 - (void) showSplitTransitionView:(BOOL)a;
 - (BOOL) shouldShowIndicator;
 - (id) activationIndicatorView;
 - (void) setHideKeysUnderIndicator:(BOOL)a;
 - (BOOL) keyplaneContainsEmojiKey;
 - (id) keyboard;
 - (void) willRotate;
 - (void) didRotate;
 - (BOOL) performReturnAction;
 - (id) currentKeyplane;
 - (void) showKeyboardWithInputTraits:(id)ascreenTraits:(id)bsplitTraits:(id)c;
 - (void) setAutoshift:(BOOL)a;
 - (void) fadeWithInvocation:(id)a;
 - (void) _resizeForKeyplaneSize:({CGSize=dd})asplitWidthsChanged:(BOOL)b;
 - (void) deleteHandwritingStrokesAtIndexes:(id)a;
 - (void) setLabel:(id)aforKey:(id)b;
 - (void) updateKeyCentroids;
 - (void) restoreDefaultsForKey:(id)a;
 - (unsigned long long) textEditingKeyMask;
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
 - (double) hitBuffer;
 - (void) setReturnKeyEnabled:(BOOL)awithDisplayName:(id)bwithType:(int)c;
 - (BOOL) ignoresShiftState;
 - (BOOL) isShiftKeyPlaneChooser;
 - (BOOL) isShiftKeyBeingHeld;
 - (void) updateLocalizedKeys:(BOOL)a;
 - (void) setSplit:(BOOL)aanimated:(BOOL)b;
 - (void) finishSplitTransitionWithProgress:(double)a;
 - (id) keyplaneName;
 - (id) keyboardName;
 - (id) localizedInputMode;
 - (void) setDisableInteraction:(BOOL)a;
 - (void) setPasscodeOutlineAlpha:(double)a;
 - (id) baseKeyForString:(id)a;
 - (id) keyplaneForKey:(id)a;
 - (id) keyplaneNamed:(id)a;
 - (void) changeToKeyplane:(id)a;
 - (id) simulateTouch:({CGPoint=dd})a;
 - (id) simulateTouchForCharacter:(id)aerrorVector:({CGPoint=dd})bshouldTypeVariants:(BOOL)cbaseKeyForVariants:(BOOL)d;
 - (SEL) handlerForNotification:(id)a;
 - (void) touchDown:(id)aexecutionContext:(id)b;
 - (void) touchDragged:(id)aexecutionContext:(id)b;
 - (void) touchUp:(id)aexecutionContext:(id)b;
 - (void) touchCancelled:(id)aexecutionContext:(id)b;
 - (BOOL) canForceTouchCommit:(id)a;
 - (void) didFinishScreenGestureRecognition;
 - (unsigned long long) targetEdgesForScreenGestureRecognition;
 - (void) didRecognizeGestureOnEdge:(unsigned long long)awithDistance:(double)b;
 - (BOOL) performSpaceAction;
 - (void) deactivateActiveKeysClearingTouchInfo:(BOOL)aclearingDimming:(BOOL)b;
 - (void) installGestureRecognizers;
 - (^{CGImage=}) renderedImageWithToken:(id)a;
 - (BOOL) showsInternationalKey;
 - (BOOL) showsDictationKey;
 - (id) keyplane;
 - (void) refreshForDictationAvailablityDidChange;
 - (void) nextToUseInputModeDidChange:(id)a;
 - (void) uninstallGestureRecognizers;
 - (void) cancelMultitapTimer;
 - (void) accessibilitySensitivityChanged;
 - (id) modalDisplayView;
 - (void) setModalDisplayView:(id)a;
 - (void) cancelDelayedCentroidUpdate;
 - (void) clearAllTouchInfo;
 - (void) handleDismissFlickView:(id)a;
 - (void) setActiveKey:(id)a;
 - (void) setPreTouchKeyplaneName:(id)a;
 - (void) flushKeyCache:(id)a;
 - (id) defaultNameForKeyplaneName:(id)a;
 - (id) splitNameForKeyplaneName:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameForKeylayoutName:(id)aonKeyplaneName:(id)b;
 - (int) visualStyleForKeyboardIfSplit:(BOOL)a;
 - (void) updateBackgroundIfNeeded;
 - (void) setLocalizedInputKey:(id)a;
 - (void) setKeyplaneName:(id)a;
 - (void) refreshForRivenPreferences;
 - (void) updateLocalizedDisplayStringOnEmojiInternationalWithKeyplane:(id)awithInputMode:(id)b;
 - (void) setState:(int)aforKey:(id)b;
 - (int) displayTypeHintForShiftKey;
 - (int) displayTypeHintForMoreKey;
 - (void) setCurrencyKeysForCurrentLocaleOnKeyplane:(id)a;
 - (void) updateLocalizedKeysOnKeyplane:(id)a;
 - (^{CGImage=}) cachedCompositeImageWithCacheKey:(id)a;
 - (^{CGImage=}) renderedImageWithStateFallbacksForToken:(id)a;
 - (int) stateForKey:(id)a;
 - (BOOL) shouldShowDictationKey;
 - (BOOL) canReuseKeyplaneView;
 - (id) splitNameForKeyplane:(id)a;
 - (BOOL) useScaledGeometrySet;
 - (void) updateKeyboardForKeyplane:(id)a;
 - (void) updateMoreAndInternationalKeys;
 - (id) cacheTokenForKeyplane:(id)a;
 - (id) cacheIdentifierForKeyplaneNamed:(id)a;
 - (id) defaultKeyplaneForKeyplane:(id)a;
 - (int) stateForShiftKey:(id)a;
 - (int) stateForKeyplaneSwitchKey:(id)a;
 - (int) stateForMultitapReverseKey:(id)a;
 - (int) stateForDictationKey:(id)a;
 - (int) stateForStylingKey:(id)a;
 - (int) stateForManipulationKey:(id)a;
 - (void) updateLayoutTags;
 - (void) updateCachedKeyplaneKeycaps;
 - (void) updateGlobeKeyDisplayString;
 - (void) rebuildSplitTransitionView;
 - (void) updateTransitionWithFlags:(unsigned long long)a;
 - (id) keyWithRepresentedString:(id)a;
 - (BOOL) supportStylingWithKey:(id)a;
 - (id) highlightedVariantListForStylingKey:(id)a;
 - (BOOL) shouldMergeKey:(id)a;
 - (void) setKeyboardName:(id)aappearance:(long long)b;
 - (id) initialKeyplaneNameWithKBStarName:(id)a;
 - (void) setKeyboardDim:(BOOL)a;
 - (id) activeKey;
 - (BOOL) shouldHitTestKey:(id)a;
 - (id) keyViewHitTestForPoint:({CGPoint=dd})a;
 - (id) keyHitTestContainingPoint:({CGPoint=dd})a;
 - (id) keyHitTestClosestToPoint:({CGPoint=dd})a;
 - (id) keyHitTestWithoutCharging:({CGPoint=dd})a;
 - (id) keyHitTest:({CGPoint=dd})a;
 - (BOOL) shouldPreventInputManagerHitTestingForKey:(id)a;
 - (int) keycodeForKey:(id)a;
 - (BOOL) isLongPressedKey:(id)a;
 - (BOOL) handwritingPlane;
 - (id) multitapCompleteKeys;
 - (void) multitapInterrupted;
 - (void) multitapExpired;
 - (void) handleMultitapTimerFired;
 - (id) activeMultitapCompleteKey;
 - (void) clearHandwritingStrokesIfNeededAndNotify:(BOOL)a;
 - (unsigned long long) downActionFlagsForKey:(id)a;
 - (void) showPopupVariantsForKey:(id)a;
 - (id) touchForKey:(id)a;
 - (void) showMenu:(id)aforKey:(id)b;
 - (id) _keyplaneVariantsKeyForString:(id)a;
 - (long long) defaultSelectedVariantIndexForKey:(id)awithActions:(unsigned long long)b;
 - (void) setKeyboardDim:(BOOL)aamount:(double)bwithDuration:(double)c;
 - (long long) biasForKeyboard:(id)a;
 - (id) keyboardLayoutWithBias:(long long)a;
 - (BOOL) edgeSwipeGestureEnabled;
 - (long long) currentKeyboardBias;
 - (void) rebuildKeyplaneTransitionWithTargetBias:(long long)a;
 - (void) finishHandBiasTransition;
 - (void) prepareForSplitTransition;
 - (void) setPlayKeyClickSoundOn:(int)a;
 - (double) interpretPinchSeparationValues;
 - (void) finishSplit;
 - (void) finishSplitTransition;
 - (void) _autoSplit:(id)a;
 - (id) generateInfoForTouch:(id)a;
 - (void) completeHitTestForTouchDown:(id)aexecutionContext:(id)b;
 - (void) performHitTestForTouchInfo:(id)atouchStage:(int)bexecutionContextPassingUIKBTree:(id)c;
 - (void) clearInfoForTouch:(id)a;
 - (id) flickPopupStringForKey:(id)awithString:(id)b;
 - (void) handlePopupView:(id)a;
 - (void) touchDownWithKey:(id)aatPoint:({CGPoint=dd})bexecutionContext:(id)c;
 - (int) playKeyClickSoundOn;
 - (BOOL) shouldSkipResponseToGlobeKey:(id)aatPoint:({CGPoint=dd})b;
 - (void) hideMenu:(id)aforKey:(id)b;
 - (void) updateSelectedVariantIndexForKey:(id)awithActions:(unsigned long long)bwithPoint:({CGPoint=dd})c;
 - (void) playKeyClickSound;
 - (BOOL) shouldCommitPrecedingTouchesForTouchDownWithActions:(unsigned long long)a;
 - (void) completeCommitTouchesPrecedingTouchDownWithKey:(id)awithActions:(unsigned long long)bexecutionContext:(id)c;
 - (id) createKeyEventForStringAction:(id)aforKey:(id)bisPopupVariant:(BOOL)cisMultitap:(BOOL)disFlick:(BOOL)e;
 - (void) incrementPunctuationIfNeeded:(id)a;
 - (void) completeSendStringActionForTouchDownWithKey:(id)awithActions:(unsigned long long)bexecutionContext:(id)c;
 - (id) preTouchKeyplaneName;
 - (id) keyplaneNameForRevertAfterTouch;
 - (void) downActionShiftWithKey:(id)a;
 - (id) infoForTouch:(id)a;
 - (void) completeDeleteActionForTouchDownWithActions:(unsigned long long)aexecutionContext:(id)b;
 - (void) interpretTouchesForSplit;
 - (BOOL) touchPassesDragThreshold:(id)a;
 - (void) handleFlick:(id)a;
 - (void) completeHitTestForTouchDragged:(id)ahitKey:(id)b;
 - (unsigned long long) upActionFlagsForKey:(id)a;
 - (BOOL) predictionGestureDetectedForTouchInfo:(id)a;
 - (void) refreshGhostKeyState;
 - (BOOL) shouldRetestKey:(id)awithKeyplane:(id)b;
 - (id) activeTouchForInteraction:(int)a;
 - (void) completeRetestForTouchUp:(id)atimestamp:(double)binterval:(double)cexecutionContext:(id)d;
 - (BOOL) shouldSendTouchUpToInputManager:(id)a;
 - (BOOL) shouldSendTouchUpToRecorder:(id)a;
 - (void) touchMultitapTimer;
 - (BOOL) shouldSendStringForFlick:(id)a;
 - (id) flickStringForInputKey:(id)adirection:(int)b;
 - (void) completeSendStringActionForTouchUp:(id)awithActions:(long long)btimestamp:(double)cinterval:(double)ddidLongPress:(BOOL)eprevActions:(long long)fexecutionContext:(id)g;
 - (BOOL) shouldYieldToControlCenterForFlickWithInitialPoint:({CGPoint=dd})afinalPoint:({CGPoint=dd})b;
 - (void) continueFromInternationalActionForTouchUp:(id)awithActions:(long long)btimestamp:(double)cinterval:(double)ddidLongPress:(BOOL)eprevActions:(long long)fexecutionContext:(id)g;
 - (void) fadeMenu:(id)aforKey:(id)b;
 - (void) upActionShift;
 - (void) fadeMenu:(id)aforKey:(id)bwithDelay:(double)c;
 - (void) handleKeyboardMenusForTouch:(id)a;
 - (void) updateShiftKeyState;
 - (void) swipeDetected:(id)a;
 - (void) cancelTouchIfNecessaryForInfo:(id)a;
 - (BOOL) keyHasAccentedVariants:(id)a;
 - ({CGPoint=dd}) applyError:({CGPoint=dd})atoKey:(id)b;
 - (^{CGImage=}) renderedKeyplaneWithToken:(id)asplit:(BOOL)b;
 - (void) handleDelayedCentroidUpdate;
 - (id) currentKeyplaneView;
 - (void) setKeyboardName:(id)a;
 - (BOOL) shift;
 - (BOOL) autoShift;
 - (void) setAutoShift:(BOOL)a;
 - (BOOL) didLongPress;
 - (void) setDidLongPress:(BOOL)a;
 - (id) localizedInputKey;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameForKeyWithRepresentedString:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameForLastKeyWithRepresentedString:(id)a;
 - (id) popupKeyViews;
 - (void) setKeyForTouchInfo:(id)akey:(id)b;
 - (void) showPopupView:(int)awithKey:(id)bpopupInfo:(id)cforce:(BOOL)d;
 - (void) showFlickView:(int)awithKey:(id)bflickString:(id)c;
 - (void) populateFlickPopupsForKey:(id)a;
 - (void) handlePopupView;
 - (void) handleDismissFlickView;
 - (void) removeFromSuperview;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) layoutTag;
 - (BOOL) hasAccentKey;
 - (BOOL) canMultitap;
 - (BOOL) isAlphabeticPlane;


@end

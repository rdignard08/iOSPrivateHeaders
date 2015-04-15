
@protocol _UIIVCResponseDelegateImpl, UIKeyboardCandidateListDelegate;
@interface UIKeyboardImpl : UIView <_UIIVCResponseDelegateImpl, UIKeyboardCandidateListDelegate> {

    @"<UIKeyInput>" m_delegate;
    @"UIKeyboardTaskQueue" m_taskQueue;
    @? m_externalTask;
    @"TIKeyboardState" m_keyboardState;
    @"TIKeyboardInputManagerState" m_inputManagerState;
    @"UIView" m_languageIndicator;
    @"NSString" m_previousInputString;
    @"UIKeyboardAutocorrectionController" m_autocorrectionController;
    @"UIAutocorrectInlinePrompt" m_autocorrectPrompt;
    @"TIKeyboardCandidateResultSet" m_candidateResultSet;
    @"<UIKeyboardCandidateList>" m_candidateList;
    @"UIView" m_markedTextOverlay;
    @"<UIKeyboardImplGeometryDelegate>" m_geometryDelegate;
    @"NSObject<UIKeyboardRecording><UIApplicationEventRecording>" m_recorder;
    @"UIKeyboardLayout" m_layout;
    @"NSMutableDictionary" m_keyedLayouts;
    @"UIKeyboardScheduledTask" m_autoDeleteTask;
    I m_autoDeleteCount;
    d m_autoDeleteLastDelete;
    d m_autoDeleteInterval;
    I m_autoDeleteShiftCharacter;
    @"UIDelayedAction" m_longPressAction;
    q m_orientation;
    q m_originalOrientation;
    {CGPoint="x"d"y"d} m_inputPoint;
    i m_changeCount;
    d m_changeTime;
    id m_changedDelegate;
    ^{__CFRunLoopObserver=} m_observer;
    Q m_textInputChangingCount;
    BOOL m_textInputChangingText;
    BOOL m_textInputChangingDirection;
    BOOL m_textInputChangesIgnored;
    BOOL m_insideKeyInputDelegateCall;
    @"UITextInputTraits" m_defaultTraits;
    @"UITextInputTraits" m_traits;
    i m_returnKeyState;
    q m_currentDirection;
    BOOL m_autoDeleteOK;
    BOOL m_autocapitalizationPreference;
    BOOL m_autocorrectionPreference;
    BOOL m_autoshift;
    BOOL m_caretShowingNow;
    BOOL m_changeNotificationDisabled;
    BOOL m_correctionLearningAllowed;
    BOOL m_delegateIsSMSTextView;
    BOOL m_delegateRequiresKeyEvents;
    BOOL m_doubleSpacePeriodWasAppliedInCurrentContext;
    BOOL m_doubleSpacePeriodPreference;
    BOOL m_hardwareKeyboardAttached;
    BOOL m_inDealloc;
    BOOL m_initializationDone;
    BOOL m_performanceLoggingEnabled;
    BOOL m_selecting;
    BOOL m_shift;
    BOOL m_shiftLocked;
    BOOL m_shiftLockedEnabled;
    BOOL m_settingShift;
    BOOL m_suggestionsShownForCurrentDeletion;
    BOOL m_originalShouldSkipCandidateSelection;
    BOOL m_updatingPreferences;
    BOOL m_changingGeometryWithSameOrientation;
    BOOL m_suppressGeometryChangeNotifications;
    BOOL m_acceptingCandidate;
    BOOL m_didAutomaticallyInsertSpace;
    BOOL m_didSyncDocumentStateToInputDelegate;
    BOOL m_userChangedSelection;
    BOOL m_shouldChargeKeys;
    BOOL m_longPress;
    BOOL m_replacingWord;
    BOOL m_shiftNeedsUpdate;
    BOOL m_shiftPreventAutoshift;
    BOOL m_shiftHeldDownNeedsUpdated;
    BOOL m_delegateAdoptsTextInput;
    BOOL m_delegateAdoptsTextInputPrivate;
    BOOL m_delegateAdoptsKeyboardInput;
    BOOL m_delegateAdoptsWKInteraction;
    BOOL m_clientVariantSupportEnabled;
    BOOL m_clientVariantSupportEnabledEver;
    @"NSMutableArray" m_keyplaneNamesPreviousDelegate;
    @"NSMutableArray" m_keyplaneNamesCurrentDelegate;
    @"UITextInputArrowKeyHistory" m_arrowKeyHistory;
    BOOL m_preRotateShift;
    BOOL m_preRotateShiftLocked;
    BOOL m_showInputModeIndicator;
    BOOL m_suppressUpdateCandidateView;
    BOOL m_shouldUpdateCacheOnInputModesChange;
    BOOL m_shouldSetInputModeInNextRun;
    BOOL m_rivenCenterFilled;
    d m_splitProgress;
    BOOL m_needsCandidates;
    BOOL m_shouldSkipCandidateGeneration;
    BOOL m_updateLayoutOnShowKeyboard;
    BOOL m_receivedCandidatesInCurrentInputMode;
    i _currentAlertReason;
    BOOL m_scrolling;
    BOOL m_hasInputOnAcceptCandidate;
    BOOL m_maximizing;
    Q m_previousSpaceKeyBehavior;
    Q m_previousReturnKeyBehavior;
    BOOL m_usesCandidateSelection;
    BOOL m_UsedCandidateSelection;
    @? m_keyInputCompletionHandler;
    @"WebEvent" m_lastWebEvent;
    BOOL m_updatingLayout;
    BOOL m_showsCandidateBar;
    BOOL m_showsCandidateInline;
    BOOL committingCandidate;
    BOOL geometryIsChanging;
    BOOL m_softwareKeyboardShownByTouch;
    BOOL _handlingKeyCommandFromHardwareKeyboard;
    @"TIKeyboardTouchEvent" m_touchEventWaitingForKeyInputEvent;
    @"_UIActionWhenIdle" m_delayedCandidateRequest;
    @"_UIActionWhenIdle" m_deferredDidSetDelegateAction;
    @"UIPhysicalKeyboardEvent" m_hardwareRepeatEvent;
    @"UIKeyboardScheduledTask" m_hardwareRepeatTask;
    @"UIAlertView" keyboardAlertView;
    @"NSDictionary" _candidateRequestInfo;
    @"UIKeyboardScheduledTask" _autocorrectPromptTask;
}
 + (id) sharedInstance;
 + (id) keyboardScreen;
 + (BOOL) isSplit;
 + (void) applicationDidReceiveMemoryWarning:(id)a;
 + (void) applicationDidEnterBackground:(id)a;
 + (void) applicationWillSuspend:(id)a;
 + (id) activeInstance;
 + (void) releaseSharedInstance;
 + ({CGSize=dd}) sizeForInterfaceOrientation:(q)a;
 + ({CGSize=dd}) defaultSizeForInterfaceOrientation:(q)a;
 + ({CGSize=dd}) _defaultSizeForInterfaceOrientation:(q)a;
 + (Class) layoutClassForInputMode:(id)akeyboardType:(q)b;
 + (Class) layoutClassForCurrentInputMode;
 + ({CGSize=dd}) keyboardSizeForInterfaceOrientation:(q)a;
 + (d) additionalInstanceHeightForInterfaceOrientation:(q)a;
 + (d) additionalInstanceHeightLoadingForInterfaceOrientation:(q)a;
 + (void) markPerformance:(id)a;
 + (d) splitProgress;
 + (void) markElapsed:(id)a;
 + (void) suppressSetPersistentOffset:(BOOL)a;
 + (BOOL) supportsSplit;
 + (d) persistentSplitProgress;
 + (void) refreshRivenStateWithTraits:(id)aisKeyboard:(BOOL)b;
 + (BOOL) rivenPreference;
 + ({CGPoint=dd}) normalizedPersistentOffset;
 + (id) keyboardWindow;
 + ({CGPoint=dd}) persistentOffset;
 + (d) additionalInstanceHeight;
 + (void) sendPerformanceNotification:(id)a;
 + (void) hardwareKeyboardAvailabilityChanged;
 + (id) normalizedInputModesFromPreference;
 + (d) additionalInstanceHeightLoading;
 + (BOOL) rivenInstalled;
 + (BOOL) rivenTranslationPreference;
 + (void) setPersistentSplitProgress:(d)a;
 + (void) setPersistentOffset:({CGPoint=dd})a;
 + (i) persistentDictationTargetZone;
 + (void) setPersistentDictationTargetZone:(i)a;
 + (void) setPersistentDictationWindowOffset:({CGPoint=dd})a;
 + ({CGPoint=dd}) persistentDictationWindowOffset;
 + (q) interfaceOrientationForSize:({CGSize=dd})a;
 + (void) setParentTestForProfiling:(id)a;
 + (void) _clearHardwareKeyboardMinimizationPreference;
 + (void) applicationWillEnterForeground:(id)a;
 + (void) applicationWillResignActive:(id)a;

 - (i) changeCount;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) setShift:(BOOL)a;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (BOOL) pointInside:({CGPoint=dd})aforEvent:(^{__GSEvent=})b;
 - (void) cancelAllKeyEvents;
 - (void) ejectKeyDown;
 - (void) _physicalButtonsBegan:(id)awithEvent:(id)b;
 - (void) _physicalButtonsEnded:(id)awithEvent:(id)b;
 - (void) _physicalButtonsCancelled:(id)awithEvent:(id)b;
 - (void) handleKeyEvent:(id)a;
 - (void) _wheelChangedWithEvent:(id)a;
 - (void) alertView:(id)aclickedButtonAtIndex:(q)b;
 - (void) _moveWithEvent:(id)a;
 - (void) willMoveToWindow:(id)a;
 - (void) didMoveToSuperview;
 - (void) candidateListAcceptCandidate:(id)a;
 - (void) candidateListSelectionDidChange:(id)a;
 - (void) showPreviousCandidate;
 - (void) showNextPage;
 - (void) jumpToCompositions;
 - (void) revealHiddenCandidates;
 - (id) selectionView;
 - (void) setSelectionWithPoint:({CGPoint=dd})a;
 - (id) inputDelegate;
 - (void) textWillChange:(id)a;
 - (void) textDidChange:(id)a;
 - (void) deleteBackward;
 - (void) unmarkText;
 - (BOOL) hasMarkedText;
 - (void) remoteControlReceivedWithEvent:(id)a;
 - (void) updateLayout;
 - (void) setCaretBlinks:(BOOL)a;
 - (void) layoutHasChanged;
 - (void) setInitialDirection;
 - (void) textFrameChanged:(id)a;
 - (id) changedDelegate;
 - (void) setChangedDelegate:(id)a;
 - (void) textChanged:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) subtractKeyboardFrameFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainView:(id)b;
 - (i) _clipCornersOfView:(id)a;
 - (BOOL) usesCandidateSelection;
 - (void) setUsesCandidateSelection:(BOOL)a;
 - (void) logHandwritingData;
 - (id) candidateList;
 - (id) _layout;
 - (BOOL) supportsNumberKeySelection;
 - (BOOL) centerFilled;
 - (void) releaseInputManager;
 - (void) clearDelegate;
 - (void) clearAnimations;
 - (void) clearTimers;
 - (void) clearLayouts;
 - (void) acceptAutocorrection;
 - (void) clearTransientState;
 - (void) _updateSoundPreheatingForWindow:(id)a;
 - (BOOL) showsCandidateBar;
 - (BOOL) shouldShowCandidateBar;
 - (BOOL) hardwareKeyboardIsSeen;
 - (void) takeTextInputTraitsFromDelegate;
 - (BOOL) shiftLockPreference;
 - (BOOL) doubleSpacePeriodPreference;
 - (id) inputModePreference;
 - (id) UILanguagePreference;
 - (void) refreshRivenPreferences;
 - (void) setInSplitKeyboardMode:(BOOL)a;
 - (void) setInputModeFromPreferences;
 - (void) installRecorder;
 - (void) delayedInit;
 - (void) applicationSuspendedEventsOnly:(id)a;
 - (void) applicationResumedEventsOnly:(id)a;
 - (void) keyboardDidHide:(id)a;
 - (void) selectionScrolling:(id)a;
 - (BOOL) performanceLoggingPreference;
 - (void) setRecorder:(id)a;
 - (void) removeAutocorrectPromptAndCandidateList;
 - (void) setInputMode:(id)a;
 - (BOOL) shouldSwitchFromInputManagerMode:(id)atoInputMode:(id)b;
 - (void) updateInputManagerMode;
 - (BOOL) candidateSelectionPredictionForTraits;
 - (id) autocorrectionController;
 - (void) clearInput;
 - (id) keyboardAlertView;
 - (void) setKeyboardAlertView:(id)a;
 - (void) clearChangeTimeAndCount;
 - (void) updateCandidateDisplay;
 - (BOOL) autocorrectionPreferenceForTraits;
 - (void) setAutocorrectSpellingEnabled:(BOOL)a;
 - (BOOL) autocapitalizationPreference;
 - (void) updateInputManagerAutocapitalizationType;
 - (void) recomputeActiveInputModesWithExtensions:(BOOL)a;
 - (void) syncInputManagerToKeyboardState;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameForKeylayoutName:(id)a;
 - ({CGSize=dd}) dragGestureSize;
 - (void) setSplitProgress:(d)a;
 - (void) setRivenSplitLock:(BOOL)a;
 - (BOOL) autocorrectionPreference;
 - (BOOL) keyboardIsKeyPad;
 - (BOOL) isMinimized;
 - (BOOL) predictionForTraits;
 - (BOOL) checkSpellingPreference;
 - (BOOL) automaticMinimizationEnabled;
 - (void) setInputMode:(id)auserInitiated:(BOOL)b;
 - (id) taskQueue;
 - (void) setInputMode:(id)auserInitiated:(BOOL)bupdateIndicator:(BOOL)cexecutionContext:(id)d;
 - (void) setKeyboardInputMode:(id)auserInitiated:(BOOL)bupdateIndicator:(BOOL)cexecutionContext:(id)d;
 - (void) cleanUpBeforeInputModeSwitch;
 - (void) setInputManagerFromCurrentInputMode;
 - (void) reinitializeAfterInputModeSwitch:(BOOL)a;
 - (void) finishSetKeyboardInputMode:(id)adidChangeDirection:(BOOL)b;
 - (void) textChanged:(id)aexecutionContext:(id)b;
 - (void) syncInputManagerToKeyboardStateWithExecutionContext:(id)a;
 - (void) callLayoutUpdateLocalizedKeys;
 - (void) updateInputModeIndicatorOnSingleKeyOnly:(BOOL)a;
 - (void) finishSetExtensionInputMode:(id)adidChangeDirection:(BOOL)b;
 - (void) finishSetInputMode:(id)adidChangeDirection:(BOOL)b;
 - (void) updateTextCandidateView;
 - (void) generateCandidates;
 - (void) setKeyboardInputMode:(id)auserInitiated:(BOOL)b;
 - (void) clearLanguageIndicator;
 - (void) fadeAnimationDidStop:(id)afinished:(id)b;
 - (void) updateInputModeIndicatorOnSingleKeyOnly:(BOOL)apreserveIfPossible:(BOOL)b;
 - (void) showInformationalAlertIfNeededForReason:(i)a;
 - (void) finishSetInputModeToNextInPreferredListWithExecutionContext:(id)a;
 - (void) updateInputModeLastChosenPreference;
 - (void) showInternationalKeyInfoAlertIfNeeded;
 - (BOOL) showInputModeIndicator;
 - (void) setOrientation;
 - (void) prepareForGeometryChange;
 - (void) setShiftLocked:(BOOL)a;
 - (void) updateStylingTraitsIfNeeded;
 - (void) geometryChangeDone:(BOOL)a;
 - (id) privateInputDelegate;
 - (BOOL) shouldForceASCIICapable;
 - (void) setDelegate:(id)aforce:(BOOL)b;
 - (void) updateReturnKey;
 - (id) recorder;
 - (void) stopKeyboardRecording;
 - (void) setCaretVisible:(BOOL)a;
 - (void) didHandleWebKeyEvent;
 - (id) asynchronousInputDelegate;
 - (void) storeDelegateConformance;
 - (void) stopAutoDelete;
 - (void) clearShiftState;
 - (void) callChanged;
 - (BOOL) delegateIsSMSTextView;
 - (void) setArrowKeyHistory:(id)a;
 - (void) setReturnKeyEnabled:(BOOL)a;
 - (id) desirableInputModesWithExtensions:(BOOL)a;
 - (void) updateShiftState;
 - (void) callLayoutUpdateAllLocalizedKeys;
 - (void) startKeyboardRecording;
 - (id) deferredDidSetDelegateAction;
 - (void) didSetDelegate;
 - (void) setDeferredDidSetDelegateAction:(id)a;
 - (void) updateForChangedSelection;
 - (void) updateForChangedSelectionWithExecutionContext:(id)a;
 - (void) releaseInputManagerIfInactive;
 - (BOOL) checkSpellingPreferenceForTraits;
 - (BOOL) isAutoFillMode;
 - (void) clearSelection;
 - (void) selectionWillChange:(id)a;
 - (void) finishTextChanged;
 - (void) updateReturnKey:(BOOL)a;
 - (void) updateNoContentViews;
 - (void) setChanged;
 - (void) setShiftOffIfNeeded;
 - (void) selectionDidChange:(id)a;
 - (BOOL) callShouldReplaceExtendedRange:(q)awithText:(id)bincludeMarkedText:(BOOL)c;
 - (BOOL) callShouldInsertText:(id)a;
 - (BOOL) _shouldRequestInputManagerSyncForKeyboardOutputCallbacks:(id)a;
 - (void) collapseSelectionAndAdjustByOffset:(q)a;
 - (void) _updateInputViewControllerOutput:(id)aforKeyboardOutput:(id)b;
 - (void) performKeyboardOutput:(id)a;
 - (void) _performInputViewControllerOutput:(id)a;
 - (void) _handleWebKeyEvent:(id)awithInputString:(id)bexecutionContext:(id)c;
 - (void) _processInputViewControllerKeyboardOutput:(id)aexecutionContext:(id)b;
 - (void) _completePerformInputViewControllerOutput:(id)aexecutionContext:(id)b;
 - (id) delegateAsResponder;
 - (void) setInputModeToNextInPreferredListWithExecutionContext:(id)a;
 - (void) dismissKeyboard;
 - (void) _requestInputManagerSync;
 - (id) legacyInputDelegate;
 - (id) inputManagerState;
 - (BOOL) usesAutoDeleteWord;
 - (void) syncDocumentStateToInputDelegate;
 - (void) updateAutocorrectPrompt:(id)a;
 - (void) updateObserverState;
 - (id) arrowKeyHistory;
 - (void) setHandlingKeyCommandFromHardwareKeyboard:(BOOL)a;
 - (void) movePhraseBoundaryToDirection:(q)a;
 - (BOOL) canHandleEvent:(id)a;
 - (void) deleteForwardAndNotify:(BOOL)a;
 - (void) fadeAutocorrectPrompt;
 - (id) inputModeLastUsedForLanguage:(id)a;
 - (void) performKeyBehaviorConfirm;
 - (void) performKeyBehaviorConfirmFirstCandidate;
 - (id) _keyboardBehaviorState;
 - (void) setGeometryIsChanging:(BOOL)a;
 - (void) updateLayoutIfNeeded;
 - (void) removeAutocorrectPrompt;
 - (void) releaseSuppressUpdateCandidateView;
 - (void) clearLongPressTimer;
 - (BOOL) isUsingDictationLayout;
 - (id) dynamicCaretList;
 - (BOOL) showsCandidateInline;
 - (BOOL) currentKeyboardTraitsAllowCandidateBar;
 - (void) setShouldSkipCandidateSelection:(BOOL)a;
 - (void) setShowsCandidateBar:(BOOL)a;
 - (void) callLayoutUpdateReturnKey;
 - (void) finishLayoutChangeWithArguments:(id)a;
 - (void) _resizeForKeyplaneSize:({CGSize=dd})asplitWidthsChanged:(BOOL)b;
 - (BOOL) splitTransitionInProgress;
 - (id) inputStringFromPhraseBoundary;
 - (void) clearInputForMarkedText;
 - (void) syncDocumentStateToInputDelegateWithExecutionContext:(id)a;
 - (BOOL) hasEditableMarkedText;
 - (id) inputManager;
 - (void) prepareForSelectionChange;
 - (void) setPreviousInputString:(id)a;
 - (BOOL) shouldGenerateCandidatesAfterSelectionChange;
 - (void) completeUpdateForChangedSelection:(BOOL)a;
 - (BOOL) usesAutocorrectionLists;
 - (void) callChangedSelection;
 - (void) deleteHandwritingStrokesAtIndexes:(id)a;
 - (void) flushTouchEventWaitingForKeyInputEventIfNecessary;
 - (void) refreshKeyboardState;
 - (void) syncKeyboardToConfiguration:(id)a;
 - (void) setMarkedText:(id)aselectedRange:({_NSRange=QQ})binputString:(id)csearchString:(id)d;
 - (BOOL) isShifted;
 - (BOOL) isShiftLocked;
 - (void) setLabel:(id)aforKey:(id)b;
 - (void) cancelCandidateRequests;
 - (id) touchEventWaitingForKeyInputEvent;
 - (void) setTouchEventWaitingForKeyInputEvent:(id)a;
 - (void) acceptCandidate:(id)a;
 - (void) unmarkText:(id)a;
 - (void) insertTextAfterSelection:(id)a;
 - (void) deleteBackwardAndNotify:(BOOL)a;
 - (void) setAutocorrection:(id)a;
 - (id) autocorrectPrompt;
 - (void) touchAutocorrectPromptTimer;
 - (void) generateCandidatesAsynchronouslyWithRange:({_NSRange=QQ})aselectedCandidate:(id)b;
 - (void) setCandidateRequestInfo:(id)a;
 - (id) candidateRequestInfo;
 - (void) inputManagerDidGenerateCandidatesForRequest:(id)aresultSet:(id)b;
 - (id) delayedCandidateRequest;
 - (void) setDelayedCandidateRequest:(id)a;
 - (void) updateCandidateDisplayAsyncWithCandidateSet:(id)a;
 - (void) inputManagerDidGenerateAutocorrections:(id)aexecutionContext:(id)b;
 - (void) generateAutocorrectionsWithCompletionHandler:(@?)a;
 - (void) setAutocorrectionList:(id)a;
 - (void) updateAutocorrectPrompt:(id)aexecutionContext:(id)b;
 - (void) skipHitTestForTouchEvent:(id)a;
 - (void) didChangePhraseBoundary;
 - (BOOL) shouldSwitchInputMode:(id)a;
 - (void) callLayoutSetShift:(BOOL)a;
 - (void) callLayoutSetAutoshift:(BOOL)a;
 - (BOOL) callLayoutIsShiftKeyPlaneChooser;
 - (void) notifyShiftState;
 - (BOOL) callLayoutIsShiftKeyBeingHeld;
 - (BOOL) callLayoutUsesAutoShift;
 - (BOOL) isSelectionAtSentenceAutoshiftBoundary;
 - (void) setShiftPreventAutoshift:(BOOL)a;
 - (void) setShift:(BOOL)aautoshift:(BOOL)b;
 - (void) setShiftNeedsUpdate;
 - (BOOL) suppliesCompletions;
 - (void) deleteFromInputWithFlags:(Q)aexecutionContext:(id)b;
 - (void) _handleKeyEvent:(id)aexecutionContext:(id)b;
 - (void) handleDeleteAsRepeat:(BOOL)aexecutionContext:(id)b;
 - (void) handleDeleteWithExecutionContext:(id)a;
 - (void) handleClearWithExecutionContext:(id)a;
 - (void) addInputString:(id)awithFlags:(Q)bexecutionContext:(id)c;
 - (BOOL) acceptInputString:(id)a;
 - (void) updateKeyboardStateForInsertion:(id)a;
 - (void) updateKeyboardStateForDeletion;
 - (BOOL) isInHardwareKeyboardMode;
 - (BOOL) callLayoutIgnoresShiftState;
 - (void) updateDoubleSpacePeriodStateForCharacter:(I)a;
 - (BOOL) shouldDeleteAutospaceBeforeTerminator:(id)a;
 - (BOOL) applyAutocorrection:(id)a;
 - (void) setExternalTask:(@?)a;
 - (id) inputEventForInputString:(id)a;
 - (void) addInputEvent:(id)aexecutionContext:(id)b;
 - (void) acceptCurrentCandidateIfSelectedWithExecutionContext:(id)a;
 - (void) updateChangeTimeAndIncrementCount;
 - (void) collapseSelection;
 - (void) acceptCurrentCandidateForInput:(id)a;
 - (void) addWordTerminator:(id)aafterSpace:(BOOL)belapsedTime:(d)cexecutionContext:(id)d;
 - (void) completeAddInputString:(id)a;
 - (void) acceptAutocorrectionForWordTerminator:(id)aexecutionContextPassingTIKeyboardCandidate:(id)b;
 - (void) willReplaceTextInRangedSelectionWithKeyboardInput;
 - (void) completeAddInputString:(id)agenerateCandidates:(BOOL)b;
 - (void) handleKeyboardInput:(id)aexecutionContext:(id)b;
 - (BOOL) shouldAcceptCandidate:(id)abeforeInputString:(id)b;
 - (void) didAcceptAutocorrection:(id)awordTerminator:(id)b;
 - (void) acceptAutocorrection:(id)aexecutionContextPassingTIKeyboardCandidate:(id)b;
 - (id) inputWordForTerminatorAtSelection;
 - (BOOL) nextCharacterIsWordCharacter;
 - (void) syncInputManagerToAcceptedAutocorrection:(id)aforInput:(id)b;
 - (void) moveSelectionToEndOfWord;
 - (BOOL) shouldApplyAcceptedAutocorrection:(id)a;
 - (void) setDocumentStateForAutocorrection:(id)a;
 - (void) animateAutocorrectionToRect:({CGRect={CGPoint=dd}{CGSize=dd}})afromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) didApplyAutocorrection:(id)aautocorrectPromptFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) animateAutocorrectionToText:(id)afromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) trackUsageForAcceptedAutocorrection:(id)apromptWasShowing:(BOOL)b;
 - (id) handleDeleteAutospaceForInputString:(id)aafterSpace:(BOOL)b;
 - (id) handleDoubleSpacePeriodForInputString:(id)aafterSpace:(BOOL)belapsedTime:(d)c;
 - (id) handleReplacement:(id)aforSpaceAndInput:(id)b;
 - (void) updateDoubleSpacePeriodStateForString:(id)a;
 - (void) setUserSelectedCurrentCandidate:(BOOL)a;
 - (Q) phraseBoundary;
 - (void) adjustPhraseBoundaryInForwardDirection:(BOOL)aexecutionContext:(id)b;
 - (void) completeDeleteOnceFromInputWithCharacterBefore:(I)a;
 - (void) scheduleReplacementsWithOptions:(Q)a;
 - (BOOL) selectionIsEndOfWord;
 - (void) scheduleReplacementsAfterDeletionToEndOfWord;
 - (BOOL) shouldEnableShiftForDeletedCharacter:(I)a;
 - (void) didHandleWebKeyEvent:(id)a;
 - (BOOL) callShouldDeleteWithWordCountForRapidDelete:(i)acharacterCountForRapidDelete:(i)b;
 - (void) deleteOnceFromInputWithExecutionContext:(id)a;
 - (void) completeDeleteFromInput;
 - (id) acceptAutocorrectionForWordTerminator:(id)a;
 - (void) acceptCurrentCandidate;
 - (void) acceptCandidate:(id)aatIndex:(Q)bexecutionContext:(id)c;
 - (void) acceptPredictiveInput:(id)aexecutionContext:(id)b;
 - (void) completeAcceptCandidate:(id)a;
 - (void) handleAcceptedCandidate:(id)aexecutionContext:(id)b;
 - (void) acceptCandidate:(id)aforInput:(id)b;
 - (BOOL) committingCandidate;
 - (void) setCommittingCandidate:(BOOL)a;
 - (BOOL) acceptWord:(id)afirstDelete:(Q)bforInput:(id)c;
 - (void) acceptCurrentCandidateForInput:(id)aexecutionContext:(id)b;
 - (void) acceptCandidate:(id)aatIndex:(Q)b;
 - (BOOL) geometryIsChanging;
 - (void) generateCandidatesWithOptions:(i)a;
 - (void) trackUsageForCandidateAcceptedAction:(id)a;
 - (void) updateKeyboardConfigurations;
 - (void) addInputObject:(id)aexecutionContext:(id)b;
 - (void) setInHardwareKeyboardMode:(BOOL)a;
 - (void) completeAcceptCandidateBeforeAddingInputObject:(id)aexecutionContext:(id)b;
 - (BOOL) acceptWord:(id)afirstDelete:(Q)b;
 - (void) generateCandidatesAsynchronously;
 - (void) _setNeedsCandidates:(BOOL)a;
 - (BOOL) needsToDeferUpdateTextCandidateView;
 - (id) autocorrectPromptTask;
 - (void) setAutocorrectPromptTask:(id)a;
 - (void) resizeCandidateBarWithDelta:(d)a;
 - (void) clearAutocorrectPromptTimer;
 - (void) sendCallbacksForPostCorrectionsRemoval;
 - (void) removeCandidateList;
 - (BOOL) noContent;
 - (void) _nop;
 - (void) showNextCandidates;
 - (id) returnKeyDisplayName;
 - (BOOL) handlingKeyCommandFromHardwareKeyboard;
 - (void) acceptFirstCandidate;
 - (void) _handleKeyBehavior:(Q)aforKeyType:(id)b;
 - (id) updateKeyBehaviors:(id)awithBehaviors:(id)bforState:(id)c;
 - (id) inputOverlayContainer;
 - (BOOL) delegateSupportsCorrectionUI;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRectToAutocorrectRect:({CGRect={CGPoint=dd}{CGSize=dd}})adelegateView:(id)bcontainer:(id)c;
 - (id) autocorrectPromptRectsFromFirstDelegateRect:({CGRect={CGPoint=dd}{CGSize=dd}})alastDelegateRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) updateAutocorrectPrompt:(id)acorrectionRects:(id)b;
 - (id) autocorrectPromptRectsForInput:(id)a;
 - (id) _rangeForAutocorrectionText:(id)a;
 - (void) trackUsageForPromptedCorrection:(id)ainputString:(id)bpreviousPrompt:(id)c;
 - (void) sendCallbacksForPreCorrectionsDisplay;
 - (void) autocorrectionAnimationDidStop:(id)afinished:(id)bcontext:(id)c;
 - (BOOL) delegateSuggestionsForCurrentInput;
 - (id) autocorrectionRecordForWord:(id)a;
 - (id) replacementsFromSelectedText;
 - (void) generateReplacementsForString:(id)acandidatesHandler:(@?)bexecutionContext:(id)c;
 - (void) clearAutoDeleteTimer;
 - (void) handleAutoDeleteWithExecutionContext:(id)a;
 - (void) completeHandleAutoDelete;
 - (void) touchAutoDeleteTimerWithThreshold:(d)a;
 - (void) handleDelayedActionLongPress;
 - (void) touchLongPressTimerWithDelay:(d)a;
 - (void) longPressAction;
 - (void) callLayoutLongPressAction;
 - (void) hardwareKeyboardAvailabilityChanged;
 - (void) setAutomaticMinimizationEnabled:(BOOL)a;
 - (void) updateHardwareKeyboardLayout;
 - (id) hardwareRepeatTask;
 - (id) hardwareRepeatEvent;
 - (void) handleKeyEvent:(id)aexecutionContext:(id)b;
 - (void) setHardwareRepeatTask:(id)a;
 - (void) showKeyboard;
 - (void) hideKeyboard;
 - (void) setHardwareRepeatEvent:(id)a;
 - (void) _handleWebKeyEvent:(id)awithEventType:(i)bwithInputString:(id)cwithInputStringIgnoringModifiers:(id)d;
 - (void) _handleWebKeyEvent:(id)awithIndex:(Q)binInputString:(id)cexecutionContext:(id)d;
 - (void) _continueHandleWebKeyEventWithTask:(@?)aexecutionContext:(id)b;
 - (@?) externalTask;
 - (void) updateKeyboardEventsLagging:(id)a;
 - (void) setHardwareKeyboardIsSeen:(BOOL)a;
 - (BOOL) softwareKeyboardShownByTouch;
 - (void) toggleSoftwareKeyboard;
 - (void) setSoftwareKeyboardShownByTouch:(BOOL)a;
 - (void) _remapKeyEvent:(id)awithKeyEventMap:(id)b;
 - (void) firstHardwareAutoRepeatWithExecutionContext:(id)a;
 - (BOOL) handleKeyCommand:(id)arepeatOkay:(^B)b;
 - (BOOL) isValidKeyInput:(id)a;
 - (void) completeHandleKeyEvent:(id)a;
 - (void) handleKeyWithString:(id)aforKeyEvent:(id)bexecutionContext:(id)c;
 - (void) handleStringInput:(id)awithFlags:(Q)bexecutionContext:(id)c;
 - (BOOL) caretBlinks;
 - (BOOL) canHandleKeyHitTest;
 - (BOOL) needsKeyHitTestResults;
 - (void) setCandidateList:(id)aupdateCandidateView:(BOOL)b;
 - (id) layoutForKeyHitTest;
 - (void) setLayoutForKeyHitTest:(id)a;
 - (void) defaultsDidChange;
 - (BOOL) rivenSplitLock;
 - (Q) minimumTouchesForTranslation;
 - (BOOL) hideAccessoryViewsDuringSplit;
 - (void) cancelSplitTransition;
 - (BOOL) predictionPreferenceForTraits;
 - (BOOL) swipeToTabPreference;
 - (BOOL) keyboardsExpandedPreference;
 - (void) saveInputModesPreference:(id)a;
 - (id) inputModeLastUsedPreference;
 - (void) setShouldUpdateCacheOnInputModesChange:(BOOL)a;
 - (id) hardwareKeyboardsSeenPreference;
 - (void) setHardwareKeyboardsSeenPreference:(id)a;
 - (void) setInputModeToNextASCIICapableInPreferredList;
 - (void) prepareLayoutForInterfaceOrientation:(q)a;
 - (void) updateLayoutToCurrentInterfaceOrientation;
 - (void) finishLayoutToCurrentInterfaceOrientation;
 - (void) setCorrectionLearningAllowed:(BOOL)a;
 - (BOOL) autocorrectSpellingEnabled;
 - (void) setDefaultTextInputTraits:(id)a;
 - (void) enable;
 - (BOOL) changeNotificationDisabled;
 - (void) setChangeNotificationDisabled:(BOOL)a;
 - (void) handleObserverCallback;
 - (id) markedTextOverlay;
 - (void) generateAutocorrectionWithExecutionContext:(id)a;
 - (void) skipHitTestForTouchEvent:(id)adelayed:(BOOL)b;
 - (void) performHitTestForTouchEvent:(id)aexecutionContextPassingNSNumber:(id)b;
 - (void) removeAllDynamicDictionaries;
 - (void) toggleShift;
 - (void) setShiftLockedForced:(BOOL)a;
 - (BOOL) isAutoShifted;
 - (BOOL) shiftLockedEnabled;
 - (void) forceShiftUpdate;
 - (void) forceShiftUpdateIfKeyboardStateChanged;
 - (void) keyActivated;
 - (void) keyDeactivated;
 - (void) handleDelete;
 - (void) handleClear;
 - (void) addInputString:(id)a;
 - (void) addInputString:(id)afromVariantKey:(BOOL)b;
 - (void) updateLayoutAndSetShift;
 - (void) removeAutocorrection;
 - (void) acceptPredictiveInput:(id)a;
 - (void) acceptCurrentCandidateWithExecutionContext:(id)a;
 - (void) acceptCurrentCandidateIfSelected;
 - (void) addInputObject:(id)a;
 - (void) replaceText:(id)a;
 - (BOOL) displaysCandidates;
 - (void) setShowsCandidateInline:(BOOL)a;
 - (void) responseContextDidChange;
 - (BOOL) returnKeyEnabled;
 - (void) generateCandidatesFromReplacements;
 - (id) generateAutocorrectionReplacements:(id)a;
 - (void) startAutoDeleteTimer;
 - (void) touchLongPressTimer;
 - (BOOL) isLongPress;
 - (void) showKeyboardIfNeeded;
 - (void) startCaretBlinkIfNeeded;
 - (BOOL) caretVisible;
 - (id) geometryDelegate;
 - (void) setGeometryDelegate:(id)a;
 - (void) setShowInputModeIndicator:(BOOL)a;
 - (BOOL) shouldSetInputModeInNextRun;
 - (void) setShouldSetInputModeInNextRun:(BOOL)a;
 - (BOOL) receivedCandidatesInCurrentInputMode;
 - (void) setReceivedCandidatesInCurrentInputMode:(BOOL)a;
 - (void) timeMark:(I)amessage:(id)b;
 - (void) timeMark:(I)a;
 - (void) timeElapsed:(I)amessage:(id)b;
 - (void) _setInputManager:(id)a;
 - (void) _setShiftLockedEnabled:(BOOL)a;
 - (BOOL) hasAutoRepeat;
 - (void) updateFromTextInputTraits;
 - (BOOL) _isShowingCandidateUIWithAvailableCandidates;
 - (i) textInputChangingCount;
 - (void) testAutocorrectionPromptWithCorrection:(id)a;
 - (BOOL) isAutoDeleteActive;
 - (void) composeTypologyRadar;
 - (void) setSplit:(BOOL)aanimated:(BOOL)b;
 - (void) finishSplitTransitionWithProgress:(d)a;
 - (void) clearExcessKeyboardMemory;
 - (BOOL) keyboardDrawsOpaque;
 - (BOOL) _shouldMinimizeForHardwareKeyboard;
 - (void) setTextInputChangesIgnored:(BOOL)a;
 - (void) acceptAutocorrectionAndEndComposition;
 - (void) moveCursorLeftShifted:(BOOL)a;
 - (void) moveCursorRightShifted:(BOOL)a;
 - (id) _getCurrentKeyplaneName;
 - (id) _getCurrentKeyboardName;
 - (id) _getLocalizedInputMode;
 - (void) _setAutocorrects:(BOOL)a;
 - (id) _getAutocorrection;
 - (BOOL) _hasCandidates;
 - (q) _positionInCandidateList:(id)a;
 - (BOOL) _needsCandidates;
 - (BOOL) keyboardRecordingEnabled;
 - (id) delegate;
 - (void) removeFromSuperview;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (q) interfaceOrientation;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setInputPoint:({CGPoint=dd})a;
 - (id) markedText;
 - (void) setCandidates:(id)a;
 - (void) setInputManagerState:(id)a;
 - (id) searchStringForMarkedText;
 - (id) textInputTraits;
 - (id) layoutState;
 - (BOOL) userSelectedCurrentCandidate;
 - (BOOL) shouldSkipCandidateSelection;
 - (i) returnKeyType;
 - (void) insertText:(id)a;
 - (void) deleteFromInputWithFlags:(Q)a;
 - (void) deleteFromInput;
 - (void) addInputString:(id)awithFlags:(Q)b;
 - (void) detach;


@end

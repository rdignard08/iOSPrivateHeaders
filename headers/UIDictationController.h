
@protocol _UITouchPhaseChangeDelegate;
@interface UIDictationController : NSObject <_UITouchPhaseChangeDelegate> {

    @"AFDictationConnection" _connection;
    @"AFDictationOptions" _options;
    @"AFPreferences" _preferences;
    @"NSArray" _availableLanguages;
    @"NSTimer" _recordingLimitTimer;
    ^v _callCenterFrameworkFileHandle;
    id _callCenter;
    ^v _facetimeCallFrameworkFileHandle;
    id _facetimeCallManager;
    BOOL _wasDisabledDueToTelephonyActivity;
    @"UIAlertView" _dictationAvailableSoonAlert;
    BOOL _connectionWasAlreadyAliveForStatisticsLogging;
    @"UIDictationStreamingOperations" _streamingOperations;
    @"NSString" _language;
    BOOL _recievingResults;
    BOOL _streamingAnimationActive;
    double _lastAnimationUpdateTimeStamp;
    @? _finalResultsOperation;
    @"CADisplayLink" _streamingAnimationDisplayLink;
    BOOL cancelledByWaitingForLocalResults;
    long long _updatingDocument;
    BOOL _deferredCancellationRequested;
    BOOL dictationStartedFromGesture;
    BOOL _performingStreamingEditingOperation;
    BOOL _discardNextHypothesis;
    BOOL _hasPreheated;
    @"NSMutableArray" _pendingEdits;
    @"NSString" _previousHypothesis;
    @"NSString" _lastHypothesis;
    @"NSString" _targetHypothesis;
    @"UIWindow" _dictationPresenterWindow;
    @"_UIDictationPrivacySheetController" _dictationPrivacySheetController;
    @"UIKeyboardInputMode" _inputModeThatInvokedDictation;
    {_NSRange="location"Q"length"Q} _insertionRange;
}
@property (nonatomic, retain, readwrite) NSMutableArray* pendingEdits;
@property (nonatomic, assign, readwrite) NSNumber* performingStreamingEditingOperation;
@property (nonatomic, copy, readwrite) NSString* previousHypothesis;
@property (nonatomic, copy, readwrite) NSString* lastHypothesis;
@property (nonatomic, copy, readwrite) NSString* targetHypothesis;
@property (nonatomic, assign, readwrite) NSNumber* discardNextHypothesis;
@property (nonatomic, assign, readwrite) NSNumber* insertionRange;
@property (nonatomic, assign, readwrite) NSNumber* hasPreheated;
@property (nonatomic, retain, readwrite) UIWindow* dictationPresenterWindow;
@property (nonatomic, retain, readwrite) _UIDictationPrivacySheetController* dictationPrivacySheetController;
@property (nonatomic, assign, readwrite) NSNumber* dictationStartedFromGesture;
@property (nonatomic, retain, readwrite) UIKeyboardInputMode* inputModeThatInvokedDictation;
 + (id) sharedInstance;
 + (id) activeInstance;
 + (id) serializedDictationPhrases:(id)a;
 + (id) metadataDictionaryForCorrectionIdentifier:(id)a;
 + (id) bestInterpretationForDictationResult:(id)a;
 + (void) keyboardDidSetInputMode;
 + (void) keyboardWillChangeFromDelegate:(id)atoDelegate:(id)b;
 + (BOOL) shouldDeleteBackwardInInputDelegate:(id)a;
 + (BOOL) shouldInsertText:(id)ainInputDelegate:(id)b;
 + (id) singleLineResultForResult:(id)a;
 + (BOOL) fetchCurrentInputModeSupportsDictation;
 + (BOOL) dictationIsFunctional;
 + (int) viewMode;
 + (BOOL) usingServerManualEndpointingThreshold;
 + (double) serverManualEndpointingThreshold;
 + (void) didOneFingerTapInTextView:(id)a;
 + (BOOL) shouldHideCursorForTextView:(id)a;
 + (void) updateLandingView;
 + (BOOL) shouldHideSelectionUIForTextView:(id)a;
 + (void) keyboardDidUpdateOnScreenStatus;
 + (void) poppedLastStreamingOperation;
 + (BOOL) openAssistantFrameworkIfNecessary;
 + (BOOL) setupForOpeningConnections;
 + (BOOL) setupForPhraseSerialization;
 + (void) applicationDidChangeStatusBarFrame;
 + (void) applicationDidBecomeActive;
 + (void) applicationWillResignActive;
 + (void) applicationDidEnterBackgroundNotification;
 + (void) siriPreferencesChanged;
 + (id) serializedInterpretationFromTokens:(id)atransform:(^{__CFString=})branges:(^@)c;
 + (id) serializedInterpretationFromTokens:(id)atransform:(^{__CFString=})b;
 + (BOOL) shouldEnableGestureHandler;
 + (void) disableGestureHandler;
 + (id) activeConnection;
 + (void) enableGestureHandlerIfNecessary;
 + (void) logCorrectionStatisticsForDelegate:(id)a;
 + (BOOL) isTextViewOnStarkScreen:(id)a;
 + (BOOL) usingTypeAndTalk;
 + (id) serializedInterpretationFromTokens:(id)atransform:(^{__CFString=})branges:(^@)coptions:(id)d;
 + (id) serializedDictationPhrasesFromTokenMatrix:(id)afromKeyboard:(BOOL)btransform:(^{__CFString=})c;
 + (id) interpretation:(id)aforPhraseIndex:(unsigned long long)bisShiftLocked:(BOOL)cautocapitalizationType:(long long)d;
 + (id) serializedDictationPhrases:(id)afromKeyboard:(BOOL)btransform:(^{__CFString=})c;
 + (BOOL) starkScreenExists;
 + (id) streamingHypothesisForPhrases:(id)a;
 + (id) serializedInterpretationFromTokens:(id)atransform:(^{__CFString=})bfromKeyboard:(BOOL)coptions:(id)d;
 + (BOOL) takesPhysicalButtonsBegan:(id)aforTextView:(id)b;
 + (BOOL) takesPhysicalButtonsEnded:(id)aforTextView:(id)b;
 + (id) attributedStringForDictationResult:(id)aandCorrectionIdentifier:(id)b;
 + (void) didBeginEditingInTextView:(id)a;
 + (void) logDictationString:(id)a;
 + (id) stringForViewMode:(int)a;
 + (BOOL) isRunning;
 + (id) stringForState:(int)a;

 - (id) connection;
 - (id) _connection;
 - (void) dealloc;
 - (void) proximityStateChanged:(id)a;
 - (BOOL) dictationIsModifyingText;
 - (void) cancelDictation;
 - (void) _touchPhaseChangedForTouch:(id)a;
 - (void) switchToDictationInputModeWithTouch:(id)a;
 - (void) stopDictation;
 - (void) startDictation;
 - (BOOL) supportsInputMode:(id)aerror:(^@)b;
 - (void) startDictationForFileAtURL:(id)aforInputModeIdentifier:(id)b;
 - (void) startConnectionForFileAtURL:(id)aforInputModeIdentifier:(id)b;
 - (id) inputModeThatInvokedDictation;
 - (void) setPerformingStreamingEditingOperation:(BOOL)a;
 - (void) delayedTelephonyCheckingSetup;
 - (BOOL) disabledDueToTelephonyActivity;
 - (BOOL) dictationEnabled;
 - (id) assistantCompatibleLanguageCodeForInputMode:(id)a;
 - (id) connectionForStatisticsLogging;
 - (void) releaseConnectionAfterStatisticsLogging;
 - (void) disableAutorotation;
 - (void) setInputModeThatInvokedDictation:(id)a;
 - (void) reenableAutorotation;
 - (BOOL) dictationStartedFromGesture;
 - (void) startDictationForReason:(long long)a;
 - (void) setDictationStartedFromGesture:(BOOL)a;
 - (void) setDictationInputmode;
 - (void) enableProximity;
 - (id) streamingOperations;
 - (void) releaseConnection;
 - (void) _endEnableDictationPromptAnimated:(BOOL)a;
 - (BOOL) performingStreamingEditingOperation;
 - (void) _restartDictation;
 - (void) setDiscardNextHypothesis:(BOOL)a;
 - (BOOL) _shouldDeleteBackwardInInputDelegate:(id)a;
 - (BOOL) _shouldInsertText:(id)ainInputDelegate:(id)b;
 - (BOOL) wasDisabledDueToTelephonyActivity;
 - (id) supportedDictationLanguages:(@?)a;
 - (id) fieldIdentifierInputDelegate:(id)a;
 - (id) prefixTextForInputDelegate:(id)a;
 - (id) postfixTextForInputDelegate:(id)a;
 - (id) selectedTextForInputDelegate:(id)a;
 - (void) setupConnectionOptions;
 - (void) setupForDictationStartForReason:(long long)a;
 - (void) completeStartConnectionForReason:(long long)a;
 - (void) completeStartConnectionForFileAtURL:(id)aforInputModeIdentifier:(id)b;
 - (void) performIgnoringDocumentChanges:(@?)a;
 - (void) _stopStreamingAnimation;
 - (void) setPendingEdits:(id)a;
 - (void) setLastHypothesis:(id)a;
 - (void) setTargetHypothesis:(id)a;
 - (void) endSessionIfNecessaryForTransitionFromState:(int)atoState:(int)b;
 - (void) _runFinalizeOperation;
 - (void) releaseConnectionAfterDictationRequest;
 - (BOOL) isRecievingResults;
 - (void) setDictationPresenterWindow:(id)a;
 - (void) setDictationPrivacySheetController:(id)a;
 - (void) cancelRecordingLimitTimer;
 - (void) setPreviousHypothesis:(id)a;
 - (void) setInsertionRange:({_NSRange=QQ})a;
 - (id) languageCodeForAssistantLanguageCode:(id)a;
 - (void) setLanguage:(id)a;
 - (void) startRecordingLimitTimer;
 - (void) setupForStreamingDictationStart;
 - (void) startConnectionForReason:(long long)a;
 - (void) _beginEnableDictationPrompt;
 - (id) dictationPresenterWindow;
 - (void) _presentOptInAlert;
 - (id) dictationPrivacySheetController;
 - (void) switchToDictationInputMode;
 - (void) _presentPrivacySheet;
 - (BOOL) isIgnoringDocumentChanges;
 - (id) lastHypothesis;
 - (id) targetHypothesis;
 - (id) _hypothesisRangeFromSelectionRange:(id)ainputDelegate:(id)b;
 - (id) _rangeByExtendingRange:(id)abackward:(long long)bforward:(long long)cinputDelegate:(id)d;
 - (void) _updateFromSelectedTextRange:(id)awithNewHypothesis:(id)b;
 - (void) insertSerializedDictationResult:(id)awithCorrectionIdentifier:(id)b;
 - (void) _setFinalResultHandler:(@?)a;
 - (void) _startStreamingAnimations;
 - (id) dictationPhraseArrayFromDictationResult:(id)a;
 - (BOOL) needsTrailingSpaceForPhrases:(id)a;
 - (BOOL) needsLeadingSpaceForPhrases:(id)a;
 - (^{__CFString=}) resultTransformForLanguageModel:(id)a;
 - (id) resultWithTrailingSpace:(id)a;
 - (void) finishDictationRecognitionWithPhrases:(id)alanguageModel:(id)bcorrectionIdentifier:(id)c;
 - (void) _displayLinkFired:(id)a;
 - (id) pendingEdits;
 - (id) _getBestHypothesisRangeGivenHintRange:(id)ainputDelegate:(id)bhypothesisRange:(^{_NSRange=QQ})cdocumentTextInRange:(^@)d;
 - (BOOL) discardNextHypothesis;
 - (id) previousHypothesis;
 - (void) setupToInsertResultForNewHypothesis:(id)a;
 - (BOOL) hasPreheated;
 - (void) setHasPreheated:(BOOL)a;
 - (float) audioLevel;
 - (void) errorAnimationDidFinish;
 - (void) dismissDictationView:(id)a;
 - (void) cancelDictationForTextStoreChanges;
 - (void) restartDictationForTypeAndTalk;
 - (void) dictationConnection:(id)adidRecognizePhrases:(id)blanguageModel:(id)ccorrectionIdentifier:(id)d;
 - (void) dictationConnection:(id)adidHypothesizePhrases:(id)blanguageModel:(id)c;
 - (void) dictationConnection:(id)adidRecognizeTokens:(id)blanguageModel:(id)c;
 - (void) dictationConnectionSpeechRecordingWillBegin:(id)a;
 - (void) dictationConnectionSpeechRecordingDidBegin:(id)a;
 - (void) dictationConnectionSpeechRecordingDidEnd:(id)a;
 - (void) dictationConnectionSpeechRecordingDidCancel:(id)a;
 - (void) dictationConnection:(id)aspeechRecordingDidFail:(id)b;
 - (void) dictationConnection:(id)aspeechRecognitionDidFail:(id)b;
 - (void) dictationConnnectionDidChangeAvailability:(id)a;
 - (void) preheatIfNecessary;
 - ({_NSRange=QQ}) insertionRange;
 - (id) init;
 - (int) state;
 - (void) setState:(int)a;
 - (id) language;


@end

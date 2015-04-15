
@interface UIKeyboardInputModeController : NSObject {

    @"UIKeyboardInputMode" _currentInputMode;
    @"NSArray" _inputModesWithoutHardwareSupport;
    @"NSArray" _allExtensions;
    @"NSArray" _allowedExtensions;
    BOOL _skipExtensionInputModes;
    BOOL _cacheNeedsRefresh;
    BOOL _shouldRunContinuousDiscovery;
    @"NSArray" keyboardInputModes;
    @"NSArray" keyboardInputModeIdentifiers;
    @"NSArray" enabledInputModes;
    @"NSArray" normalizedInputModes;
    @"NSArray" defaultKeyboardInputModes;
    @"NSArray" defaultRawInputModes;
    @"NSArray" defaultInputModes;
    @"NSArray" defaultNormalizedInputModes;
    @"UIKeyboardInputMode" _lastUsedInputMode;
    @"NSString" _inputModeContextIdentifier;
    @"<UIKeyboardInputModeControllerDelegate>" _delegate;
    @"UIKeyboardInputMode" _nextInputModeToUse;
    @"UIKeyboardInputMode" _currentUsedInputMode;
    id _extensionMatchingContext;
}
@property (atomic, assign, readonly) NSArray* supportedInputModeIdentifiers;
@property (atomic, assign, readonly) NSArray* inputModesWithoutHardwareSupport;
@property (atomic, assign, readonly) NSArray* enabledInputModeIdentifiers;
@property (atomic, assign, readonly) NSArray* normalizedEnabledInputModeIdentifiers;
@property (atomic, assign, readonly) NSArray* enabledInputModeLanguages;
@property (atomic, assign, readonly) NSArray* activeInputModeIdentifiers;
@property (atomic, retain, readwrite) UIKeyboardInputMode* currentInputMode;
@property (nonatomic, assign, readwrite) UIKeyboardInputMode* currentInputModeInPreference;
@property (nonatomic, retain, readwrite) UIKeyboardInputMode* lastUsedInputMode;
@property (nonatomic, assign, readonly) UIKeyboardInputMode* hardwareInputMode;
@property (nonatomic, assign, readonly) UIKeyboardInputMode* currentSystemInputMode;
@property (nonatomic, assign, readonly) UIKeyboardInputMode* currentPublicInputMode;
@property (nonatomic, assign, readonly) NSNumber* containsDictationSupportedInputMode;
@property (nonatomic, copy, readwrite) NSString* inputModeContextIdentifier;
@property (nonatomic, assign, readwrite) NSNumber* shouldRunContinuousDiscovery;
@property (nonatomic, assign, readwrite) NSNumber* delegate;
@property (nonatomic, assign, readonly) NSArray* allowedExtensions;
@property (atomic, retain, readwrite) NSArray* keyboardInputModes;
@property (atomic, retain, readwrite) NSArray* keyboardInputModeIdentifiers;
@property (atomic, retain, readwrite) NSArray* enabledInputModes;
@property (atomic, retain, readwrite) NSArray* normalizedInputModes;
@property (atomic, retain, readwrite) NSArray* defaultKeyboardInputModes;
@property (nonatomic, copy, readwrite) NSArray* defaultRawInputModes;
@property (atomic, retain, readwrite) NSArray* defaultInputModes;
@property (atomic, retain, readwrite) NSArray* defaultNormalizedInputModes;
@property (nonatomic, retain, readwrite) UIKeyboardInputMode* nextInputModeToUse;
@property (nonatomic, retain, readwrite) UIKeyboardInputMode* currentUsedInputMode;
@property (nonatomic, retain, readwrite) NSNumber* extensionMatchingContext;
 + (id) sharedInputModeController;

 - (id) preferredLanguages;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) setShouldRunContinuousDiscovery:(BOOL)a;
 - (id) hardwareInputMode;
 - (id) currentPublicInputMode;
 - (id) currentInputMode;
 - (id) normalizedEnabledInputModeIdentifiers;
 - (id) currentSystemInputMode;
 - (id) activeInputModes;
 - (id) inputModeContextIdentifier;
 - (id) identifiersFromInputModes:(id)a;
 - (id) activeInputModeIdentifiers;
 - (id) currentInputModeInPreference;
 - (id) nextInputModeFromList:(id)awithFilter:(Q)bwithTraits:(id)c;
 - (void) setCurrentInputModeInPreference:(id)a;
 - (void) updateCurrentAndNextInputModes;
 - (id) nextInputModeInPreferenceListForTraits:(id)a;
 - (void) _clearAllExtensionIfNeeded;
 - (void) performWithoutExtensionInputModes:(@?)a;
 - (void) updateLastUsedInputMode:(id)a;
 - (BOOL) identifierIsValidSystemInputMode:(id)a;
 - (void) setInputModeContextIdentifier:(id)a;
 - (void) setCurrentInputMode:(id)a;
 - (id) nextInputModeToUseForTraits:(id)a;
 - (id) extensionInputModes;
 - (void) setKeyboardInputModes:(id)a;
 - (void) setKeyboardInputModeIdentifiers:(id)a;
 - (void) setNormalizedInputModes:(id)a;
 - (void) setDefaultKeyboardInputModes:(id)a;
 - (void) setDefaultRawInputModes:(id)a;
 - (void) setDefaultNormalizedInputModes:(id)a;
 - (void) didEnterBackground:(id)a;
 - (void) willEnterForeground:(id)a;
 - (id) keyboardInputModes;
 - (id) keyboardInputModeIdentifiers;
 - (void) updateCurrentInputMode:(id)a;
 - (id) lastUsedInputMode;
 - (id) _systemInputModePassingTest:(@?)a;
 - (void) _setCurrentInputMode:(id)aforce:(BOOL)b;
 - (id) normalizedInputModes;
 - (id) suggestedInputModesForCurrentLocale:(BOOL)afallbackToDefaultInputModes:(BOOL)b;
 - (id) defaultRawInputModes;
 - (id) defaultNormalizedInputModes;
 - (BOOL) shouldRunContinuousDiscovery;
 - (id) extensionMatchingContext;
 - (void) setExtensionMatchingContext:(id)a;
 - (void) _removeExtensions:(id)a;
 - (BOOL) verifyKeyboardExtensionsWithApp;
 - (id) _MCFilteredExtensionIdentifiers;
 - (id) currentUsedInputMode;
 - (id) nextInputModeToUse;
 - (void) setNextInputModeToUse:(id)a;
 - (void) _setCurrentAndNextInputModePreference;
 - (void) setLastUsedInputMode:(id)a;
 - (void) setCurrentUsedInputMode:(id)a;
 - (void) startDictationConnectionForFileAtURL:(id)aforInputModeIdentifier:(id)b;
 - (id) inputModeWithIdentifier:(id)a;
 - (BOOL) containsDictationSupportedInputMode;
 - (BOOL) currentLocaleRequiresExtendedSetup;
 - (id) defaultEnabledInputModesForCurrentLocale:(BOOL)a;
 - (id) suggestedInputModesForCurrentLocale;
 - (id) suggestedInputModesForPreferredLanguages;
 - (void) _beginContinuousDiscoveryIfNeeded;
 - (BOOL) deviceStateIsLocked;
 - (void) switchToCurrentSystemInputMode;
 - (void) performWithForcedExtensionInputModes:(@?)a;
 - (void) startConnectionForFileAtURL:(id)aforInputModeIdentifier:(id)b;
 - (id) defaultKeyboardInputModes;
 - (id) allowedExtensions;
 - (id) enabledInputModeIdentifiers:(BOOL)a;
 - (id) inputModesWithoutHardwareSupport;
 - (id) enabledInputModeLanguages;
 - (id) init;
 - (id) delegate;
 - (id) supportedInputModeIdentifiers;
 - (id) enabledInputModeIdentifiers;
 - (void) setEnabledInputModes:(id)a;
 - (void) setDefaultInputModes:(id)a;
 - (id) defaultInputModes;
 - (id) enabledInputModes;


@end

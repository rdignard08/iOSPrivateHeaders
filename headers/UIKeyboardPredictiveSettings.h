
@interface UIKeyboardPredictiveSettings : _UISettings {

    i _lastVolume;
    BOOL _nextPage;
    @"NSString" _currentInputMode;
    BOOL _currentInputModeEnablePrediction;
    BOOL _didShowHUD;
    BOOL _alwaysShowTypedText;
    i _minLetters;
}
 + (id) sharedInstance;
 + (void) loadSettings;
 + (void) hideViaNotification;

 - (void) setValue:(id)aforKey:(id)b;
 - (void) pressRingerButton;
 - (id) initWithDefaultValues;
 - (void) hide;
 - (id) _sharedHUD;
 - (BOOL) _isShowingHUD;
 - (void) setMinLetters:(i)a;
 - (i) minLetters;
 - (BOOL) alwaysShowTypedText;
 - (i) messageCount;
 - (void) setAlwaysShowTypedText:(BOOL)a;
 - (void) setMessageCount:(i)a;
 - (void) saveSettings;
 - (void) next;
 - (void) show;
 - (void) show:(BOOL)a;
 - (id) settingsHUDConfiguration;
 - (void) previous;
 - (void) cancel;
 - (id) valueForKey:(id)a;


@end

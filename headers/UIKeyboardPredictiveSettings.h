
@interface UIKeyboardPredictiveSettings : _UISettings {

    int _lastVolume;
    BOOL _nextPage;
    NSString* _currentInputMode;
    BOOL _currentInputModeEnablePrediction;
    BOOL _didShowHUD;
    BOOL _alwaysShowTypedText;
    int _minLetters;
}
 + (id) sharedInstance;
 + (void) loadSettings;
 + (void) hideViaNotification;

 - (void) setValue:(id)a forKey:(id)b ;
 - (void) pressRingerButton;
 - (id) initWithDefaultValues;
 - (void) hide;
 - (id) _sharedHUD;
 - (BOOL) _isShowingHUD;
 - (void) setMinLetters:(int)a ;
 - (int) minLetters;
 - (BOOL) alwaysShowTypedText;
 - (int) messageCount;
 - (void) setAlwaysShowTypedText:(BOOL)a ;
 - (void) setMessageCount:(int)a ;
 - (void) saveSettings;
 - (void) next;
 - (void) show;
 - (void) show:(BOOL)a ;
 - (id) settingsHUDConfiguration;
 - (void) previous;
 - (void) cancel;
 - (id) valueForKey:(id)a ;


@end

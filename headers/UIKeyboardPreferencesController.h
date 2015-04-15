
@interface UIKeyboardPreferencesController : NSObject {

}
@property (atomic, assign, readwrite) NSNumber* handBias;
 + (void) handleSpecificHardwareKeyboard;
 + (id) sharedPreferencesController;

 - (BOOL) boolForKey:(int)a ;
 - (void) dealloc;
 - (void) setValue:(id)a forKey:(int)b ;
 - (double) rivenSizeFactor:(double)a ;
 - (void) saveInputModes:(id)a ;
 - (void) setLanguageAwareInputModeLastUsed:(id)a ;
 - (BOOL) spaceConfirmationEnabled;
 - (BOOL) typologyEnabled;
 - (long long) handBias;
 - (void) setHandBias:(long long)a ;
 - (BOOL) isKeyLockedDown:(int)a ;
 - (void) preferencesControllerChanged:(id)a ;
 - (BOOL) costlyCapture;
 - (void) setInputModeLastUsed:(id)a ;
 - (id) init;
 - (id) valueForKey:(int)a ;
 - (void) releaseDontSynchronizePreferences;
 - (void) synchronizePreferences;
 - (void) touchSynchronizePreferencesTimer;


@end


@interface UIKeyboardPreferencesController : NSObject {

}
@property (atomic, assign, readwrite) NSNumber* handBias;
 + (void) handleSpecificHardwareKeyboard;
 + (id) sharedPreferencesController;

 - (BOOL) boolForKey:(i)a;
 - (void) dealloc;
 - (void) setValue:(id)aforKey:(i)b;
 - (d) rivenSizeFactor:(d)a;
 - (void) saveInputModes:(id)a;
 - (void) setLanguageAwareInputModeLastUsed:(id)a;
 - (BOOL) spaceConfirmationEnabled;
 - (BOOL) typologyEnabled;
 - (q) handBias;
 - (void) setHandBias:(q)a;
 - (BOOL) isKeyLockedDown:(i)a;
 - (void) preferencesControllerChanged:(id)a;
 - (BOOL) costlyCapture;
 - (void) setInputModeLastUsed:(id)a;
 - (id) init;
 - (id) valueForKey:(i)a;
 - (void) releaseDontSynchronizePreferences;
 - (void) synchronizePreferences;
 - (void) touchSynchronizePreferencesTimer;


@end

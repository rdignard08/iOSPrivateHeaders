
@interface TIPreferencesController : NSObject {

    NSTimer _synchronizePreferencesTimer;
    BOOL dontSynchronizePreferences;
    BOOL isInternalInstall;
}
@property (nonatomic, assign, readwrite) NSNumber* dontSynchronizePreferences;
@property (nonatomic, assign, readwrite) NSNumber* isInternalInstall;
 + (id) sharedPreferencesController;

 - (BOOL) boolForKey:(int)a;
 - (void) dealloc;
 - (void) setValue:(id)aforKey:(int)b;
 - (BOOL) isKeyLockedDown:(int)a;
 - (id) init;
 - (id) valueForKey:(int)a;
 - (BOOL) isInternalInstall;
 - (void) setAutocorrectionEnabled:(BOOL)a;
 - (BOOL) dontSynchronizePreferences;
 - (^{?=@@BBQi}) domains;
 - (void) setIsInternalInstall:(BOOL)a;
 - (void) managedKeyboardSettingDidChange:(id)a;
 - (^{?=@@i@@i}) preferences;
 - (id) valueForManagedKey:(int)a;
 - (id) defaultForKey:(int)a;
 - (^{?=@@BBQi}) domainForType:(int)a;
 - (void) setDontSynchronizePreferences:(BOOL)a;
 - (void) clearSynchronizePreferencesTimer;
 - (void) releaseDontSynchronizePreferences;
 - (void) synchronizePreferences;
 - (void) setValue:(id)aforManagedKey:(int)b;
 - (void) touchSynchronizePreferencesTimer;
 - (void) setPredictionEnabled:(BOOL)a;
 - (void) setCheckSpellingEnabled:(BOOL)a;
 - (void) preferencesChangedCallback:(id)a;


@end

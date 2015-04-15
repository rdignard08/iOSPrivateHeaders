
@interface TIPreferencesController : NSObject {

    @"NSTimer" _synchronizePreferencesTimer;
    BOOL dontSynchronizePreferences;
    BOOL isInternalInstall;
}
@property (nonatomic, assign, readwrite) NSNumber* dontSynchronizePreferences;
@property (nonatomic, assign, readwrite) NSNumber* isInternalInstall;
 + (id) sharedPreferencesController;

 - (BOOL) boolForKey:(i)a;
 - (void) dealloc;
 - (void) setValue:(id)aforKey:(i)b;
 - (BOOL) isKeyLockedDown:(i)a;
 - (id) init;
 - (id) valueForKey:(i)a;
 - (BOOL) isInternalInstall;
 - (void) setAutocorrectionEnabled:(BOOL)a;
 - (BOOL) dontSynchronizePreferences;
 - (^{?=@@BBQi}) domains;
 - (void) setIsInternalInstall:(BOOL)a;
 - (void) managedKeyboardSettingDidChange:(id)a;
 - (^{?=@@i@@i}) preferences;
 - (id) valueForManagedKey:(i)a;
 - (id) defaultForKey:(i)a;
 - (^{?=@@BBQi}) domainForType:(i)a;
 - (void) setDontSynchronizePreferences:(BOOL)a;
 - (void) clearSynchronizePreferencesTimer;
 - (void) releaseDontSynchronizePreferences;
 - (void) synchronizePreferences;
 - (void) setValue:(id)aforManagedKey:(i)b;
 - (void) touchSynchronizePreferencesTimer;
 - (void) setPredictionEnabled:(BOOL)a;
 - (void) setCheckSpellingEnabled:(BOOL)a;
 - (void) preferencesChangedCallback:(id)a;


@end

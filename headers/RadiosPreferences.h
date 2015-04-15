
@interface RadiosPreferences : NSObject {

    ^{__SCPreferences=} _prefs;
    int _applySkipCount;
    <RadiosPreferencesDelegate>* _delegate;
    BOOL _isCachedAirplaneModeValid;
    BOOL _cachedAirplaneMode;
    NSObject<OS_dispatch_queue>* _dispatchQueue;
    BOOL notifyForExternalChangeOnly;
}
@property (nonatomic, assign, readwrite) NSNumber* airplaneMode;
@property (nonatomic, assign, readwrite) NSNumber* delegate;
@property (nonatomic, assign, readwrite) NSNumber* notifyForExternalChangeOnly;
 + (BOOL) shouldMirrorAirplaneMode;

 - (id) initWithQueue:(id)a;
 - (^v) getValueForKey:(id)a;
 - (Vv) release;
 - (void) dealloc;
 - (void) setValue:(^v)aforKey:(id)b;
 - (void) synchronize;
 - (void) setDelegate:(id)a;
 - (id) init;
 - (id) delegate;
 - (void) notifyTarget:(unsigned int)a;
 - (void) initializeSCPrefs:(id)a;
 - (void) setAirplaneModeWithoutMirroring:(BOOL)a;
 - (BOOL) notifyForExternalChangeOnly;
 - (void) refresh;
 - (BOOL) airplaneMode;
 - (void) setAirplaneMode:(BOOL)a;
 - (void) setCallback:(^?)awithContext:(^{?=q^v^?^?^?})b;
 - (void) setNotifyForExternalChangeOnly:(BOOL)a;


@end


@interface CoreUI : NSObject {

}
 + (BOOL) defaultExistsForKey:(id)a;
 + (id) stringForDefaultsKey:(id)a;
 + (void) _determineCompatibilityMode;
 + (void) changeToLook:(^{_themelook=q*})a;
 + (^{_themelook=q*}) currentSystemThemeLook;
 + (void) _setCurrentSystemThemeLook:(^{_themelook=q*})a;
 + (void) _updateMenuBarDrawingStyleForLook:(^{_themelook=q*})a;
 + (BOOL) _isCurrentLook:(^{_themelook=q*})a;
 + (long long) lookCongruencyForObject:(id)a;
 + (void) _invalidateVisibleWindows;
 + (id) _themeLookDelegate;
 + (void) _setThemeLookDelegate:(id)a;
 + (BOOL) _hasDarkMenuBarForLook:(^{_themelook=q*})a;
 + (void) setValue:(id)aforDefaultsKey:(id)b;
 + (void) _changeToLookGradation:(long long)aforceRedraw:(BOOL)b;
 + (void) changeToLookGradation:(long long)a;
 + (long long) currentLookGradation;
 + (long long) maximumLookGradation;
 + (id) defaultsDomainName;
 + (long long) integerForDefaultsKey:(id)a;
 + (void) _setCustomLookDelegate:(id)a;
 + (BOOL) boolForDefaultsKey:(id)a;
 + (void) setBool:(BOOL)aforDefaultsKey:(id)b;
 + (BOOL) _isInIBCocoaSimulator;
 + (void) install;
 + (id) _customLookDelegate;
 + (void) installForCustomLook:(id)a;
 + (id) versionCreditsString;
 + (BOOL) isSharedCacheSizeTestEnabled;



@end

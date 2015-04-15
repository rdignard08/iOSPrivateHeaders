
@interface NSUserDefaults : NSObject {

    id _private;
    [4^v] _reserved;
}
 + (id) _webkit_preferredLanguageCode;
 + (void) _ensureAndLockPreferredLanguageLock;
 + (void) _web_addDefaultsChangeObserver;
 + (void) _web_defaultsDidChange;
 + (id) _web_preferredLanguageCode;
 + (id) standardUserDefaults;
 + (void) setStandardUserDefaults:(id)a;
 + (void) resetStandardUserDefaults;

 - (double) doubleForKey:(id)a;
 - (BOOL) boolForKey:(id)a;
 - (id) dictionaryRepresentation;
 - (void) setObject:(id)aforKey:(id)binDomain:(id)c;
 - (id) initWithSuiteName:(id)a;
 - (id) _initWithSuiteName:(id)acontainer:(id)b;
 - (id) initWithUser:(id)a;
 - (void) setPersistentDomain:(id)aforName:(id)b;
 - (id) objectForKey:(id)ainDomain:(id)b;
 - (void) removeObjectForKey:(id)ainDomain:(id)b;
 - (id) dataForKey:(id)a;
 - (id) stringArrayForKey:(id)a;
 - (long long) integerForKey:(id)a;
 - (long long) longForKey:(id)a;
 - (id) URLForKey:(id)a;
 - (void) setLong:(long long)aforKey:(id)b;
 - (void) setDouble:(double)aforKey:(id)b;
 - (void) setURL:(id)aforKey:(id)b;
 - (id) searchList;
 - (void) setSearchList:(id)a;
 - (void) removeSuiteNamed:(id)a;
 - (id) volatileDomainNames;
 - (id) volatileDomainForName:(id)a;
 - (void) setVolatileDomain:(id)aforName:(id)b;
 - (void) removeVolatileDomainForName:(id)a;
 - (id) persistentDomainNames;
 - (void) removePersistentDomainForName:(id)a;
 - (BOOL) objectIsForcedForKey:(id)a;
 - (BOOL) objectIsForcedForKey:(id)ainDomain:(id)b;
 - (Vv) release;
 - (void) dealloc;
 - (BOOL) synchronize;
 - (id) objectForKey:(id)a;
 - (void) removeObjectForKey:(id)a;
 - (void) setObject:(id)aforKey:(id)b;
 - (void) addSuiteNamed:(id)a;
 - (id) dictionaryForKey:(id)a;
 - (id) init;
 - (id) stringForKey:(id)a;
 - (float) floatForKey:(id)a;
 - (id) persistentDomainForName:(id)a;
 - (void) registerDefaults:(id)a;
 - (void) setInteger:(long long)aforKey:(id)b;
 - (void) setFloat:(float)aforKey:(id)b;
 - (void) setBool:(BOOL)aforKey:(id)b;
 - (id) arrayForKey:(id)a;
 - (void) setValue:(id)aforKey:(id)b;
 - (id) valueForKey:(id)a;


@end

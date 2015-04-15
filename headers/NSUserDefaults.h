
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

 - (double) doubleForKey:(id)a ;
 - (BOOL) boolForKey:(id)a ;
 - (id) dictionaryRepresentation;
 - (void) setObject:(id)a forKey:(id)b inDomain:(id)c ;
 - (id) initWithSuiteName:(id)a ;
 - (id) _initWithSuiteName:(id)a container:(id)b ;
 - (id) initWithUser:(id)a ;
 - (void) setPersistentDomain:(id)a forName:(id)b ;
 - (id) objectForKey:(id)a inDomain:(id)b ;
 - (void) removeObjectForKey:(id)a inDomain:(id)b ;
 - (id) dataForKey:(id)a ;
 - (id) stringArrayForKey:(id)a ;
 - (long long) integerForKey:(id)a ;
 - (long long) longForKey:(id)a ;
 - (id) URLForKey:(id)a ;
 - (void) setLong:(long long)a forKey:(id)b ;
 - (void) setDouble:(double)a forKey:(id)b ;
 - (void) setURL:(id)a forKey:(id)b ;
 - (id) searchList;
 - (void) setSearchList:(id)a ;
 - (void) removeSuiteNamed:(id)a ;
 - (id) volatileDomainNames;
 - (id) volatileDomainForName:(id)a ;
 - (void) setVolatileDomain:(id)a forName:(id)b ;
 - (void) removeVolatileDomainForName:(id)a ;
 - (id) persistentDomainNames;
 - (void) removePersistentDomainForName:(id)a ;
 - (BOOL) objectIsForcedForKey:(id)a ;
 - (BOOL) objectIsForcedForKey:(id)a inDomain:(id)b ;
 - (Vv) release;
 - (void) dealloc;
 - (BOOL) synchronize;
 - (id) objectForKey:(id)a ;
 - (void) removeObjectForKey:(id)a ;
 - (void) setObject:(id)a forKey:(id)b ;
 - (void) addSuiteNamed:(id)a ;
 - (id) dictionaryForKey:(id)a ;
 - (id) init;
 - (id) stringForKey:(id)a ;
 - (float) floatForKey:(id)a ;
 - (id) persistentDomainForName:(id)a ;
 - (void) registerDefaults:(id)a ;
 - (void) setInteger:(long long)a forKey:(id)b ;
 - (void) setFloat:(float)a forKey:(id)b ;
 - (void) setBool:(BOOL)a forKey:(id)b ;
 - (id) arrayForKey:(id)a ;
 - (void) setValue:(id)a forKey:(id)b ;
 - (id) valueForKey:(id)a ;


@end

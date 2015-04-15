
@interface _UIGlobalUserDefaults : NSUserDefaults {

    <UIFoundationGlobalUserDefaultsHelper>* _userDefaultsHelper;
    NSMutableDictionary* _userDefaultsDictionary;
    unsigned long long _backgroundTaskIdentifier;
}

 - (void) dealloc;
 - (BOOL) synchronize;
 - (id) objectForKey:(id)a;
 - (void) removeObjectForKey:(id)a;
 - (void) setObject:(id)aforKey:(id)b;
 - (id) init;
 - (void) setBackgroundTaskIdentifier:(unsigned long long)a;
 - (void) _synchronizeIfNeeded;
 - (void) setUserDefaultsHelper:(id)a;
 - (void) setUserDefaultsDictionary:(id)a;
 - (id) userDefaultsDictionary;
 - (void) loadDefaultsDictionaryIfNeeded;
 - (void) _scheduleSynchronization;
 - (id) _userDefaultsHelperCreateIfNeeded;
 - (void) loadDefaultsDictionary;
 - (id) userDefaultsHelper;
 - (unsigned long long) backgroundTaskIdentifier;


@end

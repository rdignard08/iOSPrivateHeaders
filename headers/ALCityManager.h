
@interface ALCityManager : NSObject {

    ^{sqlite3=} _db;
    ^{sqlite3=} _localizedDb;
    CPSearchMatcher* _citySearchMatcher;
}
@property (atomic, assign, readonly) CPSearchMatcher* citySearchMatcher;
 + (id) newCitiesByIdentifierMap:(id)a;
 + (id) _localeDictionaryFromSQLRow:(^*)a;
 + (id) sharedManager;
 + (^{__CFArray=}) legacyCityForCity:(id)a;

 - (void) dealloc;
 - (id) init;
 - (id) citiesMatchingQualifier:(id)a ;
 - (void) localizeCities:(id)a ;
 - (id) citiesMatchingName:(id)a localized:(BOOL)b ;
 - (id) citiesWithIdentifiers:(id)a ;
 - (id) cityForClassicIdentifier:(id)a ;
 - (id) citiesMatchingName:(id)a ;
 - (id) localeWithCode:(id)a ;
 - (id) defaultCitiesForLocaleCode:(id)a options:(int)b ;
 - (id) _defaultCityForTimeZone:(id)a localeCode:(id)b ;
 - (id) _cityForTimeZone:(id)a localeCode:(id)b ;
 - (id) citiesWithTimeZone:(id)a ;
 - (id) allCities;
 - (id) bestCityForLegacyCity:(^{__CFArray=})a ;
 - (id) allLocales;
 - (id) defaultCitiesForLocaleCode:(id)a ;
 - (id) defaultCitiesShownInWorldClock;
 - (id) defaultCityForTimeZone:(id)a ;
 - (id) defaultCityForTimeZone:(id)a localeCode:(id)b ;
 - (id) citySearchMatcher;


@end

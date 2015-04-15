
@protocol NSCopying, NSSecureCoding;
@interface NSLocale : NSObject <NSCopying, NSSecureCoding> {

}
 + (id) localeForBundleLanguage:(id)a;
 + (id) mostPreferredLanguageOf:(id)awithPreferredLanguages:(id)bforUsage:(unsigned long long)coptions:(unsigned long long)d;
 + (void) setPreferredLanguages:(id)a;
 + (void) registerPreferredLanguage:(id)ausage:(unsigned long long)bconfidence:(float)c;
 + (id) mostPreferredLanguageOf:(id)aforUsage:(unsigned long long)boptions:(unsigned long long)c;
 + (id) systemLanguages;
 + (id) autoupdatingCurrentLocale;
 + (BOOL) supportsSecureCoding;
 + (id) preferredLanguages;
 + (id) componentsFromLocaleIdentifier:(id)a;
 + (id) localeIdentifierFromComponents:(id)a;
 + (id) canonicalLanguageIdentifierFromString:(id)a;
 + (id) systemLocale;
 + (id) localeWithLocaleIdentifier:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) currentLocale;
 + (id) availableLocaleIdentifiers;
 + (id) ISOCountryCodes;
 + (id) ISOCurrencyCodes;
 + (id) commonISOCurrencyCodes;
 + (id) localeIdentifierFromWindowsLocaleCode:(unsigned int)a;
 + (unsigned int) windowsLocaleCodeFromLocaleIdentifier:(id)a;
 + (unsigned long long) lineDirectionForLanguage:(id)a;
 + (id) internetServicesRegion;
 + (unsigned long long) characterDirectionForLanguage:(id)a;
 + (id) canonicalLocaleIdentifierFromString:(id)a;
 + (id) ISOLanguageCodes;

 - (Class) classForCoder;
 - (id) debugDescription;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) objectForKey:(id)a;
 - (unsigned char) _nullLocale;
 - (void) _setNullLocale;
 - (id) _prefs;
 - (id) localeIdentifier;
 - (id) _copyDisplayNameForKey:(id)avalue:(id)b;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (unsigned long long) _cfTypeID;
 - (id) displayNameForKey:(id)avalue:(id)b;
 - (id) initWithLocaleIdentifier:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) identifier;


@end


@protocol NSCopying, NSSecureCoding;
@interface NSLocale : NSObject <NSCopying, NSSecureCoding> {

}
 + (id) localeForBundleLanguage:(id)a;
 + (id) mostPreferredLanguageOf:(id)awithPreferredLanguages:(id)bforUsage:(Q)coptions:(Q)d;
 + (void) setPreferredLanguages:(id)a;
 + (void) registerPreferredLanguage:(id)ausage:(Q)bconfidence:(f)c;
 + (id) mostPreferredLanguageOf:(id)aforUsage:(Q)boptions:(Q)c;
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
 + (id) localeIdentifierFromWindowsLocaleCode:(I)a;
 + (I) windowsLocaleCodeFromLocaleIdentifier:(id)a;
 + (Q) lineDirectionForLanguage:(id)a;
 + (id) internetServicesRegion;
 + (Q) characterDirectionForLanguage:(id)a;
 + (id) canonicalLocaleIdentifierFromString:(id)a;
 + (id) ISOLanguageCodes;

 - (Class) classForCoder;
 - (id) debugDescription;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) objectForKey:(id)a;
 - (C) _nullLocale;
 - (void) _setNullLocale;
 - (id) _prefs;
 - (id) localeIdentifier;
 - (id) _copyDisplayNameForKey:(id)avalue:(id)b;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (Q) _cfTypeID;
 - (id) displayNameForKey:(id)avalue:(id)b;
 - (id) initWithLocaleIdentifier:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) identifier;


@end

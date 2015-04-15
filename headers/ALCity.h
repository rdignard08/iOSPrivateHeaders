
@interface ALCity : NSObject {

    int _identifier;
    @"NSString" _localeCode;
    @"NSString" _timeZone;
    float _longitude;
    float _latitude;
    @"NSString" _yahooCode;
    @"NSString" _name;
    @"NSString" _unlocalizedName;
    @"NSString" _countryName;
    @"NSString" _unlocalizedCountryName;
    @"NSString" _countryOverride;
    @"NSString" _unlocalizedCountryOverride;
    @"NSString" _identifierForCPCity;
    BOOL _localizationAttempted;
}
@property (nonatomic, assign, readonly) NSString* classicIdentifier;
@property (nonatomic, assign, readonly) NSDictionary* properties;
@property (nonatomic, assign, readwrite) NSNumber* identifier;
@property (nonatomic, retain, readwrite) NSString* localeCode;
@property (nonatomic, retain, readwrite) NSString* timeZone;
@property (nonatomic, assign, readwrite) NSNumber* longitude;
@property (nonatomic, assign, readwrite) NSNumber* latitude;
@property (nonatomic, retain, readwrite) NSString* yahooCode;
@property (nonatomic, retain, readwrite) NSString* name;
@property (nonatomic, retain, readwrite) NSString* unlocalizedName;
@property (nonatomic, retain, readwrite) NSString* countryName;
@property (nonatomic, retain, readwrite) NSString* unlocalizedCountryName;
@property (nonatomic, retain, readwrite) NSString* countryOverride;
@property (nonatomic, retain, readwrite) NSString* unlocalizedCountryOverride;

 - (id) description;
 - (void) dealloc;
 - (id) name;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) setTimeZone:(id)a;
 - (id) timeZone;
 - (id) init;
 - (id) initWithProperties:(id)a;
 - (id) properties;
 - (void) setName:(id)a;
 - (int) identifier;
 - (void) setIdentifier:(int)a;
 - (id) localeCode;
 - (void) setCountryName:(id)a;
 - (void) setCountryOverride:(id)a;
 - (id) countryName;
 - (id) unlocalizedName;
 - (id) unlocalizedCountryName;
 - (float) latitude;
 - (float) longitude;
 - (id) initWithSQLRow:(^*)a;
 - (id) countryOverride;
 - (id) displayNameIncludingCountry:(BOOL)awithFormat:(id)b;
 - (void) ensureLocalized;
 - (id) unlocalizedCountryOverride;
 - (id) displayNameIncludingCountry:(BOOL)a;
 - (id) classicIdentifier;
 - (void) setUnlocalizedName:(id)a;
 - (void) setUnlocalizedCountryName:(id)a;
 - (void) setLocaleCode:(id)a;
 - (void) setLongitude:(float)a;
 - (void) setLatitude:(float)a;
 - (id) yahooCode;
 - (void) setYahooCode:(id)a;
 - (void) setUnlocalizedCountryOverride:(id)a;


@end

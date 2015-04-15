
@protocol NSCopying, NSSecureCoding;
@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding> {

}
@property (atomic, copy, readonly) NSString* name;
@property (atomic, copy, readonly) NSData* data;
 + (BOOL) supportsSecureCoding;
 + (id) timeZoneWithAbbreviation:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) timeZoneForSecondsFromGMT:(long long)a;
 + (id) systemTimeZone;
 + (id) abbreviationDictionary;
 + (void) resetSystemTimeZone;
 + (id) defaultTimeZone;
 + (void) setDefaultTimeZone:(id)a;
 + (id) localTimeZone;
 + (id) knownTimeZoneNames;
 + (void) setAbbreviationDictionary:(id)a;
 + (id) timeZoneDataVersion;
 + (id) timeZoneWithName:(id)adata:(id)b;
 + (id) timeZoneWithName:(id)a;

 - (id) replacementObjectForPortCoder:(id)a;
 - (Class) classForCoder;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (id) data;
 - (id) name;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (unsigned long long) _cfTypeID;
 - (BOOL) isNSTimeZone__;
 - (double) daylightSavingTimeOffsetForDate:(id)a;
 - (long long) secondsFromGMTForDate:(id)a;
 - (id) abbreviationForDate:(id)a;
 - (BOOL) isDaylightSavingTimeForDate:(id)a;
 - (id) nextDaylightSavingTimeTransitionAfterDate:(id)a;
 - (id) localizedName:(long long)alocale:(id)b;
 - (id) initWithName:(id)adata:(id)b;
 - (id) initWithName:(id)a;
 - (BOOL) isEqualToTimeZone:(id)a;
 - (id) abbreviation;
 - (long long) secondsFromGMT;
 - (BOOL) isDaylightSavingTime;
 - (double) daylightSavingTimeOffset;
 - (id) nextDaylightSavingTimeTransition;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end

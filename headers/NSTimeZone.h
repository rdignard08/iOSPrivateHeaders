
@protocol NSCopying, NSSecureCoding;
@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding> {

}
@property (atomic, copy, readonly) NSString* name;
@property (atomic, copy, readonly) NSData* data;
 + (BOOL) supportsSecureCoding;
 + (id) timeZoneWithAbbreviation:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) timeZoneForSecondsFromGMT:(q)a;
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
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (Q) _cfTypeID;
 - (BOOL) isNSTimeZone__;
 - (d) daylightSavingTimeOffsetForDate:(id)a;
 - (q) secondsFromGMTForDate:(id)a;
 - (id) abbreviationForDate:(id)a;
 - (BOOL) isDaylightSavingTimeForDate:(id)a;
 - (id) nextDaylightSavingTimeTransitionAfterDate:(id)a;
 - (id) localizedName:(q)alocale:(id)b;
 - (id) initWithName:(id)adata:(id)b;
 - (id) initWithName:(id)a;
 - (BOOL) isEqualToTimeZone:(id)a;
 - (id) abbreviation;
 - (q) secondsFromGMT;
 - (BOOL) isDaylightSavingTime;
 - (d) daylightSavingTimeOffset;
 - (id) nextDaylightSavingTimeTransition;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end

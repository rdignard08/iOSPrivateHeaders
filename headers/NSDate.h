
@protocol NSCopying, NSSecureCoding;
@interface NSDate : NSObject <NSCopying, NSSecureCoding> {

}
@property (atomic, assign, readonly) NSNumber* timeIntervalSinceReferenceDate;
 + (i) daysSince1970;
 + (id) dateForDaysSince1970:(i)a;
 + (id) dateWithNaturalLanguageString:(id)adate:(id)blocale:(id)c;
 + (id) dateWithNaturalLanguageString:(id)a;
 + (id) dateWithNaturalLanguageString:(id)alocale:(id)b;
 + (BOOL) supportsSecureCoding;
 + (id) distantFuture;
 + (id) distantPast;
 + (id) dateWithTimeIntervalSinceNow:(d)a;
 + (id) dateWithTimeInterval:(d)asinceDate:(id)b;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) dateWithTimeIntervalSinceReferenceDate:(d)a;
 + (d) timeIntervalSinceReferenceDate;
 + (id) date;
 + (id) dateWithDate:(id)a;
 + (id) dateWithString:(id)a;
 + (id) dateWithTimeIntervalSince1970:(d)a;

 - (id) ml_stringValueForSQL;
 - (void) ml_bindToSQLiteStatement:(^{sqlite3_stmt=})aatPosition:(i)b;
 - (id) initWithXPCEncoding:(id)a;
 - (id) copyXPCEncoding;
 - (BOOL) isAfterDate:(id)a;
 - (BOOL) isBeforeDate:(id)a;
 - (i) daysSince1970;
 - (id) replacementObjectForPortCoder:(id)a;
 - (q) _web_compareDay:(id)a;
 - (id) _web_RFC1123DateString;
 - (BOOL) _web_isToday;
 - (Class) classForCoder;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) dateWithCalendarFormat:(id)atimeZone:(id)b;
 - (id) descriptionWithCalendarFormat:(id)atimeZone:(id)blocale:(id)c;
 - (d) timeIntervalSinceNow;
 - (id) initWithTimeIntervalSinceNow:(d)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (q) compare:(id)a;
 - (id) descriptionWithLocale:(id)a;
 - (Q) _cfTypeID;
 - (d) timeIntervalSinceReferenceDate;
 - (id) initWithTimeIntervalSinceReferenceDate:(d)a;
 - (BOOL) isNSDate__;
 - (BOOL) isEqualToDate:(id)a;
 - (id) initWithString:(id)a;
 - (id) dateByAddingTimeInterval:(d)a;
 - (d) timeIntervalSinceDate:(id)a;
 - (d) timeIntervalSince1970;
 - (id) initWithTimeIntervalSince1970:(d)a;
 - (id) initWithDate:(id)a;
 - (id) addTimeInterval:(d)a;
 - (BOOL) isInToday;
 - (BOOL) isInTomorrow;
 - (BOOL) isInYesterday;
 - (BOOL) isInSameDayAsDate:(id)a;
 - (BOOL) isEqual:(id)atoUnitGranularity:(Q)b;
 - (q) compare:(id)atoUnitGranularity:(Q)b;
 - (id) initWithTimeInterval:(d)asinceDate:(id)b;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) laterDate:(id)a;
 - (id) earlierDate:(id)a;


@end

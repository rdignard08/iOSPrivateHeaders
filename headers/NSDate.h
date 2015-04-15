
@protocol NSCopying, NSSecureCoding;
@interface NSDate : NSObject <NSCopying, NSSecureCoding> {

}
@property (atomic, assign, readonly) NSNumber* timeIntervalSinceReferenceDate;
 + (int) daysSince1970;
 + (id) dateForDaysSince1970:(int)a;
 + (id) dateWithNaturalLanguageString:(id)adate:(id)blocale:(id)c;
 + (id) dateWithNaturalLanguageString:(id)a;
 + (id) dateWithNaturalLanguageString:(id)alocale:(id)b;
 + (BOOL) supportsSecureCoding;
 + (id) distantFuture;
 + (id) distantPast;
 + (id) dateWithTimeIntervalSinceNow:(double)a;
 + (id) dateWithTimeInterval:(double)asinceDate:(id)b;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) dateWithTimeIntervalSinceReferenceDate:(double)a;
 + (double) timeIntervalSinceReferenceDate;
 + (id) date;
 + (id) dateWithDate:(id)a;
 + (id) dateWithString:(id)a;
 + (id) dateWithTimeIntervalSince1970:(double)a;

 - (id) ml_stringValueForSQL;
 - (void) ml_bindToSQLiteStatement:(^{sqlite3_stmt=})a atPosition:(int)b ;
 - (id) initWithXPCEncoding:(id)a ;
 - (id) copyXPCEncoding;
 - (BOOL) isAfterDate:(id)a ;
 - (BOOL) isBeforeDate:(id)a ;
 - (int) daysSince1970;
 - (id) replacementObjectForPortCoder:(id)a ;
 - (long long) _web_compareDay:(id)a ;
 - (id) _web_RFC1123DateString;
 - (BOOL) _web_isToday;
 - (Class) classForCoder;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) dateWithCalendarFormat:(id)a timeZone:(id)b ;
 - (id) descriptionWithCalendarFormat:(id)a timeZone:(id)b locale:(id)c ;
 - (double) timeIntervalSinceNow;
 - (id) initWithTimeIntervalSinceNow:(double)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (long long) compare:(id)a ;
 - (id) descriptionWithLocale:(id)a ;
 - (unsigned long long) _cfTypeID;
 - (double) timeIntervalSinceReferenceDate;
 - (id) initWithTimeIntervalSinceReferenceDate:(double)a ;
 - (BOOL) isNSDate__;
 - (BOOL) isEqualToDate:(id)a ;
 - (id) initWithString:(id)a ;
 - (id) dateByAddingTimeInterval:(double)a ;
 - (double) timeIntervalSinceDate:(id)a ;
 - (double) timeIntervalSince1970;
 - (id) initWithTimeIntervalSince1970:(double)a ;
 - (id) initWithDate:(id)a ;
 - (id) addTimeInterval:(double)a ;
 - (BOOL) isInToday;
 - (BOOL) isInTomorrow;
 - (BOOL) isInYesterday;
 - (BOOL) isInSameDayAsDate:(id)a ;
 - (BOOL) isEqual:(id)a toUnitGranularity:(unsigned long long)b ;
 - (long long) compare:(id)a toUnitGranularity:(unsigned long long)b ;
 - (id) initWithTimeInterval:(double)a sinceDate:(id)b ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) laterDate:(id)a ;
 - (id) earlierDate:(id)a ;


@end

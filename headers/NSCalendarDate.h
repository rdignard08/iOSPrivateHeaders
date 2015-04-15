
@interface NSCalendarDate : NSDate {

    Q refCount;
    d _timeIntervalSinceReferenceDate;
    @"NSTimeZone" _timeZone;
    @"NSString" _formatString;
    ^v _reserved;
}
 + (id) distantFuture;
 + (id) distantPast;
 + (id) calendarDate;
 + (id) dateWithYear:(q)amonth:(Q)bday:(Q)chour:(Q)dminute:(Q)esecond:(Q)ftimeZone:(id)g;
 + (id) dateWithString:(id)acalendarFormat:(id)b;
 + (id) dateWithString:(id)acalendarFormat:(id)blocale:(id)c;
 + (id) dateWithNaturalLanguageString:(id)adate:(id)blocale:(id)c;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (Class) classForCoder;
 - (void) setCalendarFormat:(id)a;
 - (id) initWithYear:(q)amonth:(Q)bday:(Q)chour:(Q)dminute:(Q)esecond:(Q)ftimeZone:(id)g;
 - (id) calendarFormat;
 - (id) descriptionWithCalendarFormat:(id)alocale:(id)b;
 - (id) initWithString:(id)acalendarFormat:(id)blocale:(id)c;
 - (id) timeZoneDetail;
 - (q) dayOfCommonEra;
 - (q) yearOfCommonEra;
 - (q) monthOfYear;
 - (q) dayOfMonth;
 - (q) dayOfWeek;
 - (q) dayOfYear;
 - (q) hourOfDay;
 - (q) minuteOfHour;
 - (q) secondOfMinute;
 - (q) microsecondOfSecond;
 - (id) dateByAddingYears:(q)amonths:(q)bdays:(q)chours:(q)dminutes:(q)eseconds:(q)f;
 - (void) years:(^q)amonths:(^q)bdays:(^q)chours:(^q)dminutes:(^q)eseconds:(^q)fsinceDate:(id)g;
 - (id) descriptionWithCalendarFormat:(id)a;
 - (id) initWithString:(id)acalendarFormat:(id)b;
 - (id) replacementObjectForPortCoder:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (Vv) release;
 - (void) dealloc;
 - (id) descriptionWithLocale:(id)a;
 - (d) timeIntervalSinceReferenceDate;
 - (id) initWithTimeIntervalSinceReferenceDate:(d)a;
 - (id) initWithString:(id)a;
 - (void) setTimeZone:(id)a;
 - (id) addTimeInterval:(d)a;
 - (id) timeZone;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end

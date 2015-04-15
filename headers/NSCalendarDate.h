
@interface NSCalendarDate : NSDate {

    unsigned long long refCount;
    double _timeIntervalSinceReferenceDate;
    NSTimeZone* _timeZone;
    NSString* _formatString;
    ^v _reserved;
}
 + (id) distantFuture;
 + (id) distantPast;
 + (id) calendarDate;
 + (id) dateWithYear:(long long)amonth:(unsigned long long)bday:(unsigned long long)chour:(unsigned long long)dminute:(unsigned long long)esecond:(unsigned long long)ftimeZone:(id)g;
 + (id) dateWithString:(id)acalendarFormat:(id)b;
 + (id) dateWithString:(id)acalendarFormat:(id)blocale:(id)c;
 + (id) dateWithNaturalLanguageString:(id)adate:(id)blocale:(id)c;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (Class) classForCoder;
 - (void) setCalendarFormat:(id)a;
 - (id) initWithYear:(long long)amonth:(unsigned long long)bday:(unsigned long long)chour:(unsigned long long)dminute:(unsigned long long)esecond:(unsigned long long)ftimeZone:(id)g;
 - (id) calendarFormat;
 - (id) descriptionWithCalendarFormat:(id)alocale:(id)b;
 - (id) initWithString:(id)acalendarFormat:(id)blocale:(id)c;
 - (id) timeZoneDetail;
 - (long long) dayOfCommonEra;
 - (long long) yearOfCommonEra;
 - (long long) monthOfYear;
 - (long long) dayOfMonth;
 - (long long) dayOfWeek;
 - (long long) dayOfYear;
 - (long long) hourOfDay;
 - (long long) minuteOfHour;
 - (long long) secondOfMinute;
 - (long long) microsecondOfSecond;
 - (id) dateByAddingYears:(long long)amonths:(long long)bdays:(long long)chours:(long long)dminutes:(long long)eseconds:(long long)f;
 - (void) years:(^q)amonths:(^q)bdays:(^q)chours:(^q)dminutes:(^q)eseconds:(^q)fsinceDate:(id)g;
 - (id) descriptionWithCalendarFormat:(id)a;
 - (id) initWithString:(id)acalendarFormat:(id)b;
 - (id) replacementObjectForPortCoder:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (Vv) release;
 - (void) dealloc;
 - (id) descriptionWithLocale:(id)a;
 - (double) timeIntervalSinceReferenceDate;
 - (id) initWithTimeIntervalSinceReferenceDate:(double)a;
 - (id) initWithString:(id)a;
 - (void) setTimeZone:(id)a;
 - (id) addTimeInterval:(double)a;
 - (id) timeZone;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end


@protocol NSCopying, NSSecureCoding;
@interface NSCalendar : NSObject <NSCopying, NSSecureCoding> {

}
@property (atomic, copy, readonly) NSString* calendarIdentifier;
@property (atomic, copy, readwrite) NSLocale* locale;
@property (atomic, copy, readwrite) NSTimeZone* timeZone;
@property (atomic, assign, readwrite) NSNumber* firstWeekday;
@property (atomic, assign, readwrite) NSNumber* minimumDaysInFirstWeek;
@property (atomic, copy, readonly) NSArray* eraSymbols;
@property (atomic, copy, readonly) NSArray* longEraSymbols;
@property (atomic, copy, readonly) NSArray* monthSymbols;
@property (atomic, copy, readonly) NSArray* shortMonthSymbols;
@property (atomic, copy, readonly) NSArray* veryShortMonthSymbols;
@property (atomic, copy, readonly) NSArray* standaloneMonthSymbols;
@property (atomic, copy, readonly) NSArray* shortStandaloneMonthSymbols;
@property (atomic, copy, readonly) NSArray* veryShortStandaloneMonthSymbols;
@property (atomic, copy, readonly) NSArray* weekdaySymbols;
@property (atomic, copy, readonly) NSArray* shortWeekdaySymbols;
@property (atomic, copy, readonly) NSArray* veryShortWeekdaySymbols;
@property (atomic, copy, readonly) NSArray* standaloneWeekdaySymbols;
@property (atomic, copy, readonly) NSArray* shortStandaloneWeekdaySymbols;
@property (atomic, copy, readonly) NSArray* veryShortStandaloneWeekdaySymbols;
@property (atomic, copy, readonly) NSArray* quarterSymbols;
@property (atomic, copy, readonly) NSArray* shortQuarterSymbols;
@property (atomic, copy, readonly) NSArray* standaloneQuarterSymbols;
@property (atomic, copy, readonly) NSArray* shortStandaloneQuarterSymbols;
@property (atomic, copy, readonly) NSString* AMSymbol;
@property (atomic, copy, readonly) NSString* PMSymbol;
 + (id) autoupdatingCurrentCalendar;
 + (BOOL) supportsSecureCoding;
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) currentCalendar;
 + (id) calendarWithIdentifier:(id)a;

 - (id) _dateOnlyComponentsForDate:(id)a ;
 - (id) _timeOnlyComponentsForDate:(id)a ;
 - (BOOL) date:(id)a isSameDayAsDate:(id)b ;
 - (BOOL) date:(id)a isSameYearAsDate:(id)b ;
 - (Class) classForCoder;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (unsigned long long) _cfTypeID;
 - (id) initWithCalendarIdentifier:(id)a ;
 - (void) setTimeZone:(id)a ;
 - (id) dateFromComponents:(id)a ;
 - (BOOL) isDateInToday:(id)a ;
 - (BOOL) isDateInTomorrow:(id)a ;
 - (BOOL) isDateInYesterday:(id)a ;
 - (BOOL) isDate:(id)a inSameDayAsDate:(id)b ;
 - (long long) compareDate:(id)a toDate:(id)b toUnitGranularity:(unsigned long long)c ;
 - (id) calendarIdentifier;
 - (void) setLocale:(id)a ;
 - (id) locale;
 - (id) timeZone;
 - (void) setFirstWeekday:(unsigned long long)a ;
 - (unsigned long long) firstWeekday;
 - (void) setMinimumDaysInFirstWeek:(unsigned long long)a ;
 - (unsigned long long) minimumDaysInFirstWeek;
 - ({_NSRange=QQ}) minimumRangeOfUnit:(unsigned long long)a ;
 - ({_NSRange=QQ}) maximumRangeOfUnit:(unsigned long long)a ;
 - ({_NSRange=QQ}) rangeOfUnit:(unsigned long long)a inUnit:(unsigned long long)b forDate:(id)c ;
 - (unsigned long long) ordinalityOfUnit:(unsigned long long)a inUnit:(unsigned long long)b forDate:(id)c ;
 - (BOOL) rangeOfUnit:(unsigned long long)a startDate:(^@)b interval:(^d)c forDate:(id)d ;
 - (id) components:(unsigned long long)a fromDate:(id)b ;
 - (id) dateByAddingComponents:(id)a toDate:(id)b options:(unsigned long long)c ;
 - (id) components:(unsigned long long)a fromDate:(id)b toDate:(id)c options:(unsigned long long)d ;
 - (BOOL) nextWeekendStartDate:(o^@)a interval:(o^d)b options:(unsigned long long)c afterDate:(id)d ;
 - (BOOL) isDateInWeekend:(id)a ;
 - (void) enumerateDatesStartingAfterDate:(id)a matchingComponents:(id)b options:(unsigned long long)c usingBlock:(@?)d ;
 - (id) gregorianStartDate;
 - (void) setGregorianStartDate:(id)a ;
 - (id) nextDateAfterDate:(id)a matchingComponents:(id)b options:(unsigned long long)c ;
 - (id) dateBySettingUnit:(unsigned long long)a value:(long long)b ofDate:(id)c options:(unsigned long long)d ;
 - (long long) component:(unsigned long long)a fromDate:(id)b ;
 - (id) dateBySettingHour:(long long)a minute:(long long)b second:(long long)c ofDate:(id)d options:(unsigned long long)e ;
 - (void) getEra:(o^q)a year:(o^q)b month:(o^q)c day:(o^q)d fromDate:(id)e ;
 - (void) getEra:(o^q)a yearForWeekOfYear:(o^q)b weekOfYear:(o^q)c weekday:(o^q)d fromDate:(id)e ;
 - (void) getHour:(o^q)a minute:(o^q)b second:(o^q)c nanosecond:(o^q)d fromDate:(id)e ;
 - (id) dateWithEra:(long long)a year:(long long)b month:(long long)c day:(long long)d hour:(long long)e minute:(long long)f second:(long long)g nanosecond:(long long)h ;
 - (id) dateWithEra:(long long)a yearForWeekOfYear:(long long)b weekOfYear:(long long)c weekday:(long long)d hour:(long long)e minute:(long long)f second:(long long)g nanosecond:(long long)h ;
 - (id) startOfDayForDate:(id)a ;
 - (id) componentsInTimeZone:(id)a fromDate:(id)b ;
 - (BOOL) isDate:(id)a equalToDate:(id)b toUnitGranularity:(unsigned long long)c ;
 - (BOOL) rangeOfWeekendStartDate:(o^@)a interval:(o^d)b containingDate:(id)c ;
 - (id) components:(unsigned long long)a fromDateComponents:(id)b toDateComponents:(id)c options:(unsigned long long)d ;
 - (id) dateByAddingUnit:(unsigned long long)a value:(long long)b toDate:(id)c options:(unsigned long long)d ;
 - (id) nextDateAfterDate:(id)a matchingUnit:(unsigned long long)b value:(long long)c options:(unsigned long long)d ;
 - (id) nextDateAfterDate:(id)a matchingHour:(long long)b minute:(long long)c second:(long long)d options:(unsigned long long)e ;
 - (id) dateBySettingUnit:(unsigned long long)a value:(long long)b toDate:(id)c options:(unsigned long long)d ;
 - (id) dateBySettingHour:(long long)a minute:(long long)b second:(long long)c toDate:(id)d options:(unsigned long long)e ;
 - (BOOL) date:(id)a matchesComponents:(id)b ;
 - (id) _copyLocale;
 - (id) _copyTimeZone;
 - (void) _setGregorianStartDate:(id)a ;
 - (id) _gregorianStartDate;
 - (id) eraSymbols;
 - (id) weekdaySymbols;
 - (id) shortWeekdaySymbols;
 - (id) longEraSymbols;
 - (id) veryShortMonthSymbols;
 - (id) veryShortStandaloneMonthSymbols;
 - (id) veryShortWeekdaySymbols;
 - (id) standaloneWeekdaySymbols;
 - (id) shortStandaloneWeekdaySymbols;
 - (id) veryShortStandaloneWeekdaySymbols;
 - (id) quarterSymbols;
 - (id) shortQuarterSymbols;
 - (id) standaloneQuarterSymbols;
 - (id) shortStandaloneQuarterSymbols;
 - ({?=qq}) _minimumRangeOfUnit:(unsigned long long)a ;
 - ({?=qq}) _maximumRangeOfUnit:(unsigned long long)a ;
 - ({?=qq}) _rangeOfUnit:(unsigned long long)a inUnit:(unsigned long long)b forAT:(double)c ;
 - (long long) _ordinalityOfUnit:(unsigned long long)a inUnit:(unsigned long long)b forAT:(double)c ;
 - (unsigned char) _rangeOfUnit:(unsigned long long)a startTime:(^d)b interval:(^d)c forAT:(double)d ;
 - (unsigned char) _composeAbsoluteTime:(^d)a ;
 - (unsigned char) _decomposeAbsoluteTime:(double)a ;
 - (unsigned char) _addComponents:(^d)a ;
 - (unsigned char) _diffComponents:(double)a ;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) monthSymbols;
 - (id) shortMonthSymbols;
 - (id) standaloneMonthSymbols;
 - (id) shortStandaloneMonthSymbols;
 - (id) AMSymbol;
 - (id) PMSymbol;


@end

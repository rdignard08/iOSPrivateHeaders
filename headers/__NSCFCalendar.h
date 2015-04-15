
@interface __NSCFCalendar : NSCalendar {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) calendarWithIdentifier:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) initWithCalendarIdentifier:(id)a ;
 - (void) setTimeZone:(id)a ;
 - (id) dateFromComponents:(id)a ;
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


@end

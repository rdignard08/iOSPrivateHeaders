
@interface _NSCopyOnWriteCalendarWrapper : NSCalendar {

    NSCalendar* cal;
    _NSRefcountedPthreadMutex* _lock;
    BOOL needsToCopy;
}
 + (id) currentCalendar;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) hash;
 - (void) setTimeZone:(id)a ;
 - (id) dateFromComponents:(id)a ;
 - (id) _initWithCalendar:(id)a ;
 - (id) calendarIdentifier;
 - (void) _copyWrappedCalendar;
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
 - (id) init;


@end


@interface _NSCopyOnWriteCalendarWrapper : NSCalendar {

    NSCalendar cal;
    _NSRefcountedPthreadMutex _lock;
    BOOL needsToCopy;
}
 + (id) currentCalendar;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) hash;
 - (void) setTimeZone:(id)a;
 - (id) dateFromComponents:(id)a;
 - (id) _initWithCalendar:(id)a;
 - (id) calendarIdentifier;
 - (void) _copyWrappedCalendar;
 - (void) setLocale:(id)a;
 - (id) locale;
 - (id) timeZone;
 - (void) setFirstWeekday:(unsigned long long)a;
 - (unsigned long long) firstWeekday;
 - (void) setMinimumDaysInFirstWeek:(unsigned long long)a;
 - (unsigned long long) minimumDaysInFirstWeek;
 - ({_NSRange=QQ}) minimumRangeOfUnit:(unsigned long long)a;
 - ({_NSRange=QQ}) maximumRangeOfUnit:(unsigned long long)a;
 - ({_NSRange=QQ}) rangeOfUnit:(unsigned long long)ainUnit:(unsigned long long)bforDate:(id)c;
 - (unsigned long long) ordinalityOfUnit:(unsigned long long)ainUnit:(unsigned long long)bforDate:(id)c;
 - (BOOL) rangeOfUnit:(unsigned long long)astartDate:(^@)binterval:(^d)cforDate:(id)d;
 - (id) components:(unsigned long long)afromDate:(id)b;
 - (id) dateByAddingComponents:(id)atoDate:(id)boptions:(unsigned long long)c;
 - (id) components:(unsigned long long)afromDate:(id)btoDate:(id)coptions:(unsigned long long)d;
 - (BOOL) nextWeekendStartDate:(o^@)ainterval:(o^d)boptions:(unsigned long long)cafterDate:(id)d;
 - (BOOL) isDateInWeekend:(id)a;
 - (void) enumerateDatesStartingAfterDate:(id)amatchingComponents:(id)boptions:(unsigned long long)cusingBlock:(@?)d;
 - (id) init;


@end

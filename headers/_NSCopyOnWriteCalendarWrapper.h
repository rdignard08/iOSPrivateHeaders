
@interface _NSCopyOnWriteCalendarWrapper : NSCalendar {

    @"NSCalendar" cal;
    @"_NSRefcountedPthreadMutex" _lock;
    BOOL needsToCopy;
}
 + (id) currentCalendar;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (Q) hash;
 - (void) setTimeZone:(id)a;
 - (id) dateFromComponents:(id)a;
 - (id) _initWithCalendar:(id)a;
 - (id) calendarIdentifier;
 - (void) _copyWrappedCalendar;
 - (void) setLocale:(id)a;
 - (id) locale;
 - (id) timeZone;
 - (void) setFirstWeekday:(Q)a;
 - (Q) firstWeekday;
 - (void) setMinimumDaysInFirstWeek:(Q)a;
 - (Q) minimumDaysInFirstWeek;
 - ({_NSRange=QQ}) minimumRangeOfUnit:(Q)a;
 - ({_NSRange=QQ}) maximumRangeOfUnit:(Q)a;
 - ({_NSRange=QQ}) rangeOfUnit:(Q)ainUnit:(Q)bforDate:(id)c;
 - (Q) ordinalityOfUnit:(Q)ainUnit:(Q)bforDate:(id)c;
 - (BOOL) rangeOfUnit:(Q)astartDate:(^@)binterval:(^d)cforDate:(id)d;
 - (id) components:(Q)afromDate:(id)b;
 - (id) dateByAddingComponents:(id)atoDate:(id)boptions:(Q)c;
 - (id) components:(Q)afromDate:(id)btoDate:(id)coptions:(Q)d;
 - (BOOL) nextWeekendStartDate:(o^@)ainterval:(o^d)boptions:(Q)cafterDate:(id)d;
 - (BOOL) isDateInWeekend:(id)a;
 - (void) enumerateDatesStartingAfterDate:(id)amatchingComponents:(id)boptions:(Q)cusingBlock:(@?)d;
 - (id) init;


@end

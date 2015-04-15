
@interface __NSCFCalendar : NSCalendar {

}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) calendarWithIdentifier:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) finalize;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) initWithCalendarIdentifier:(id)a;
 - (void) setTimeZone:(id)a;
 - (id) dateFromComponents:(id)a;
 - (id) calendarIdentifier;
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
 - (id) gregorianStartDate;
 - (void) setGregorianStartDate:(id)a;


@end
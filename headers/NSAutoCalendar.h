
@interface NSAutoCalendar : NSCalendar {

    NSCalendar cal;
    NSLocale changedLocale;
    NSTimeZone changedTimeZone;
    unsigned long long changedFirstWeekday;
    unsigned long long changedMinimumDaysinFirstWeek;
    NSDate changedGregorianStartDate;
}
 + (BOOL) supportsSecureCoding;

 - (Class) classForCoder;
 - (void) _update:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (id) initWithCalendarIdentifier:(id)a;
 - (void) setTimeZone:(id)a;
 - (id) dateFromComponents:(id)a;
 - (id) calendarIdentifier;
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
 - (id) gregorianStartDate;
 - (void) setGregorianStartDate:(id)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end

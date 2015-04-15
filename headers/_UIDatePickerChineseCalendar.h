
@interface _UIDatePickerChineseCalendar : NSCalendar {

    NSCalendar realCalendar;
}
 + (id) cyclicalFromRelated:(id)a;
 + (id) relatedFromCyclical:(id)a;

 - (void) setTimeZone:(id)a;
 - (id) dateFromComponents:(id)a;
 - (id) calendarIdentifier;
 - ({_NSRange=QQ}) maximumRangeOfUnit:(unsigned long long)a;
 - ({_NSRange=QQ}) rangeOfUnit:(unsigned long long)ainUnit:(unsigned long long)bforDate:(id)c;
 - (id) components:(unsigned long long)afromDate:(id)b;
 - (id) dateByAddingComponents:(id)atoDate:(id)boptions:(unsigned long long)c;
 - (id) components:(unsigned long long)afromDate:(id)btoDate:(id)coptions:(unsigned long long)d;
 - (void) setRealCalendar:(id)a;
 - (id) initWithCalendar:(id)a;
 - (id) realCalendar;


@end

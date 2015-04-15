
@interface _UIDatePickerChineseCalendar : NSCalendar {

    @"NSCalendar" realCalendar;
}
 + (id) cyclicalFromRelated:(id)a;
 + (id) relatedFromCyclical:(id)a;

 - (void) setTimeZone:(id)a;
 - (id) dateFromComponents:(id)a;
 - (id) calendarIdentifier;
 - ({_NSRange=QQ}) maximumRangeOfUnit:(Q)a;
 - ({_NSRange=QQ}) rangeOfUnit:(Q)ainUnit:(Q)bforDate:(id)c;
 - (id) components:(Q)afromDate:(id)b;
 - (id) dateByAddingComponents:(id)atoDate:(id)boptions:(Q)c;
 - (id) components:(Q)afromDate:(id)btoDate:(id)coptions:(Q)d;
 - (void) setRealCalendar:(id)a;
 - (id) initWithCalendar:(id)a;
 - (id) realCalendar;


@end

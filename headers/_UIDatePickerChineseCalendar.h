
@interface _UIDatePickerChineseCalendar : NSCalendar {

    NSCalendar* realCalendar;
}
 + (id) cyclicalFromRelated:(id)a;
 + (id) relatedFromCyclical:(id)a;

 - (void) setTimeZone:(id)a ;
 - (id) dateFromComponents:(id)a ;
 - (id) calendarIdentifier;
 - ({_NSRange=QQ}) maximumRangeOfUnit:(unsigned long long)a ;
 - ({_NSRange=QQ}) rangeOfUnit:(unsigned long long)a inUnit:(unsigned long long)b forDate:(id)c ;
 - (id) components:(unsigned long long)a fromDate:(id)b ;
 - (id) dateByAddingComponents:(id)a toDate:(id)b options:(unsigned long long)c ;
 - (id) components:(unsigned long long)a fromDate:(id)b toDate:(id)c options:(unsigned long long)d ;
 - (void) setRealCalendar:(id)a ;
 - (id) initWithCalendar:(id)a ;
 - (id) realCalendar;


@end


@interface _UIDatePickerMode_Date : _UIDatePickerMode {

    double _dateYearWidth;
    double _dateMonthWidth;
    double _dateDayWidth;
    NSString* _yearFormat;
    NSString* _monthFormat;
    NSString* _dayFormat;
}
 + (long long) datePickerMode;
 + (unsigned long long) extractableCalendarUnits;

 - (void) dealloc;
 - (void) noteCalendarChanged;
 - (long long) displayedCalendarUnits;
 - (void) resetComponentWidths;
 - (void) _shouldReset:(id)a;
 - (id) dateFormatForCalendarUnit:(unsigned long long)a;
 - (double) widthForCalendarUnit:(unsigned long long)afont:(id)bmaxWidth:(double)c;
 - (id) localizedFormatString;
 - (long long) numberOfRowsForCalendarUnit:(unsigned long long)a;
 - (unsigned long long) nextUnitSmallerThanUnit:(unsigned long long)a;
 - (unsigned long long) nextUnitLargerThanUnit:(unsigned long long)a;
 - (id) _dateForYearRow:(long long)a;
 - (long long) rowForDate:(id)adateComponents:(id)bcomponent:(long long)ccurrentRow:(long long)d;
 - (BOOL) _shouldEnableValueForRow:(long long)ainComponent:(long long)bcalendarUnit:(unsigned long long)c;


@end

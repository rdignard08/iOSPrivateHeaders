
@interface _UIDatePickerMode_Date : _UIDatePickerMode {

    d _dateYearWidth;
    d _dateMonthWidth;
    d _dateDayWidth;
    @"NSString" _yearFormat;
    @"NSString" _monthFormat;
    @"NSString" _dayFormat;
}
 + (q) datePickerMode;
 + (Q) extractableCalendarUnits;

 - (void) dealloc;
 - (void) noteCalendarChanged;
 - (q) displayedCalendarUnits;
 - (void) resetComponentWidths;
 - (void) _shouldReset:(id)a;
 - (id) dateFormatForCalendarUnit:(Q)a;
 - (d) widthForCalendarUnit:(Q)afont:(id)bmaxWidth:(d)c;
 - (id) localizedFormatString;
 - (q) numberOfRowsForCalendarUnit:(Q)a;
 - (Q) nextUnitSmallerThanUnit:(Q)a;
 - (Q) nextUnitLargerThanUnit:(Q)a;
 - (id) _dateForYearRow:(q)a;
 - (q) rowForDate:(id)adateComponents:(id)bcomponent:(q)ccurrentRow:(q)d;
 - (BOOL) _shouldEnableValueForRow:(q)ainComponent:(q)bcalendarUnit:(Q)c;


@end

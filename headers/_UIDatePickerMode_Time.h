
@interface _UIDatePickerMode_Time : _UIDatePickerMode {

    d _timeHourWidth;
    d _timeMinuteWidth;
    d _timeAMPMWidth;
    @"NSString" _hourFormat;
    @"NSString" _minuteFormat;
}
 + (q) datePickerMode;
 + (Q) extractableCalendarUnits;

 - (void) dealloc;
 - (d) rowHeight;
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
 - (BOOL) _shouldEnableValueForRow:(q)ainComponent:(q)bcalendarUnit:(Q)c;
 - (id) font;


@end

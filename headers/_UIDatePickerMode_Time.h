
@interface _UIDatePickerMode_Time : _UIDatePickerMode {

    double _timeHourWidth;
    double _timeMinuteWidth;
    double _timeAMPMWidth;
    NSString* _hourFormat;
    NSString* _minuteFormat;
}
 + (long long) datePickerMode;
 + (unsigned long long) extractableCalendarUnits;

 - (void) dealloc;
 - (double) rowHeight;
 - (void) noteCalendarChanged;
 - (long long) displayedCalendarUnits;
 - (void) resetComponentWidths;
 - (void) _shouldReset:(id)a ;
 - (id) dateFormatForCalendarUnit:(unsigned long long)a ;
 - (double) widthForCalendarUnit:(unsigned long long)a font:(id)b maxWidth:(double)c ;
 - (id) localizedFormatString;
 - (long long) numberOfRowsForCalendarUnit:(unsigned long long)a ;
 - (unsigned long long) nextUnitSmallerThanUnit:(unsigned long long)a ;
 - (unsigned long long) nextUnitLargerThanUnit:(unsigned long long)a ;
 - (BOOL) _shouldEnableValueForRow:(long long)a inComponent:(long long)b calendarUnit:(unsigned long long)c ;
 - (id) font;


@end

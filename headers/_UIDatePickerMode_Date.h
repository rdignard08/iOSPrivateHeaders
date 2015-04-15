
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
 - (void) _shouldReset:(id)a ;
 - (id) dateFormatForCalendarUnit:(unsigned long long)a ;
 - (double) widthForCalendarUnit:(unsigned long long)a font:(id)b maxWidth:(double)c ;
 - (id) localizedFormatString;
 - (long long) numberOfRowsForCalendarUnit:(unsigned long long)a ;
 - (unsigned long long) nextUnitSmallerThanUnit:(unsigned long long)a ;
 - (unsigned long long) nextUnitLargerThanUnit:(unsigned long long)a ;
 - (id) _dateForYearRow:(long long)a ;
 - (long long) rowForDate:(id)a dateComponents:(id)b component:(long long)c currentRow:(long long)d ;
 - (BOOL) _shouldEnableValueForRow:(long long)a inComponent:(long long)b calendarUnit:(unsigned long long)c ;


@end

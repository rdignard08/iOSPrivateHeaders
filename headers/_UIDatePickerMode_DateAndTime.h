
@interface _UIDatePickerMode_DateAndTime : _UIDatePickerMode {

    BOOL _weekdayLast;
    double _wmdWeekMonthDayWidth;
    double _wmdHourWidth;
    double _wmdMinuteWidth;
    double _wmdAMPMWidth;
    double _wmdWeekdayWidth;
    NSString* _weekdayFormat;
    NSString* _monthDayFormat;
    NSString* _hourFormat;
    NSString* _minuteFormat;
    NSDateFormatter* _relativeFormatter;
    NSDateFormatter* _weekdayFormatter;
}
 + (long long) datePickerMode;
 + (unsigned long long) extractableCalendarUnits;

 - (void) dealloc;
 - (double) weekdayWidth;
 - (void) noteCalendarChanged;
 - (long long) displayedCalendarUnits;
 - (void) loadDate:(id)a animated:(BOOL)b ;
 - (id) viewForRow:(long long)a inComponent:(long long)b reusingView:(id)c ;
 - (void) updateEnabledStateOfViewForRow:(long long)a inComponent:(long long)b ;
 - (void) resetComponentWidths;
 - (void) _shouldReset:(id)a ;
 - (id) dateFormatForCalendarUnit:(unsigned long long)a ;
 - (id) baseDateComponents;
 - (double) widthForCalendarUnit:(unsigned long long)a font:(id)b maxWidth:(double)c ;
 - (id) localizedFormatString;
 - (long long) numberOfRowsForCalendarUnit:(unsigned long long)a ;
 - (unsigned long long) nextUnitSmallerThanUnit:(unsigned long long)a ;
 - (unsigned long long) nextUnitLargerThanUnit:(unsigned long long)a ;
 - (id) dateForRow:(long long)a inCalendarUnit:(unsigned long long)b ;
 - (long long) rowForDate:(id)a dateComponents:(id)b component:(long long)c currentRow:(long long)d ;
 - (void) _updateSelectedDateComponentsWithNewValueInComponent:(long long)a usingSelectionBarValue:(BOOL)b ;
 - (id) titleForRow:(long long)a inComponent:(long long)b ;
 - (BOOL) _shouldEnableValueForRow:(long long)a inComponent:(long long)b calendarUnit:(unsigned long long)c ;
 - (void) _resetBaseDateComponentsIfNecessaryFromDate:(id)a ;
 - (void) _takeBaseDateComponentsFromDate:(id)a ;
 - (id) weekdayFormatter;
 - (double) componentWidthForDateTimeCalendarUnit:(unsigned long long)a font:(id)b maxWidth:(double)c ;
 - (id) _dateForWeekMonthDayRow:(long long)a ;
 - (BOOL) _shouldEnableWeekMonthDayForRow:(long long)a ;
 - (id) relativeFormatter;
 - (BOOL) isWeekdayLast;
 - (^Q) elements;


@end

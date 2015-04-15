
@interface _UIDatePickerMode_DateAndTime : _UIDatePickerMode {

    BOOL _weekdayLast;
    d _wmdWeekMonthDayWidth;
    d _wmdHourWidth;
    d _wmdMinuteWidth;
    d _wmdAMPMWidth;
    d _wmdWeekdayWidth;
    @"NSString" _weekdayFormat;
    @"NSString" _monthDayFormat;
    @"NSString" _hourFormat;
    @"NSString" _minuteFormat;
    @"NSDateFormatter" _relativeFormatter;
    @"NSDateFormatter" _weekdayFormatter;
}
 + (q) datePickerMode;
 + (Q) extractableCalendarUnits;

 - (void) dealloc;
 - (d) weekdayWidth;
 - (void) noteCalendarChanged;
 - (q) displayedCalendarUnits;
 - (void) loadDate:(id)aanimated:(BOOL)b;
 - (id) viewForRow:(q)ainComponent:(q)breusingView:(id)c;
 - (void) updateEnabledStateOfViewForRow:(q)ainComponent:(q)b;
 - (void) resetComponentWidths;
 - (void) _shouldReset:(id)a;
 - (id) dateFormatForCalendarUnit:(Q)a;
 - (id) baseDateComponents;
 - (d) widthForCalendarUnit:(Q)afont:(id)bmaxWidth:(d)c;
 - (id) localizedFormatString;
 - (q) numberOfRowsForCalendarUnit:(Q)a;
 - (Q) nextUnitSmallerThanUnit:(Q)a;
 - (Q) nextUnitLargerThanUnit:(Q)a;
 - (id) dateForRow:(q)ainCalendarUnit:(Q)b;
 - (q) rowForDate:(id)adateComponents:(id)bcomponent:(q)ccurrentRow:(q)d;
 - (void) _updateSelectedDateComponentsWithNewValueInComponent:(q)ausingSelectionBarValue:(BOOL)b;
 - (id) titleForRow:(q)ainComponent:(q)b;
 - (BOOL) _shouldEnableValueForRow:(q)ainComponent:(q)bcalendarUnit:(Q)c;
 - (void) _resetBaseDateComponentsIfNecessaryFromDate:(id)a;
 - (void) _takeBaseDateComponentsFromDate:(id)a;
 - (id) weekdayFormatter;
 - (d) componentWidthForDateTimeCalendarUnit:(Q)afont:(id)bmaxWidth:(d)c;
 - (id) _dateForWeekMonthDayRow:(q)a;
 - (BOOL) _shouldEnableWeekMonthDayForRow:(q)a;
 - (id) relativeFormatter;
 - (BOOL) isWeekdayLast;
 - (^Q) elements;


@end

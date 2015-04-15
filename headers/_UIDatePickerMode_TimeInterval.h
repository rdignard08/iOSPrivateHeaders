
@interface _UIDatePickerMode_TimeInterval : _UIDatePickerMode {

    double _componentWidth;
}
 + (long long) datePickerMode;
 + (unsigned long long) extractableCalendarUnits;

 - (double) rowHeight;
 - (BOOL) isTimeIntervalMode;
 - (void) takeExtremesFromMinimumDate:(id)amaximumDate:(id)b;
 - (long long) hourForRow:(long long)a;
 - (BOOL) areValidDateComponents:(id)acomparingUnits:(long long)b;
 - (id) dateComponentsByRestrictingSelectedComponents:(id)awithLastManipulatedColumn:(long long)b;
 - (void) resetComponentWidths;
 - (double) widthForCalendarUnit:(unsigned long long)afont:(id)bmaxWidth:(double)c;
 - (id) localizedFormatString;
 - (long long) numberOfRowsForCalendarUnit:(unsigned long long)a;
 - (unsigned long long) nextUnitSmallerThanUnit:(unsigned long long)a;
 - (unsigned long long) nextUnitLargerThanUnit:(unsigned long long)a;
 - ({_NSRange=QQ}) rangeForCalendarUnit:(unsigned long long)a;
 - (long long) valueForDate:(id)adateComponents:(id)bcalendarUnit:(unsigned long long)c;
 - (long long) titleAlignmentForCalendarUnit:(unsigned long long)a;
 - (id) titleForRow:(long long)ainComponent:(long long)b;
 - (BOOL) _shouldEnableValueForRow:(long long)ainComponent:(long long)bcalendarUnit:(unsigned long long)c;
 - (id) font;


@end


@interface _UIDatePickerMode_TimeInterval : _UIDatePickerMode {

    d _componentWidth;
}
 + (q) datePickerMode;
 + (Q) extractableCalendarUnits;

 - (d) rowHeight;
 - (BOOL) isTimeIntervalMode;
 - (void) takeExtremesFromMinimumDate:(id)amaximumDate:(id)b;
 - (q) hourForRow:(q)a;
 - (BOOL) areValidDateComponents:(id)acomparingUnits:(q)b;
 - (id) dateComponentsByRestrictingSelectedComponents:(id)awithLastManipulatedColumn:(q)b;
 - (void) resetComponentWidths;
 - (d) widthForCalendarUnit:(Q)afont:(id)bmaxWidth:(d)c;
 - (id) localizedFormatString;
 - (q) numberOfRowsForCalendarUnit:(Q)a;
 - (Q) nextUnitSmallerThanUnit:(Q)a;
 - (Q) nextUnitLargerThanUnit:(Q)a;
 - ({_NSRange=QQ}) rangeForCalendarUnit:(Q)a;
 - (q) valueForDate:(id)adateComponents:(id)bcalendarUnit:(Q)c;
 - (q) titleAlignmentForCalendarUnit:(Q)a;
 - (id) titleForRow:(q)ainComponent:(q)b;
 - (BOOL) _shouldEnableValueForRow:(q)ainComponent:(q)bcalendarUnit:(Q)c;
 - (id) font;


@end

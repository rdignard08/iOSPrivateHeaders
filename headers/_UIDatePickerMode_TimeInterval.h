
@interface _UIDatePickerMode_TimeInterval : _UIDatePickerMode {

    double _componentWidth;
}
 + (long long) datePickerMode;
 + (unsigned long long) extractableCalendarUnits;

 - (double) rowHeight;
 - (BOOL) isTimeIntervalMode;
 - (void) takeExtremesFromMinimumDate:(id)a maximumDate:(id)b ;
 - (long long) hourForRow:(long long)a ;
 - (BOOL) areValidDateComponents:(id)a comparingUnits:(long long)b ;
 - (id) dateComponentsByRestrictingSelectedComponents:(id)a withLastManipulatedColumn:(long long)b ;
 - (void) resetComponentWidths;
 - (double) widthForCalendarUnit:(unsigned long long)a font:(id)b maxWidth:(double)c ;
 - (id) localizedFormatString;
 - (long long) numberOfRowsForCalendarUnit:(unsigned long long)a ;
 - (unsigned long long) nextUnitSmallerThanUnit:(unsigned long long)a ;
 - (unsigned long long) nextUnitLargerThanUnit:(unsigned long long)a ;
 - ({_NSRange=QQ}) rangeForCalendarUnit:(unsigned long long)a ;
 - (long long) valueForDate:(id)a dateComponents:(id)b calendarUnit:(unsigned long long)c ;
 - (long long) titleAlignmentForCalendarUnit:(unsigned long long)a ;
 - (id) titleForRow:(long long)a inComponent:(long long)b ;
 - (BOOL) _shouldEnableValueForRow:(long long)a inComponent:(long long)b calendarUnit:(unsigned long long)c ;
 - (id) font;


@end

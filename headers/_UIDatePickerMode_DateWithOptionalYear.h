
@interface _UIDatePickerMode_DateWithOptionalYear : _UIDatePickerMode_Date {

}
 + (long long) datePickerMode;

 - (id) dateComponentsByRestrictingSelectedComponents:(id)a withLastManipulatedColumn:(long long)b ;
 - (id) selectedDateComponents;
 - (long long) numberOfRowsForCalendarUnit:(unsigned long long)a ;
 - (long long) yearForRow:(long long)a ;
 - (long long) rowForDate:(id)a dateComponents:(id)b component:(long long)c currentRow:(long long)d ;
 - (id) titleForRow:(long long)a inComponent:(long long)b ;
 - (BOOL) _shouldEnableValueForRow:(long long)a inComponent:(long long)b calendarUnit:(unsigned long long)c ;


@end

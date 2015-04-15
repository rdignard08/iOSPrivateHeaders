
@interface _UIDatePickerMode_DateWithOptionalYear : _UIDatePickerMode_Date {

}
 + (long long) datePickerMode;

 - (id) dateComponentsByRestrictingSelectedComponents:(id)awithLastManipulatedColumn:(long long)b;
 - (id) selectedDateComponents;
 - (long long) numberOfRowsForCalendarUnit:(unsigned long long)a;
 - (long long) yearForRow:(long long)a;
 - (long long) rowForDate:(id)adateComponents:(id)bcomponent:(long long)ccurrentRow:(long long)d;
 - (id) titleForRow:(long long)ainComponent:(long long)b;
 - (BOOL) _shouldEnableValueForRow:(long long)ainComponent:(long long)bcalendarUnit:(unsigned long long)c;


@end

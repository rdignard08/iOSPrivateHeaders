
@interface _UIDatePickerMode_DateWithOptionalYear : _UIDatePickerMode_Date {

}
 + (q) datePickerMode;

 - (id) dateComponentsByRestrictingSelectedComponents:(id)awithLastManipulatedColumn:(q)b;
 - (id) selectedDateComponents;
 - (q) numberOfRowsForCalendarUnit:(Q)a;
 - (q) yearForRow:(q)a;
 - (q) rowForDate:(id)adateComponents:(id)bcomponent:(q)ccurrentRow:(q)d;
 - (id) titleForRow:(q)ainComponent:(q)b;
 - (BOOL) _shouldEnableValueForRow:(q)ainComponent:(q)bcalendarUnit:(Q)c;


@end


@interface _UIDatePickerMode_MonthDay : _UIDatePickerMode_Date {

}
 + (long long) datePickerMode;
 + (unsigned long long) extractableCalendarUnits;

 - (unsigned long long) nextUnitSmallerThanUnit:(unsigned long long)a;
 - (unsigned long long) nextUnitLargerThanUnit:(unsigned long long)a;


@end

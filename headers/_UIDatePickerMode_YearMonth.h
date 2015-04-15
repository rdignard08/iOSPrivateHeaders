
@interface _UIDatePickerMode_YearMonth : _UIDatePickerMode_Date {

}
 + (long long) datePickerMode;
 + (unsigned long long) extractableCalendarUnits;

 - (unsigned long long) nextUnitSmallerThanUnit:(unsigned long long)a ;
 - (unsigned long long) nextUnitLargerThanUnit:(unsigned long long)a ;


@end

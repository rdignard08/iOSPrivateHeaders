
@interface _UIDatePickerMode_Custom : _UIDatePickerMode {

    NSString* _originalFormat;
    NSArray* _components;
    NSArray* _sortedComponents;
    long long _displayedUnits;
    long long _desiredUnits;
}

 - (id) components;
 - (void) dealloc;
 - (unsigned long long) numberOfComponents;
 - (long long) numberOfRowsInComponent:(long long)a;
 - (void) noteCalendarChanged;
 - (long long) displayedCalendarUnits;
 - (long long) componentForCalendarUnit:(unsigned long long)a;
 - (unsigned long long) calendarUnitForComponent:(long long)a;
 - (void) resetComponentWidths;
 - (id) initWithFormatString:(id)adatePickerView:(id)b;
 - (id) dateFormatForCalendarUnit:(unsigned long long)a;
 - (double) widthForCalendarUnit:(unsigned long long)afont:(id)bmaxWidth:(double)c;
 - (unsigned long long) extractableCalendarUnits;
 - (unsigned long long) nextUnitSmallerThanUnit:(unsigned long long)a;
 - (unsigned long long) nextUnitLargerThanUnit:(unsigned long long)a;
 - (long long) valueForRow:(long long)ainCalendarUnit:(unsigned long long)b;
 - (id) dateForRow:(long long)ainCalendarUnit:(unsigned long long)b;
 - (long long) titleAlignmentForCalendarUnit:(unsigned long long)a;
 - (id) _componentForCalendarUnit:(unsigned long long)a;


@end

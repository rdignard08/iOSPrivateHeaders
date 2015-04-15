
@interface _UIDatePickerMode_Custom : _UIDatePickerMode {

    @"NSString" _originalFormat;
    @"NSArray" _components;
    @"NSArray" _sortedComponents;
    q _displayedUnits;
    q _desiredUnits;
}

 - (id) components;
 - (void) dealloc;
 - (Q) numberOfComponents;
 - (q) numberOfRowsInComponent:(q)a;
 - (void) noteCalendarChanged;
 - (q) displayedCalendarUnits;
 - (q) componentForCalendarUnit:(Q)a;
 - (Q) calendarUnitForComponent:(q)a;
 - (void) resetComponentWidths;
 - (id) initWithFormatString:(id)adatePickerView:(id)b;
 - (id) dateFormatForCalendarUnit:(Q)a;
 - (d) widthForCalendarUnit:(Q)afont:(id)bmaxWidth:(d)c;
 - (Q) extractableCalendarUnits;
 - (Q) nextUnitSmallerThanUnit:(Q)a;
 - (Q) nextUnitLargerThanUnit:(Q)a;
 - (q) valueForRow:(q)ainCalendarUnit:(Q)b;
 - (id) dateForRow:(q)ainCalendarUnit:(Q)b;
 - (q) titleAlignmentForCalendarUnit:(Q)a;
 - (id) _componentForCalendarUnit:(Q)a;


@end

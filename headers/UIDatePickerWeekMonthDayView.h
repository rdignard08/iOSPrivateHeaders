
@interface UIDatePickerWeekMonthDayView : UIView {

    {?="weekdayLast"b1} _datePickerWeekMonthDayViewFlags;
    BOOL _isModern;
    @"UILabel" _dateLabel;
    @"UILabel" _weekdayLabel;
    @"NSString" _formattedDateString;
    d _weekdayWidth;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (BOOL) _canBeReusedInPickerView;
 - (id) dateLabel;
 - (id) weekdayLabel;
 - (BOOL) isModern;
 - (void) setIsModern:(BOOL)a;
 - (void) setWeekdayWidth:(d)a;
 - (BOOL) weekdayLast;
 - (void) setWeekdayLast:(BOOL)a;
 - (id) formattedDateString;
 - (void) setFormattedDateString:(id)a;
 - (d) weekdayWidth;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end

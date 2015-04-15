
@interface UIDatePickerWeekMonthDayView : UIView {

    weekdayLast _datePickerWeekMonthDayViewFlags;
    BOOL _isModern;
    UILabel _dateLabel;
    UILabel _weekdayLabel;
    NSString _formattedDateString;
    double _weekdayWidth;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (BOOL) _canBeReusedInPickerView;
 - (id) dateLabel;
 - (id) weekdayLabel;
 - (BOOL) isModern;
 - (void) setIsModern:(BOOL)a;
 - (void) setWeekdayWidth:(double)a;
 - (BOOL) weekdayLast;
 - (void) setWeekdayLast:(BOOL)a;
 - (id) formattedDateString;
 - (void) setFormattedDateString:(id)a;
 - (double) weekdayWidth;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end

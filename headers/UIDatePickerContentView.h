
@interface UIDatePickerContentView : UIView {

    {?="isAmPm"b1} _datePickerContentViewFlags;
    BOOL _isModern;
    @"UILabel" _titleLabel;
    double _titleLabelMaxX;
    long long _titleAlignment;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (BOOL) _canBeReusedInPickerView;
 - (id) titleLabel;
 - (BOOL) isAmPm;
 - (void) setIsAmPm:(BOOL)a;
 - (void) setTitleLabelMaxX:(double)a;
 - (void) setTitleAlignment:(long long)a;
 - (double) titleLabelMaxX;
 - (long long) titleAlignment;
 - (BOOL) isModern;
 - (void) setIsModern:(BOOL)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end

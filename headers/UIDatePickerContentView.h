
@interface UIDatePickerContentView : UIView {

    {?="isAmPm"b1} _datePickerContentViewFlags;
    BOOL _isModern;
    @"UILabel" _titleLabel;
    d _titleLabelMaxX;
    q _titleAlignment;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (BOOL) _canBeReusedInPickerView;
 - (id) titleLabel;
 - (BOOL) isAmPm;
 - (void) setIsAmPm:(BOOL)a;
 - (void) setTitleLabelMaxX:(d)a;
 - (void) setTitleAlignment:(q)a;
 - (d) titleLabelMaxX;
 - (q) titleAlignment;
 - (BOOL) isModern;
 - (void) setIsModern:(BOOL)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end

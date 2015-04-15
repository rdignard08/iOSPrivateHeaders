
@interface _UIModalItemTextFiledBGView : _UITextFieldRoundedRectBackgroundViewNeue {

    long long _textFieldsCount;
    UIColor _backgroundColor;
    UIColor _separatorsColor;
    UIView _separatorView;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) setSeparatorsColor:(id)a;
 - (void) setTextFieldsCount:(long long)a;
 - (id) separatorsColor;
 - (long long) textFieldsCount;
 - (void) setBackgroundColor:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) backgroundColor;


@end

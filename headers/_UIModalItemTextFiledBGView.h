
@interface _UIModalItemTextFiledBGView : _UITextFieldRoundedRectBackgroundViewNeue {

    q _textFieldsCount;
    @"UIColor" _backgroundColor;
    @"UIColor" _separatorsColor;
    @"UIView" _separatorView;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) setSeparatorsColor:(id)a;
 - (void) setTextFieldsCount:(q)a;
 - (id) separatorsColor;
 - (q) textFieldsCount;
 - (void) setBackgroundColor:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) backgroundColor;


@end

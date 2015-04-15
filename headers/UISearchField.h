
@interface UISearchField : UITextField {

}
 + (double) defaultHeight;

 - (id) _scriptingInfo;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) iconRect;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rightViewRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) _placeholderColor;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _availableTextRectExcludingButtonsForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setPaddingTop:(float)apaddingLeft:(float)b;
 - (BOOL) _shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end

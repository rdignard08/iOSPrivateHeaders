
@interface UISearchField : UITextField {

}
 + (d) defaultHeight;

 - (id) _scriptingInfo;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) iconRect;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rightViewRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) _placeholderColor;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _availableTextRectExcludingButtonsForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setPaddingTop:(f)apaddingLeft:(f)b;
 - (BOOL) _shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end

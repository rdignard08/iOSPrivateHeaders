
@interface _UIAlerts_Support : NSObject {

}
 + (id) alertWindow;
 + (id) dimmingView;
 + (id) visibleAlert;
 + (void) showAlertWindow;
 + (void) setVisibleAlert:(id)a;
 + (id) alertSheetStack;
 + (void) hideAlertWindow;
 + (void) setAlertWindow:(id)a;
 + (^@) cancelButtonImage;
 + (^@) destroyButtonImage;
 + (^@) destroyPressedImage;
 + (^@) buttonImage;
 + (^@) pressedButtonImage;
 + (id) keyboardIfPresent;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) buttonContentStretch;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) compactButtonContentStretch;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) popupButtonContentStretch;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) sheetButtonContentStretch;
 + (void) applyAlertWindowTransform:({CGAffineTransform=dddddd})a;
 + ({CGAffineTransform=dddddd}) currentAlertWindowTransform;



@end

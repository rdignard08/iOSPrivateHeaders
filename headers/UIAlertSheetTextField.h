
@interface UIAlertSheetTextField : UITextField {

    UIThreePartImageView* _sheetBackgroundView;
}

 - (void) dealloc;
 - (void) setBackgroundView:(id)a ;
 - (id) backgroundView;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) editingRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) textRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) clearButtonRectForBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end

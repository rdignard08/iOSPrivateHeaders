
@interface UITextFieldLabel : UILabel {

}
 + (id) defaultFont;
 + (id) _defaultAttributes;

 - (void) drawTextInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) _shouldDrawUnderlinesLikeWebKit;
 - (void) _defaultDrawTextInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end

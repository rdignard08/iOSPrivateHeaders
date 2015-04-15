
@interface UIButtonLabel : UILabel {

    BOOL _reverseShadow;
    @"UIButton" _button;
}
 + (id) _defaultAttributes;

 - (void) setTextAlignment:(q)a;
 - (void) setFont:(id)a;
 - (BOOL) _shouldAnimatePropertyWithKey:(id)a;
 - (void) invalidateIntrinsicContentSize;
 - ({CGSize=dd}) intrinsicContentSize;
 - (void) _setWantsAutolayout;
 - (void) setAdjustsFontSizeToFitWidth:(BOOL)a;
 - (void) _setMinimumFontSize:(d)a;
 - (id) _defaultAttributes;
 - (id) _initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})abutton:(id)b;
 - (void) setReverseShadow:(BOOL)a;
 - (void) setShadowOffset:({CGSize=dd})a;
 - (void) setMinimumScaleFactor:(d)a;
 - ({CGSize=dd}) shadowOffset;
 - (void) setLineBreakMode:(q)a;


@end


@interface UIButtonLabel : UILabel {

    BOOL _reverseShadow;
    UIButton* _button;
}
 + (id) _defaultAttributes;

 - (void) setTextAlignment:(long long)a;
 - (void) setFont:(id)a;
 - (BOOL) _shouldAnimatePropertyWithKey:(id)a;
 - (void) invalidateIntrinsicContentSize;
 - ({CGSize=dd}) intrinsicContentSize;
 - (void) _setWantsAutolayout;
 - (void) setAdjustsFontSizeToFitWidth:(BOOL)a;
 - (void) _setMinimumFontSize:(double)a;
 - (id) _defaultAttributes;
 - (id) _initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})abutton:(id)b;
 - (void) setReverseShadow:(BOOL)a;
 - (void) setShadowOffset:({CGSize=dd})a;
 - (void) setMinimumScaleFactor:(double)a;
 - ({CGSize=dd}) shadowOffset;
 - (void) setLineBreakMode:(long long)a;


@end

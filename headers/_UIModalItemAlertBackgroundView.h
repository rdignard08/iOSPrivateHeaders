
@interface _UIModalItemAlertBackgroundView : _UIModalItemBackgroundView {

    _UIBackdropView* _effectView;
    UIImageView* _fillingView;
}

 - (void) layoutSubviews;
 - (id) _gradientImageForBoundsSize:({CGSize=dd})a withInnerColor:(id)b outerColor:(id)c ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end

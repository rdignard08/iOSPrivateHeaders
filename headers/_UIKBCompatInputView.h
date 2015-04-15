
@interface _UIKBCompatInputView : UIView {

}
 + (BOOL) _retroactivelyRequiresConstraintBasedLayout;

 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - ({CGSize=dd}) intrinsicContentSize;
 - (void) _resizeForKeyplaneSize:({CGSize=dd})asplitWidthsChanged:(BOOL)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _compatibleBounds;
 - (BOOL) _hasAutolayoutHeightConstraint;
 - (id) touchableView;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end

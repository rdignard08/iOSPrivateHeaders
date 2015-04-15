
@interface _UIDynamicCaretAlternatives : UIView {

    @"UIView" _verticalDivider;
    @"UIView" _horizontalDivider;
    @"NSArray" _alternativesButtons;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) setVerticalDivider:(id)a;
 - (id) verticalDivider;
 - (void) setHorizontalDivider:(id)a;
 - (id) horizontalDivider;
 - (void) setAlternativesButtons:(id)a;
 - (id) alternativesButtons;
 - (void) setButtonLabels:(id)a;
 - (long long) indexOfButtonForPoint:({CGPoint=dd})a;
 - (void) highlightButtonAtIndex:(long long)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end

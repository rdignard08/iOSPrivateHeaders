
@interface _UIPopoverSlidingChromeView : UIPopoverBackgroundView {

}
 + (d) arrowHeight;
 + (d) arrowBase;
 + ({UIEdgeInsets=dddd}) contentViewInsets;
 + (d) cornerRadius;

 - (void) layoutSubviews;
 - ({CGSize=dd}) _shadowOffset;
 - (Q) arrowDirection;
 - (void) setArrowDirection:(Q)a;
 - (d) _shadowRadius;
 - ({UIEdgeInsets=dddd}) _shadowInsets;
 - (d) _shadowOpacity;
 - (void) setArrowOffset:(d)a;
 - (d) arrowOffset;
 - ({UIEdgeInsets=dddd}) _contentViewInsets;
 - (id) _shadowPathForRect:({CGRect={CGPoint=dd}{CGSize=dd}})aarrowDirection:(Q)b;


@end

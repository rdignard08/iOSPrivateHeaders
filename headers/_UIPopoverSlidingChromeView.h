
@interface _UIPopoverSlidingChromeView : UIPopoverBackgroundView {

}
 + (double) arrowHeight;
 + (double) arrowBase;
 + ({UIEdgeInsets=dddd}) contentViewInsets;
 + (double) cornerRadius;

 - (void) layoutSubviews;
 - ({CGSize=dd}) _shadowOffset;
 - (unsigned long long) arrowDirection;
 - (void) setArrowDirection:(unsigned long long)a;
 - (double) _shadowRadius;
 - ({UIEdgeInsets=dddd}) _shadowInsets;
 - (double) _shadowOpacity;
 - (void) setArrowOffset:(double)a;
 - (double) arrowOffset;
 - ({UIEdgeInsets=dddd}) _contentViewInsets;
 - (id) _shadowPathForRect:({CGRect={CGPoint=dd}{CGSize=dd}})aarrowDirection:(unsigned long long)b;


@end

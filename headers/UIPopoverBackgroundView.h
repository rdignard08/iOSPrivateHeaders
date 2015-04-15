
@protocol UIPopoverBackgroundViewMethods;
@interface UIPopoverBackgroundView : UIView <UIPopoverBackgroundViewMethods> {

}
 + (BOOL) wantsDefaultContentAppearance;
 + (d) arrowHeight;
 + (d) arrowBase;
 + ({UIEdgeInsets=dddd}) contentViewInsets;
 + (d) _contentViewCornerRadiusForArrowDirection:(Q)a;
 + (d) cornerRadius;

 - (void) layoutSubviews;
 - (BOOL) _shouldAnimatePropertyWithKey:(id)a;
 - ({CGSize=dd}) _shadowOffset;
 - (Q) arrowDirection;
 - (void) setArrowDirection:(Q)a;
 - (d) _shadowRadius;
 - ({UIEdgeInsets=dddd}) _shadowInsets;
 - (d) _shadowOpacity;
 - (id) _shadowPath;
 - (void) setArrowOffset:(d)a;
 - (d) arrowOffset;
 - (q) backgroundStyle;
 - ({UIEdgeInsets=dddd}) _contentViewInsets;
 - (id) _shadowPathForRect:({CGRect={CGPoint=dd}{CGSize=dd}})aarrowDirection:(Q)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentViewFrame;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _backgroundContentViewFrame;
 - (void) _updateShadow;
 - ({UIEdgeInsets=dddd}) _contentViewInsetsForArrowDirection:(Q)a;
 - (BOOL) _wantsDefaultContentAppearance;
 - (id) actionForLayer:(id)aforKey:(id)b;


@end

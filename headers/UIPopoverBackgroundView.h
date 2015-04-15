
@protocol UIPopoverBackgroundViewMethods;
@interface UIPopoverBackgroundView : UIView <UIPopoverBackgroundViewMethods> {

}
 + (BOOL) wantsDefaultContentAppearance;
 + (double) arrowHeight;
 + (double) arrowBase;
 + ({UIEdgeInsets=dddd}) contentViewInsets;
 + (double) _contentViewCornerRadiusForArrowDirection:(unsigned long long)a;
 + (double) cornerRadius;

 - (void) layoutSubviews;
 - (BOOL) _shouldAnimatePropertyWithKey:(id)a;
 - ({CGSize=dd}) _shadowOffset;
 - (unsigned long long) arrowDirection;
 - (void) setArrowDirection:(unsigned long long)a;
 - (double) _shadowRadius;
 - ({UIEdgeInsets=dddd}) _shadowInsets;
 - (double) _shadowOpacity;
 - (id) _shadowPath;
 - (void) setArrowOffset:(double)a;
 - (double) arrowOffset;
 - (long long) backgroundStyle;
 - ({UIEdgeInsets=dddd}) _contentViewInsets;
 - (id) _shadowPathForRect:({CGRect={CGPoint=dd}{CGSize=dd}})aarrowDirection:(unsigned long long)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentViewFrame;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _backgroundContentViewFrame;
 - (void) _updateShadow;
 - ({UIEdgeInsets=dddd}) _contentViewInsetsForArrowDirection:(unsigned long long)a;
 - (BOOL) _wantsDefaultContentAppearance;
 - (id) actionForLayer:(id)aforKey:(id)b;


@end

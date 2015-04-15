
@interface _UIViewServiceDummyPopoverBackgroundView : UIPopoverBackgroundView {

    double arrowOffset;
    unsigned long long arrowDirection;
}
 + (BOOL) wantsDefaultContentAppearance;
 + (double) arrowHeight;
 + (double) arrowBase;
 + ({UIEdgeInsets=dddd}) contentViewInsets;

 - ({CGSize=dd}) _shadowOffset;
 - (unsigned long long) arrowDirection;
 - (void) setArrowDirection:(unsigned long long)a ;
 - (double) _shadowRadius;
 - (double) _shadowOpacity;
 - (void) setArrowOffset:(double)a ;
 - (double) arrowOffset;


@end

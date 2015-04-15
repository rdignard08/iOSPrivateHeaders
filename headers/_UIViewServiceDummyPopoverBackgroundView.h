
@interface _UIViewServiceDummyPopoverBackgroundView : UIPopoverBackgroundView {

    d arrowOffset;
    Q arrowDirection;
}
 + (BOOL) wantsDefaultContentAppearance;
 + (d) arrowHeight;
 + (d) arrowBase;
 + ({UIEdgeInsets=dddd}) contentViewInsets;

 - ({CGSize=dd}) _shadowOffset;
 - (Q) arrowDirection;
 - (void) setArrowDirection:(Q)a;
 - (d) _shadowRadius;
 - (d) _shadowOpacity;
 - (void) setArrowOffset:(d)a;
 - (d) arrowOffset;


@end

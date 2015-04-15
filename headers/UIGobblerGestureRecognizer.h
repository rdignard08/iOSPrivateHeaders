
@interface UIGobblerGestureRecognizer : UIGestureRecognizer {

    UIView _excludedView;
}

 - (void) dealloc;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (id) initWithTarget:(id)aaction:(SEL)bexcludedView:(id)c;
 - (BOOL) canBePreventedByGestureRecognizer:(id)a;
 - (BOOL) canPreventGestureRecognizer:(id)a;


@end

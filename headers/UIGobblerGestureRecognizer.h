
@interface UIGobblerGestureRecognizer : UIGestureRecognizer {

    UIView* _excludedView;
}

 - (void) dealloc;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (id) initWithTarget:(id)a action:(SEL)b excludedView:(id)c ;
 - (BOOL) canBePreventedByGestureRecognizer:(id)a ;
 - (BOOL) canPreventGestureRecognizer:(id)a ;


@end

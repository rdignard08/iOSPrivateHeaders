
@interface UITableViewCellDeleteConfirmationGestureRecognizer : UIGestureRecognizer {

    UIView* _excludedView;
}

 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (id) initWithTarget:(id)a action:(SEL)b excludedView:(id)c ;


@end

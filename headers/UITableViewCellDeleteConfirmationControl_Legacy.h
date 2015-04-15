
@interface UITableViewCellDeleteConfirmationControl_Legacy : UIControl {

    BOOL _visible;
    UITableViewCellDeleteConfirmationGestureRecognizer* _deleteConfirmationGesture;
}
 + ({CGSize=dd}) defaultSizeForTitle:(id)a;

 - (void) dealloc;
 - (id) hitTest:({CGPoint=dd})a withEvent:(id)b ;
 - ({CGSize=dd}) defaultSize;
 - (void) layoutSubviews;
 - (id) initWithTitle:(id)a ;
 - (void) cancelTrackingWithEvent:(id)a ;
 - (BOOL) beginTrackingWithTouch:(id)a withEvent:(id)b ;
 - (BOOL) continueTrackingWithTouch:(id)a withEvent:(id)b ;
 - (void) endTrackingWithTouch:(id)a withEvent:(id)b ;
 - (void) _confirmationAnimationDidEnd;
 - (void) touchUpInside:(id)a ;
 - (void) touchUpOutside:(id)a ;
 - (void) cancelDeleteConfirmationWithGesture:(id)a ;
 - (void) setVisible:(BOOL)a animated:(BOOL)b ;
 - (void) setVisible:(BOOL)a ;
 - (BOOL) isVisible;


@end

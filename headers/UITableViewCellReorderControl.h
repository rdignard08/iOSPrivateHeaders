
@interface UITableViewCellReorderControl : UIControl {

    UITableViewCell* _cell;
    {CGPoint="x"d"y"d} _downPoint;
}
 + ({CGSize=dd}) defaultSize;
 + (id) grabberImage;

 - (void) layoutSubviews;
 - (void) cancelTrackingWithEvent:(id)a ;
 - (BOOL) shouldTrack;
 - (BOOL) beginTrackingWithTouch:(id)a withEvent:(id)b ;
 - (BOOL) continueTrackingWithTouch:(id)a withEvent:(id)b ;
 - (void) endTrackingWithTouch:(id)a withEvent:(id)b ;
 - (id) grabberImage;
 - (id) initWithTableViewCell:(id)a ;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end

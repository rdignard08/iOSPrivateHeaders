
@interface _UITableViewCellGrabber : UIControl {

    UITableViewCell* _cell;
    {CGPoint="x"d"y"d} _downPoint;
}
 + (id) grabberImage;

 - (void) cancelTrackingWithEvent:(id)a ;
 - (BOOL) shouldTrack;
 - (BOOL) beginTrackingWithTouch:(id)a withEvent:(id)b ;
 - (BOOL) continueTrackingWithTouch:(id)a withEvent:(id)b ;
 - (void) endTrackingWithTouch:(id)a withEvent:(id)b ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a tableViewCell:(id)b ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end

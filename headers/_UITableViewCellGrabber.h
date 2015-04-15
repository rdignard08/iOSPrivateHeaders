
@interface _UITableViewCellGrabber : UIControl {

    UITableViewCell _cell;
    {CGPoint="x"d"y"d} _downPoint;
}
 + (id) grabberImage;

 - (void) cancelTrackingWithEvent:(id)a;
 - (BOOL) shouldTrack;
 - (BOOL) beginTrackingWithTouch:(id)awithEvent:(id)b;
 - (BOOL) continueTrackingWithTouch:(id)awithEvent:(id)b;
 - (void) endTrackingWithTouch:(id)awithEvent:(id)b;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})atableViewCell:(id)b;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end

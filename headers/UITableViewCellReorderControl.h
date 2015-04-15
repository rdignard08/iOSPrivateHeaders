
@interface UITableViewCellReorderControl : UIControl {

    @"UITableViewCell" _cell;
    {CGPoint="x"d"y"d} _downPoint;
}
 + ({CGSize=dd}) defaultSize;
 + (id) grabberImage;

 - (void) layoutSubviews;
 - (void) cancelTrackingWithEvent:(id)a;
 - (BOOL) shouldTrack;
 - (BOOL) beginTrackingWithTouch:(id)awithEvent:(id)b;
 - (BOOL) continueTrackingWithTouch:(id)awithEvent:(id)b;
 - (void) endTrackingWithTouch:(id)awithEvent:(id)b;
 - (id) grabberImage;
 - (id) initWithTableViewCell:(id)a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end

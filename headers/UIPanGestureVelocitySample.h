
@interface UIPanGestureVelocitySample : NSObject {

    {CGPoint="x"d"y"d} start;
    {CGPoint="x"d"y"d} end;
    double dt;
}
@property (atomic, assign, readwrite) NSNumber* start;
@property (atomic, assign, readwrite) NSNumber* end;
@property (atomic, assign, readwrite) NSNumber* dt;

 - ({CGPoint=dd}) end;
 - (void) setStart:({CGPoint=dd})a ;
 - (void) setEnd:({CGPoint=dd})a ;
 - (double) dt;
 - (void) setDt:(double)a ;
 - ({CGPoint=dd}) start;


@end

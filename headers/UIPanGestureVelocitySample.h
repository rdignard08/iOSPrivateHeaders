
@interface UIPanGestureVelocitySample : NSObject {

    {CGPoint="x"d"y"d} start;
    {CGPoint="x"d"y"d} end;
    d dt;
}
@property (atomic, assign, readwrite) NSNumber* start;
@property (atomic, assign, readwrite) NSNumber* end;
@property (atomic, assign, readwrite) NSNumber* dt;

 - ({CGPoint=dd}) end;
 - (void) setStart:({CGPoint=dd})a;
 - (void) setEnd:({CGPoint=dd})a;
 - (d) dt;
 - (void) setDt:(d)a;
 - ({CGPoint=dd}) start;


@end


@interface UIPeripheralHostState : NSObject {

    {UIPeripheralAnimationGeometry="outPosition"{CGPoint="x"d"y"d}"inPosition"{CGPoint="x"d"y"d}"bounds"{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}}"transform"{CGAffineTransform="a"d"b"d"c"d"d"d"tx"d"ty"d}"targetFrameHeightDelta"d} _geometry;
    NSDictionary* _screenGeometry;
    BOOL _inPositionIsDestination;
}
@property (nonatomic, assign, readwrite) NSNumber* geometry;
@property (nonatomic, retain, readwrite) NSDictionary* screenGeometry;
@property (nonatomic, assign, readwrite) NSNumber* inPositionIsDestination;
 + (id) stateWithGeometry:({UIPeripheralAnimationGeometry={CGPoint=dd}{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}d})ainPositionIsDestination:(BOOL)b;

 - (void) dealloc;
 - ({UIPeripheralAnimationGeometry={CGPoint=dd}{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}d}) geometry;
 - (void) setGeometry:({UIPeripheralAnimationGeometry={CGPoint=dd}{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}d})a ;
 - (void) setInPositionIsDestination:(BOOL)a ;
 - (void) setScreenGeometry:(id)a ;
 - (id) screenGeometry;
 - (BOOL) inPositionIsDestination;


@end


@protocol UICoordinateSpace;
@interface _UIScreenFixedCoordinateSpace : NSObject <UICoordinateSpace> {

    UIScreen* _screen;
}
@property (nonatomic, assign, readwrite, setter=_setScreen:) UIScreen* _screen;
@property (nonatomic, assign, readonly) NSNumber* bounds;

 - (id) _screen;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})a toCoordinateSpace:(id)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})a fromCoordinateSpace:(id)b ;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})a toCoordinateSpace:(id)b ;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})a fromCoordinateSpace:(id)b ;
 - (void) _setScreen:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;


@end

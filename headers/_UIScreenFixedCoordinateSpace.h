
@protocol UICoordinateSpace;
@interface _UIScreenFixedCoordinateSpace : NSObject <UICoordinateSpace> {

    UIScreen* _screen;
}
@property (nonatomic, assign, readwrite, setter=_setScreen:) UIScreen* _screen;
@property (nonatomic, assign, readonly) NSNumber* bounds;

 - (id) _screen;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})atoCoordinateSpace:(id)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})afromCoordinateSpace:(id)b;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})atoCoordinateSpace:(id)b;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})afromCoordinateSpace:(id)b;
 - (void) _setScreen:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;


@end

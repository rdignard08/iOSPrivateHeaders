
@interface UIGradient : NSObject {

    ^{?=ddddd} _values;
    double _height;
    ^{CGShading=} _shader;
}

 - (void) dealloc;
 - (void) fillRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainContext:(^{CGContext=})b;
 - (id) initVerticalWithValues:(^{?=ddddd})a;
 - (void) fillRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end

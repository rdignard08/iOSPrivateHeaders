
@interface CIKernel : NSObject {

    ^v _priv;
}
 + (id) kernelsWithString:(id)a;
 + (id) _getDictForSourceString:(id)adimensionality:(^i)b;
 + (id) kernelWithString:(id)a;

 - (id) description;
 - (id) name;
 - (id) initWithString:(id)a ;
 - (id) init;
 - (^v) _internalRepresentation;
 - (id) _initWithInternalRepresentation:(^v)a ;
 - (id) applyWithExtent:({CGRect={CGPoint=dd}{CGSize=dd}})a roiCallback:(@?)b arguments:(id)c ;
 - (id) initWithDict:(id)a ;
 - (int) _argumentTypeAtIndex:(int)a ;
 - (id) applyWithExtent:({CGRect={CGPoint=dd}{CGSize=dd}})a roiCallback:(@?)b andArguments:(id)c ;
 - (id) applyWithExtent:({CGRect={CGPoint=dd}{CGSize=dd}})a roiCallback:(@?)b cpuCallback:(@?)c colorManagement:(BOOL)d andArguments:(id)e ;


@end


@interface CUIPSDLayoutMetricsChannel : NSObject {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _edgeInsets;
    NSString* _name;
}
@property (nonatomic, assign, readonly) NSNumber* edgeInsets;
@property (nonatomic, retain, readwrite) NSString* name;

 - (id) .cxx_construct;
 - (id) name;
 - (void) setName:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) edgeInsets;
 - (void) setEdgeInsets:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) sanitizeEdgeInsets;
 - (id) initWithEdgeInsets:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end

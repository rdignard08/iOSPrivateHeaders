
@protocol BSXPCCoding;
@interface FBSSceneOcclusion : NSObject <BSXPCCoding> {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _rect;
}
 + (id) occlusionWithRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 + (id) fullOcclusion;

 - (id) description;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) init;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) CGRect;
 - (id) _initWithCGRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (BOOL) isEqualToOcclusion:(id)a ;
 - (void) encodeWithXPCDictionary:(id)a ;
 - (id) initWithXPCDictionary:(id)a ;


@end


@protocol BSXPCCoding;
@interface FBSContext : NSObject <BSXPCCoding> {

    unsigned int _identifier;
    double _level;
}
@property (nonatomic, assign, readonly) NSNumber* identifier;
@property (nonatomic, assign, readonly) NSNumber* level;
 + (id) contextWithSceneContext:(id)a;

 - (id) description;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (unsigned int) identifier;
 - (double) level;
 - (void) encodeWithXPCDictionary:(id)a ;
 - (id) initWithXPCDictionary:(id)a ;


@end

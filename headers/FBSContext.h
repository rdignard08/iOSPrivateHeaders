
@protocol BSXPCCoding;
@interface FBSContext : NSObject <BSXPCCoding> {

    I _identifier;
    d _level;
}
@property (nonatomic, assign, readonly) NSNumber* identifier;
@property (nonatomic, assign, readonly) NSNumber* level;
 + (id) contextWithSceneContext:(id)a;

 - (id) description;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (I) identifier;
 - (d) level;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;


@end


@protocol BSXPCCoding, NSCopying, NSSecureCoding;
@interface FBSDisplay : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {

    I _seed;
    @"CADisplay" _caDisplay;
    d _scale;
    Q _type;
    q _tags;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _referenceBounds;
}
@property (nonatomic, retain, readonly) CADisplay* caDisplay;
@property (nonatomic, assign, readwrite) NSNumber* scale;
@property (nonatomic, assign, readonly) NSNumber* orientation;
@property (nonatomic, assign, readwrite) NSNumber* referenceBounds;
@property (nonatomic, assign, readonly) NSNumber* type;
@property (nonatomic, assign, readonly) NSNumber* tags;
@property (nonatomic, assign, readwrite) NSNumber* seed;
 + (BOOL) supportsSecureCoding;
 + (id) _CADisplayForId:(I)a;

 - (d) scale;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (Q) type;
 - (id) caDisplay;
 - (id) initWithCADisplay:(id)aisMainDisplay:(BOOL)b;
 - (id) initWithCADisplay:(id)aisMainDisplay:(BOOL)bseed:(I)ctags:(q)dscale:(d)e;
 - (Q) _typeFromTags:(Q)a;
 - (BOOL) isMainDisplay;
 - (q) tags;
 - (BOOL) isCarDisplay;
 - (BOOL) isAirPlayDisplay;
 - (BOOL) isiPodOnlyDisplay;
 - (BOOL) isMusicOnlyDisplay;
 - (BOOL) isWatchOnlyDisplay;
 - (BOOL) isHiddenDisplay;
 - (BOOL) isExternal;
 - (id) initWithCADisplay:(id)a;
 - (id) _nameForDisplayType;
 - (void) setConnected:(BOOL)a;
 - (BOOL) isConnected;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) referenceBounds;
 - (void) setReferenceBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setSeed:(I)a;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;
 - (d) orientation;
 - (void) setScale:(d)a;
 - (I) seed;


@end

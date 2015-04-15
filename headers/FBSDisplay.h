
@protocol BSXPCCoding, NSCopying, NSSecureCoding;
@interface FBSDisplay : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {

    unsigned int _seed;
    CADisplay _caDisplay;
    double _scale;
    unsigned long long _type;
    long long _tags;
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
 + (id) _CADisplayForId:(unsigned int)a;

 - (double) scale;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (unsigned long long) type;
 - (id) caDisplay;
 - (id) initWithCADisplay:(id)aisMainDisplay:(BOOL)b;
 - (id) initWithCADisplay:(id)aisMainDisplay:(BOOL)bseed:(unsigned int)ctags:(long long)dscale:(double)e;
 - (unsigned long long) _typeFromTags:(unsigned long long)a;
 - (BOOL) isMainDisplay;
 - (long long) tags;
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
 - (void) setSeed:(unsigned int)a;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;
 - (double) orientation;
 - (void) setScale:(double)a;
 - (unsigned int) seed;


@end

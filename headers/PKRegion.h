
@protocol NSCopying, NSCoding;
@interface PKRegion : NSObject <NSCopying, NSCoding> {

    i _shape;
    BOOL _isExclusive;
    {vec4="v"} _halfExtent;
    {shared_ptr<PKCPathHolder>="__ptr_"^{PKCPathHolder}"__cntrl_"^{__shared_weak_count}} _path;
    i _regionOp;
    i _shape2;
    {vec4="v"} _halfExtent2;
    {shared_ptr<PKCPathHolder>="__ptr_"^{PKCPathHolder}"__cntrl_"^{__shared_weak_count}} _path2;
}
@property (nonatomic, assign, readonly) NSNumber* path;
 + (id) infiniteRegion;

 - (id) initWithPath:(^{CGPath=})a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (^{CGPath=}) path;
 - (id) initWithSize:({CGSize=dd})a;
 - (BOOL) containsPoint:({CGPoint=dd})a;
 - (id) initWithRadius:(f)a;
 - (id) inverseRegion;
 - (id) regionByUnionWithRegion:(id)a;
 - (id) regionByDifferenceFromRegion:(id)a;
 - (id) regionByIntersectionWithRegion:(id)a;
 - (void) containsPoints:(r^f)alocationStride:(q)bresults:(*)cresultsStride:(q)dcount:(i)e;


@end

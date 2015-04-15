
@protocol NSCopying, NSCoding;
@interface PKRegion : NSObject <NSCopying, NSCoding> {

    int _shape;
    BOOL _isExclusive;
    v* _halfExtent;
    {shared_ptr<PKCPathHolder>="__ptr_"^{PKCPathHolder}"__cntrl_"^{__shared_weak_count}} _path;
    int _regionOp;
    int _shape2;
    v* _halfExtent2;
    {shared_ptr<PKCPathHolder>="__ptr_"^{PKCPathHolder}"__cntrl_"^{__shared_weak_count}} _path2;
}
@property (nonatomic, assign, readonly) NSNumber* path;
 + (id) infiniteRegion;

 - (id) initWithPath:(^{CGPath=})a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (^{CGPath=}) path;
 - (id) initWithSize:({CGSize=dd})a ;
 - (BOOL) containsPoint:({CGPoint=dd})a ;
 - (id) initWithRadius:(float)a ;
 - (id) inverseRegion;
 - (id) regionByUnionWithRegion:(id)a ;
 - (id) regionByDifferenceFromRegion:(id)a ;
 - (id) regionByIntersectionWithRegion:(id)a ;
 - (void) containsPoints:(r^f)a locationStride:(long long)b results:(char*)c resultsStride:(long long)d count:(int)e ;


@end

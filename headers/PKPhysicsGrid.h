
@interface PKPhysicsGrid : NSObject {

    {shared_ptr<PKCGrid>="__ptr_"^{PKCGrid}"__cntrl_"^{__shared_weak_count}} grid;
    @"PKQuadTree" quadTree;
}
@property (nonatomic, assign, readonly) NSNumber* width;
@property (nonatomic, assign, readonly) NSNumber* height;
@property (nonatomic, assign, readwrite) NSNumber* gridPtr;
 + (id) gridFromOccupancyArray:(r*)abytePitch:(i)bwidth:(i)cheight:(i)d;
 + (id) gridFromRGBAU8PixelData:(r*)aimageWidth:(i)bimageHeight:(i)calphaThreshold:(f)daccuracy:(f)e;
 + (id) vectorGridFromRGBAU8PixelData:(r*)aimageWidth:(i)bimageHeight:(i)caccuracy:(f)d;

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - ({shared_ptr<PKCGrid>=^{PKCGrid}^{__shared_weak_count}}) gridPtr;
 - (BOOL) isGridRegionOccupied:(i)ay:(i)bwidth:(i)cheight:(i)d;
 - (C) gridDataAtX:(i)ay:(i)bz:(i)c;
 - (id) physicsBodyFromSmoothedOutline:(d)asize:({CGSize=dd})b;
 - ({shared_ptr<PKPath>=^{PKPath}^{__shared_weak_count}}) pathFromOutlineWithSmoothingThreshold:(d)abounds:({?={?=ff}{?=ff}})b;
 - (id) physicsBodyFromLVS0:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setGridPtr:({shared_ptr<PKCGrid>=^{PKCGrid}^{__shared_weak_count}})a;
 - (i) width;
 - (i) height;


@end

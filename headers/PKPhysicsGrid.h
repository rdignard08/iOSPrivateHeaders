
@interface PKPhysicsGrid : NSObject {

    {shared_ptr<PKCGrid>="__ptr_"^{PKCGrid}"__cntrl_"^{__shared_weak_count}} grid;
    PKQuadTree quadTree;
}
@property (nonatomic, assign, readonly) NSNumber* width;
@property (nonatomic, assign, readonly) NSNumber* height;
@property (nonatomic, assign, readwrite) NSNumber* gridPtr;
 + (id) gridFromOccupancyArray:(r*)abytePitch:(int)bwidth:(int)cheight:(int)d;
 + (id) gridFromRGBAU8PixelData:(r*)aimageWidth:(int)bimageHeight:(int)calphaThreshold:(float)daccuracy:(float)e;
 + (id) vectorGridFromRGBAU8PixelData:(r*)aimageWidth:(int)bimageHeight:(int)caccuracy:(float)d;

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - ({shared_ptr<PKCGrid>=^{PKCGrid}^{__shared_weak_count}}) gridPtr;
 - (BOOL) isGridRegionOccupied:(int)ay:(int)bwidth:(int)cheight:(int)d;
 - (unsigned char) gridDataAtX:(int)ay:(int)bz:(int)c;
 - (id) physicsBodyFromSmoothedOutline:(double)asize:({CGSize=dd})b;
 - ({shared_ptr<PKPath>=^{PKPath}^{__shared_weak_count}}) pathFromOutlineWithSmoothingThreshold:(double)abounds:({?={?=ff}{?=ff}})b;
 - (id) physicsBodyFromLVS0:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setGridPtr:({shared_ptr<PKCGrid>=^{PKCGrid}^{__shared_weak_count}})a;
 - (int) width;
 - (int) height;


@end

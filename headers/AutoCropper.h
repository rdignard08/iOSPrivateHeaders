
@interface AutoCropper : NSObject {

    NSNumber* bufferZone;
    BOOL shouldFavorBottom;
    BOOL shouldFavorTop;
    {CGSize="width"d"height"d} originalImageSize;
}
@property (nonatomic, retain, readwrite) NSNumber* bufferZone;
@property (nonatomic, assign, readwrite) NSNumber* shouldFavorBottom;
@property (nonatomic, assign, readwrite) NSNumber* shouldFavorTop;
@property (nonatomic, assign, readwrite) NSNumber* originalImageSize;

 - (id) init;
 - (void) setShouldFavorTop:(BOOL)a ;
 - (void) setShouldFavorBottom:(BOOL)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectContainingRect:({CGRect={CGPoint=dd}{CGSize=dd}})a andOtherRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectWithSize:({CGSize=dd})a andPoint:({CGPoint=dd})b inPosition:(int)c fromOriginalSize:({CGSize=dd})d ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) scaleRect:({CGRect={CGPoint=dd}{CGSize=dd}})a toFitSize:({CGSize=dd})b withAnchorPoint:({CGPoint=dd})c ;
 - (int) determineBestPositionWithinSize:({CGSize=dd})a forImportantRect:({CGRect={CGPoint=dd}{CGSize=dd}})b restrictRect:({CGRect={CGPoint=dd}{CGSize=dd}})c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) scaleRect:({CGRect={CGPoint=dd}{CGSize=dd}})a byScale:(double)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) expandRect:({CGRect={CGPoint=dd}{CGSize=dd}})a toContainRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) computeClippingWithinSize:({CGSize=dd})a andImportantRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (int) getRatioOfSize:({CGSize=dd})a ;
 - (id) clusterRects:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) computeClippingWithinSize:({CGSize=dd})a andImportantRects:(id)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) computeClippingWithinSize:({CGSize=dd})a forImportantRect:({CGRect={CGPoint=dd}{CGSize=dd}})b andType:(int)c restrictRect:({CGRect={CGPoint=dd}{CGSize=dd}})d ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) computeClippingWithinSize:({CGSize=dd})a forMultipleRects:(id)b ;
 - (id) bufferZone;
 - (void) setBufferZone:(id)a ;
 - (BOOL) shouldFavorTop;
 - (BOOL) shouldFavorBottom;
 - ({CGSize=dd}) originalImageSize;
 - (void) setOriginalImageSize:({CGSize=dd})a ;


@end
